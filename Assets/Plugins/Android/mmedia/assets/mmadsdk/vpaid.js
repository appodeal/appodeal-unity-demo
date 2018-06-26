/*! Ad-SDK-JS-Bridge - 1.4.0 - c352d9a - 2017-02-22 */
(function(window, document) {
    if (window.MmJsBridge && window.MmJsBridge.vpaid) {
        return;
    }
    var GENERIC_NAMESPACE = null;
    var MMJS_API_MODULE = "mmjs";
    function capitalizeFirstLetter(string) {
        if (string) {
            return string.charAt(0).toUpperCase() + string.slice(1);
        } else {
            return "";
        }
    }
    function copyObject(object) {
        var newObject = {};
        Object.keys(object).forEach(function(key) {
            newObject[key] = object[key];
        });
        return newObject;
    }
    function callNativeLayer(apiModule, action, parameters) {
        log.debug("Calling into the native layer with apiModule %s, action %s, and parameters %s", apiModule, action, parameters);
        var i;
        var injectedNamespace = window["MmInjectedFunctions" + capitalizeFirstLetter(apiModule)];
        if (injectedNamespace) {
            log.debug("Selected to communicate with native layer using an injected bridge function");
            var parameterMap = {};
            if (parameters && parameters.length > 0) {
                for (i = 0; i < parameters.length; i++) {
                    if (parameters[i].value !== null) {
                        parameterMap[parameters[i].name] = parameters[i].value;
                    }
                }
            }
            if (injectedNamespace[action]) {
                injectedNamespace[action](JSON.stringify(parameterMap));
            } else {
                log.error("The action %s is not available", action);
            }
        } else {
            log.debug("Selected to communicate with native layer using an iframe");
            var scheme = apiModule ? apiModule : "mmsdk";
            var url = scheme + "://" + action;
            if (parameters && parameters.length > 0) {
                var paramsAddedToUrl = 0;
                var value;
                for (i = 0; i < parameters.length; i++) {
                    value = parameters[i].value;
                    if (value !== null && typeof value == "object") {
                        value = JSON.stringify(value);
                    }
                    if (value !== null) {
                        if (paramsAddedToUrl === 0) {
                            url += "?";
                        } else {
                            url += "&";
                        }
                        url += encodeURIComponent(parameters[i].name) + "=" + encodeURIComponent(value);
                        paramsAddedToUrl++;
                    }
                }
            }
            var iframe = document.createElement("iframe");
            iframe.style.display = "none";
            iframe.src = url;
            setTimeout(function() {
                document.body.appendChild(iframe);
                document.body.removeChild(iframe);
            }, 0);
        }
        log.debug("Bottom of callNativeLayer");
    }
    var hasCommonLoaded = !!window.MmJsBridge;
    if (!hasCommonLoaded) {
        (function() {
            function getPopupFunction(name) {
                return function() {
                    log.error("Calling the function %s is not allowed", name);
                };
            }
            window.mmHiddenAlert = window.alert;
            Object.defineProperties(window, {
                alert: {
                    value: getPopupFunction("alert")
                },
                confirm: {
                    value: getPopupFunction("confirm")
                },
                prompt: {
                    value: getPopupFunction("prompt")
                }
            });
        })();
        window.MmJsBridge = {};
        (function() {
            var LOG_LEVELS = {
                ERROR: {
                    text: "ERROR",
                    level: 0
                },
                WARN: {
                    text: "WARN",
                    level: 1
                },
                INFO: {
                    text: "INFO",
                    level: 2
                },
                DEBUG: {
                    text: "DEBUG",
                    level: 3
                }
            };
            var $logLevel = LOG_LEVELS.INFO;
            var loggingSupported = window.console && console.log;
            function genericLog(args, logLevel) {
                if (loggingSupported && logLevel.level <= $logLevel.level) {
                    var message = args[0];
                    if (args.length > 1) {
                        for (var i = 1; i < args.length; i++) {
                            var replacement = args[i];
                            if (!exists(replacement)) {
                                replacement = "";
                            } else if (isObject(replacement)) {
                                replacement = JSON.stringify(replacement);
                            } else if (isFunction(replacement)) {
                                replacement = replacement.toString();
                            }
                            message = message.replace("%s", replacement);
                        }
                    }
                    console.log(logLevel.text + ": " + message);
                }
            }
            MmJsBridge.logging = {
                setLogLevel: function(logLevelString) {
                    if (LOG_LEVELS.hasOwnProperty(logLevelString)) {
                        $logLevel = LOG_LEVELS[logLevelString];
                    }
                },
                log: {
                    error: function() {
                        genericLog(arguments, LOG_LEVELS.ERROR);
                    },
                    warn: function() {
                        genericLog(arguments, LOG_LEVELS.WARN);
                    },
                    info: function() {
                        genericLog(arguments, LOG_LEVELS.INFO);
                    },
                    debug: function() {
                        genericLog(arguments, LOG_LEVELS.DEBUG);
                    }
                }
            };
        })();
        MmJsBridge.callbackManager = function() {
            var callbacks = [];
            return {
                callCallback: function(callbackId) {
                    log.debug("MmJsBridge.callbackManager.callCallback called with callbackId %s", callbackId);
                    var callbackIdNum = parseInt(callbackId, 10);
                    if (isNumber(callbackIdNum) && !isNaN(callbackIdNum) && callbackIdNum >= 0 && callbackIdNum < callbacks.length) {
                        var callback = callbacks[callbackIdNum];
                        var argsArray = Array.prototype.slice.call(arguments, 1);
                        log.debug("Found callback. Calling %s with arguments %s", callback, argsArray);
                        callback.apply(window, argsArray);
                    } else {
                        log.warn("Unable to call callback with id %s because it could not be found", callbackId);
                    }
                    log.debug("Bottom of MmJsBridge.callbackManager.callCallback");
                },
                generateCallbackId: function(callback) {
                    var callbackId;
                    var index = callbacks.indexOf(callback);
                    if (index >= 0) {
                        callbackId = index;
                    } else {
                        callbacks.push(callback);
                        callbackId = callbacks.length - 1;
                    }
                    log.debug("Callback id %s for callback %s", callbackId, callback);
                    return callbackId;
                }
            };
        }();
    }
    var log = MmJsBridge.logging.log;
    function generateCallbackId(callback) {
        return MmJsBridge.callbackManager.generateCallbackId(callback);
    }
    function generateParameterObject(name, value) {
        return {
            name: name,
            value: defined(value) ? value : null
        };
    }
    function generateParameterArrayFromObject(obj) {
        var parameterArray = [];
        Object.keys(obj).forEach(function(key) {
            parameterArray.push(generateParameterObject(key, obj[key]));
        });
        return parameterArray;
    }
    function defined(variable) {
        return variable !== undefined;
    }
    function is(variable, type) {
        return typeof variable == type;
    }
    function isNumber(variable) {
        return is(variable, "number");
    }
    function isBoolean(variable) {
        return is(variable, "boolean");
    }
    function isString(variable) {
        return is(variable, "string");
    }
    function isFunction(variable) {
        return is(variable, "function");
    }
    function isObject(variable) {
        return is(variable, "object");
    }
    function exists(param) {
        return param !== undefined && param !== null && param !== "";
    }
    var ListenerManager = function() {
        var that = this;
        that._listeners = {};
        that._queue = [];
        that._inProgress = false;
    };
    ListenerManager.prototype = {
        constructor: ListenerManager,
        _enqueue: function(funcToExecute) {
            this._queue.push(funcToExecute);
        },
        _flushQueue: function() {
            var that = this;
            if (that._inProgress) {
                return;
            }
            that._inProgress = true;
            while (that._queue.length) {
                try {
                    var funcToExecute = that._queue.shift();
                    funcToExecute.call(that);
                } catch (err) {
                    log.error("Error executing listener. %s", err);
                }
            }
            that._inProgress = false;
        },
        addEventListener: function(event, listener) {
            var that = this;
            that._enqueue(function() {
                if (!that._listeners[event]) {
                    that._listeners[event] = [];
                }
                if (that._listeners[event].indexOf(listener) < 0) {
                    that._listeners[event].push(listener);
                }
            });
            that._flushQueue();
        },
        removeEventListener: function(event, listener) {
            var that = this;
            that._enqueue(function() {
                if (!that._listeners[event]) {
                    return;
                }
                if (!defined(listener)) {
                    delete that._listeners[event];
                    return;
                }
                var index = that._listeners[event].indexOf(listener);
                if (index >= 0) {
                    that._listeners[event].splice(index, 1);
                }
            });
            that._flushQueue();
        },
        callListeners: function(event, args) {
            var that = this;
            that._enqueue(function() {
                if (that._listeners[event]) {
                    that._listeners[event].forEach(function(listener) {
                        listener.apply(null, args);
                    });
                }
            });
            that._flushQueue();
        }
    };
    function httpGet(url, timeout, callback) {
        log.debug("httpGet called with url %s, timeout %s, and callback %s", url, timeout, callback);
        var callbackId = generateCallbackId(callback);
        callNativeLayer(MMJS_API_MODULE, "httpGet", [ generateParameterObject("url", url), generateParameterObject("timeout", timeout), generateParameterObject("callbackId", callbackId) ]);
    }
    (function() {
        var VPAID_API_MODULE = "vpaid";
        var VPAID_VERSION = "2.0";
        var closeButtonBase64EncodedImage = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAMgAAADICAYAAACtWK6eAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA3hpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDo3YzI5OTAxYS1jOWViLTQ3M2UtYjExNC1kMjhmMjZiY2MwNWIiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6MzJCRTE1N0ZGNDNBMTFFNEJDNTlDQzM2Q0FBMkQxNEYiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6MzJCRTE1N0VGNDNBMTFFNEJDNTlDQzM2Q0FBMkQxNEYiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo3YzI5OTAxYS1jOWViLTQ3M2UtYjExNC1kMjhmMjZiY2MwNWIiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6N2MyOTkwMWEtYzllYi00NzNlLWIxMTQtZDI4ZjI2YmNjMDVi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";
        var skipButtonBase64EncodedImage = "data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAAMgAAADICAYAAACtWK6eAAAAGXRFWHRTb2Z0d2FyZQBBZG9iZSBJbWFnZVJlYWR5ccllPAAAA3hpVFh0WE1MOmNvbS5hZG9iZS54bXAAAAAAADw/eHBhY2tldCBiZWdpbj0i77u/IiBpZD0iVzVNME1wQ2VoaUh6cmVTek5UY3prYzlkIj8+IDx4OnhtcG1ldGEgeG1sbnM6eD0iYWRvYmU6bnM6bWV0YS8iIHg6eG1wdGs9IkFkb2JlIFhNUCBDb3JlIDUuNS1jMDIxIDc5LjE1NTc3MiwgMjAxNC8wMS8xMy0xOTo0NDowMCAgICAgICAgIj4gPHJkZjpSREYgeG1sbnM6cmRmPSJodHRwOi8vd3d3LnczLm9yZy8xOTk5LzAyLzIyLXJkZi1zeW50YXgtbnMjIj4gPHJkZjpEZXNjcmlwdGlvbiByZGY6YWJvdXQ9IiIgeG1sbnM6eG1wTU09Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC9tbS8iIHhtbG5zOnN0UmVmPSJodHRwOi8vbnMuYWRvYmUuY29tL3hhcC8xLjAvc1R5cGUvUmVzb3VyY2VSZWYjIiB4bWxuczp4bXA9Imh0dHA6Ly9ucy5hZG9iZS5jb20veGFwLzEuMC8iIHhtcE1NOk9yaWdpbmFsRG9jdW1lbnRJRD0ieG1wLmRpZDo3YzI5OTAxYS1jOWViLTQ3M2UtYjExNC1kMjhmMjZiY2MwNWIiIHhtcE1NOkRvY3VtZW50SUQ9InhtcC5kaWQ6NjA3REVGM0NGNDNBMTFFNEJDNTlDQzM2Q0FBMkQxNEYiIHhtcE1NOkluc3RhbmNlSUQ9InhtcC5paWQ6NjA3REVGM0JGNDNBMTFFNEJDNTlDQzM2Q0FBMkQxNEYiIHhtcDpDcmVhdG9yVG9vbD0iQWRvYmUgUGhvdG9zaG9wIENDIDIwMTQgKE1hY2ludG9zaCkiPiA8eG1wTU06RGVyaXZlZEZyb20gc3RSZWY6aW5zdGFuY2VJRD0ieG1wLmlpZDo3YzI5OTAxYS1jOWViLTQ3M2UtYjExNC1kMjhmMjZiY2MwNWIiIHN0UmVmOmRvY3VtZW50SUQ9InhtcC5kaWQ6N2MyOTkwMWEtYzllYi00NzNlLWIxMTQtZDI4ZjI2YmNjMDVi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";
        var spinnerBase64EncodedImage = "data:image/gif;base64,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";
        var DEFAULT_VIDEO_WIDTH = 800;
        var DEFAULT_VIDEO_HEIGHT = 450;
        var STATES = {
            loading: 0,
            ready: 1,
            playing: 2,
            done: 3
        };
        var $callbacks = {
            AdLoaded: onAdLoaded,
            AdStarted: onAdStarted,
            AdStopped: onAdStopped,
            AdSkipped: onAdSkipped,
            AdSkippableStateChange: onAdSkippableStateChange,
            AdPaused: onAdPaused,
            AdPlaying: onAdPlaying,
            AdVolumeChange: onAdVolumeChange,
            AdImpression: onAdImpression,
            AdClickThru: onAdClickThru,
            AdVideoStart: onAdVideoStart,
            AdVideoFirstQuartile: onAdVideoFirstQuartile,
            AdVideoMidpoint: onAdVideoMidpoint,
            AdVideoThirdQuartile: onAdVideoThirdQuartile,
            AdVideoComplete: onAdVideoComplete,
            AdUserAcceptInvitation: onAdUserAcceptInvitation,
            AdUserClose: onAdUserClose,
            AdError: onAdError,
            AdLog: onAdLog
        };
        var TRACKING_EVENTS = {
            creativeView: "creativeViewUrls",
            start: "videoStartUrls",
            firstQuartile: "firstQuartileUrls",
            midpoint: "midpointUrls",
            thirdQuartile: "thirdQuartileUrls",
            complete: "videoCompleteUrls",
            mute: "muteUrls",
            unmute: "unmuteUrls",
            skip: "skipUrls",
            pause: "pauseUrls",
            resume: "resumeUrls",
            close: "closeUrls",
            closeLinear: "closeUrls",
            acceptInvitation: "userAcceptInvitationUrls",
            acceptInvitationLinear: "userAcceptInvitationUrls"
        };
        var $creative, $creativeVersion, $volume, $videoWidth, $videoHeight, $actualVideoWidth, $actualVideoHeight, $videoWidthAtInit, $videoHeightAtInit, $minSkipOffset, $maxSkipOffset, $startAdTimeout, $skipAdTimeout, $startAdTimeoutTime, $skipAdTimeoutTime, $htmlEndCardTimeoutTime, $adStartTimestamp, $adPausedTimestamp, $totalAdPausedTime, $minSkipOffsetTimeout, $maxSkipOffsetTimeout;
        var $minSkipOffsetReached = false;
        var $adSkippable = false;
        var $shouldFireSkipUrls = false;
        var $videoContainer = document.createElement("div");
        hideElement($videoContainer);
        $videoContainer.id = "aolVideoContainer";
        $videoContainer.style.position = "absolute";
        $videoContainer.style.left = "0px";
        $videoContainer.style.top = "0px";
        $videoContainer.style.backgroundColor = "black";
        var $video = document.createElement("video");
        $videoContainer.appendChild($video);
        $video.id = "aolVideo";
        $video.style.position = "absolute";
        $video.style.zIndex = "1";
        $video.setAttribute("webkit-playsinline", "");
        $video.setAttribute("playsinline", "");
        var $html = document.createElement("div");
        $videoContainer.appendChild($html);
        $html.id = "aolHtml";
        $html.style.position = "absolute";
        $html.style.zIndex = "2";
        var $skipButton = document.createElement("img");
        $videoContainer.appendChild($skipButton);
        hideElement($skipButton);
        $skipButton.id = "aolSkipButton";
        $skipButton.src = skipButtonBase64EncodedImage;
        $skipButton.style.width = "40px";
        $skipButton.style.height = "40px";
        $skipButton.style.position = "absolute";
        $skipButton.style.top = "0px";
        $skipButton.style.right = "0px";
        $skipButton.style.margin = "5px";
        $skipButton.addEventListener("click", onSkipButtonPressed);
        $skipButton.style.zIndex = "3";
        var $endcardContainer = document.createElement("div");
        hideElement($endcardContainer);
        $endcardContainer.id = "aolEndCardContainer";
        $endcardContainer.style.position = "absolute";
        $endcardContainer.style.left = "0";
        $endcardContainer.style.top = "0";
        $endcardContainer.style.backgroundColor = "white";
        var $closeButton = document.createElement("img");
        $endcardContainer.appendChild($closeButton);
        $closeButton.id = "aolCloseButton";
        $closeButton.src = closeButtonBase64EncodedImage;
        $closeButton.style.width = "40px";
        $closeButton.style.height = "40px";
        $closeButton.style.position = "absolute";
        $closeButton.style.top = "0px";
        $closeButton.style.right = "0px";
        $closeButton.style.margin = "5px";
        $closeButton.addEventListener("click", onCloseButtonPressed);
        $closeButton.style.zIndex = "2";
        var $currentState = STATES.loading;
        var $parsedVast = {};
        MmJsBridge.vpaid = {
            init: function(options) {
                log.debug("MmJsBridge.vpaid.init called with options %s", options);
                if (!options || !options.vastDocs || options.vastDocs.length === 0 || typeof options.minSkipOffset != "number" || typeof options.maxSkipOffset != "number" || typeof options.desiredBitrate != "number" || typeof options.startAdTimeout != "number" || typeof options.skipAdTimeout != "number" || typeof options.adUnitTimeout != "number" || typeof options.htmlEndCardTimeout != "number") {
                    log.error("A required option was not set.");
                    callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                    return;
                }
                if (!parseVast(options.vastDocs)) {
                    log.error("Failed to parse VAST");
                    callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                    return;
                }
                document.body.appendChild($videoContainer);
                document.body.appendChild($endcardContainer);
                $startAdTimeoutTime = options.startAdTimeout;
                $skipAdTimeoutTime = options.skipAdTimeout;
                $htmlEndCardTimeoutTime = options.htmlEndCardTimeout;
                log.debug("Finished parsing vast: %s", $parsedVast);
                var iframe = document.createElement("iframe");
                iframe.id = "aolVpaidJsIframe";
                iframe.style.display = "none";
                document.body.appendChild(iframe);
                var vpaidScript = document.createElement("script");
                var vpaidScriptTimedOut = false;
                var vpaidScriptTimeout = setTimeout(function() {
                    vpaidScriptTimedOut = true;
                    log.error("VPAID creative JS file did not load within " + options.adUnitTimeout + "ms");
                    callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                }, options.adUnitTimeout);
                vpaidScript.onload = function() {
                    log.debug("vpaidScript.onload called");
                    if (vpaidScriptTimedOut) {
                        return;
                    }
                    clearTimeout(vpaidScriptTimeout);
                    if (iframe.contentWindow.getVPAIDAd) {
                        log.debug("Found iframe.contentWindow.getVPAIDAd");
                        var fn = iframe.contentWindow.getVPAIDAd;
                        $creative = null;
                        if (fn && typeof fn == "function") {
                            $creative = fn();
                        }
                        if (!$creative) {
                            log.error("VPAID creative was null");
                            callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                            return;
                        }
                        $creativeVersion = $creative.handshakeVersion(VPAID_VERSION);
                        if (compareStringVersions($creativeVersion, "1.0") < 0) {
                            log.error("VPAID creative has invalid version: %s", $creativeVersion);
                            callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                            return;
                        }
                        for (var eventName in $callbacks) {
                            $creative.subscribe($callbacks[eventName], eventName);
                        }
                        sizeAndPositionElements();
                        window.addEventListener("resize", sizeAndPositionElements);
                        var desiredBitrate = options.desiredBitrate;
                        var creativeData = {};
                        if ($parsedVast.adParameters) {
                            creativeData.AdParameters = $parsedVast.adParameters;
                        }
                        var environmentVars = {
                            videoSlot: $video,
                            videoSlotCanAutoPlay: true,
                            slot: $html
                        };
                        $video.addEventListener("loadedmetadata", function() {
                            $actualVideoWidth = this.videoWidth;
                            $actualVideoHeight = this.videoHeight;
                            sizeAndPositionElements();
                        });
                        $minSkipOffset = options.minSkipOffset;
                        $maxSkipOffset = options.maxSkipOffset;
                        $videoWidthAtInit = $videoWidth;
                        $videoHeightAtInit = $videoHeight;
                        log.debug("Calling $creative.initAd");
                        $creative.initAd($videoWidth, $videoHeight, "normal", desiredBitrate, creativeData, environmentVars);
                    } else {
                        log.error("VPAID creative JS file loaded but the function iframe.contentWindow.getVPAIDAd did not exist");
                        callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                    }
                };
                vpaidScript.onerror = vpaidScript.onabort = function() {
                    log.debug("vpaidScript.onerror or vpaidScript.onabort called");
                    if (vpaidScriptTimedOut) {
                        return;
                    }
                    clearTimeout(vpaidScriptTimeout);
                    log.error("VPAID creative JS file failed to load");
                    callNativeLayer(VPAID_API_MODULE, "adLoadFailed");
                };
                vpaidScript.src = $parsedVast.vpaidUrl;
                iframe.contentWindow.document.body.appendChild(vpaidScript);
            }
        };
        function onAdLoaded() {
            log.debug("onAdLoaded called");
            callNativeLayer(VPAID_API_MODULE, "adLoadSucceeded");
            $currentState = STATES.ready;
            if ($videoWidthAtInit != $videoWidth || $videoHeightAtInit != $videoHeight) {
                log.debug("Calling $creative.resizeAd");
                $creative.resizeAd($videoWidth, $videoHeight, "normal");
            }
            $volume = getCurrentVolume();
            if (!$parsedVast.endCard && $creative.getAdCompanions) {
                var adCompanions = $creative.getAdCompanions();
                if (arrayExistsAndIsNotEmpty(adCompanions)) {
                    var parser = new DOMParser();
                    var adCompanionsXml = parser.parseFromString(adCompanions, "text/xml");
                    if (adCompanionsXml) {
                        var companionAdsElements = adCompanionsXml.getElementsByTagName("CompanionAds");
                        if (arrayExistsAndIsNotEmpty(companionAdsElements)) {
                            log.debug("Found CompanionAds element in the adCompanions VPAID property");
                            parseCompanionAds(companionAdsElements[0]);
                        }
                    }
                }
            }
            if ($parsedVast.endCard && $parsedVast.endCard.type == "static") {
                log.debug("Building static end card");
                var endCardImage = document.createElement("img");
                $endcardContainer.appendChild(endCardImage);
                endCardImage.id = "aolEndCardImage";
                endCardImage.src = $parsedVast.endCard.url;
                endCardImage.style.width = $parsedVast.endCard.width + "px";
                endCardImage.style.height = $parsedVast.endCard.height + "px";
                endCardImage.style.position = "absolute";
                endCardImage.style.left = "50%";
                endCardImage.style.top = "50%";
                endCardImage.style.marginLeft = $parsedVast.endCard.width / 2 * -1 + "px";
                endCardImage.style.marginTop = $parsedVast.endCard.height / 2 * -1 + "px";
                endCardImage.style.zIndex = "1";
                if ($parsedVast.endCard.backgroundColor) {
                    $endcardContainer.style.backgroundColor = $parsedVast.endCard.backgroundColor;
                }
                if ($parsedVast.endCard.clickTracking || $parsedVast.wrapperCompanionClickTracking || $parsedVast.endCard.clickThrough) {
                    endCardImage.addEventListener("click", function() {
                        pingUrls($parsedVast.endCard.clickTracking);
                        pingUrls($parsedVast.wrapperCompanionClickTracking);
                        if ($parsedVast.endCard.clickThrough) {
                            mraid.open($parsedVast.endCard.clickThrough);
                        }
                    });
                }
            }
            showElement($videoContainer);
            function afterReady() {
                if (mraid.isViewable()) {
                    afterViewable();
                } else {
                    mraid.addEventListener("viewableChange", function viewableChangeListener(viewable) {
                        if (viewable) {
                            mraid.removeEventListener("viewableChange", viewableChangeListener);
                            afterViewable();
                        }
                    });
                }
            }
            function afterViewable() {
                startAd();
            }
            if (mraid.getState() == "loading") {
                mraid.addEventListener("ready", afterReady);
            } else {
                afterReady();
            }
        }
        function onAdStarted() {
            log.debug("onAdStarted called");
            clearTimeout($startAdTimeout);
            $currentState = STATES.playing;
            pingUrls($parsedVast.creativeViewUrls);
            $adStartTimestamp = Date.now();
            $totalAdPausedTime = 0;
            setSkipButtonTimeouts();
            mraid.addEventListener("viewableChange", onViewableChangeWhilePlaying);
        }
        function onAdStopped() {
            log.debug("onAdStopped called");
            showEndCardOrClose();
        }
        function onAdSkipped() {
            log.debug("onAdSkipped called");
            $shouldFireSkipUrls = true;
            showEndCardOrClose();
        }
        function onAdSkippableStateChange() {
            log.debug("onAdSkippableStateChange called");
            if ($minSkipOffsetReached && $creative.getAdSkippableState()) {
                log.debug("Showing skip button");
                makeAdSkippable();
            }
        }
        function onAdPaused() {
            log.debug("onAdPaused called");
            clearTimeout($minSkipOffsetTimeout);
            clearTimeout($maxSkipOffsetTimeout);
            $adPausedTimestamp = Date.now();
            pingUrls($parsedVast.pauseUrls);
        }
        function onAdPlaying() {
            log.debug("onAdPlaying called");
            if ($adPausedTimestamp) {
                $totalAdPausedTime += Date.now() - $adPausedTimestamp;
            }
            $adPausedTimestamp = null;
            setSkipButtonTimeouts();
            pingUrls($parsedVast.resumeUrls);
        }
        function onAdVolumeChange() {
            log.debug("onAdVolumeChange called");
            var newVolume = getCurrentVolume();
            log.debug("New Volume: %s, Old Volume: %s", newVolume, $volume);
            if (newVolume === 0 && $volume > 0) {
                log.debug("Volume was muted");
                pingUrls($parsedVast.muteUrls);
            } else if (newVolume > 0 && $volume === 0) {
                log.debug("Volume was unmuted");
                pingUrls($parsedVast.unmuteUrls);
            }
            $volume = newVolume;
        }
        function onAdImpression() {
            log.debug("onAdImpression called");
            pingUrls($parsedVast.impressionUrls);
        }
        function onAdClickThru(url, id, playerHandles) {
            log.debug("onAdClickThru called with url %s, id %s, and playerHandles %s", url, id, playerHandles);
            pingUrls($parsedVast.videoClickTrackingUrls);
            if (playerHandles) {
                if (url) {
                    log.debug("Calling mraid.open with the url passed to onAdClickThru");
                    mraid.open(url);
                } else if ($parsedVast.videoClickThroughUrl) {
                    log.debug("Calling mraid.open with the url from parsedVast.videoClickThroughUrl, %s", $parsedVast.videoClickThroughUrl);
                    mraid.open($parsedVast.videoClickThroughUrl);
                }
            }
        }
        function onAdVideoStart() {
            log.debug("onAdVideoStart called");
            pingUrls($parsedVast.videoStartUrls);
        }
        function onAdVideoFirstQuartile() {
            log.debug("onAdVideoFirstQuartile called");
            pingUrls($parsedVast.firstQuartileUrls);
        }
        function onAdVideoMidpoint() {
            log.debug("onAdVideoMidpoint called");
            pingUrls($parsedVast.midpointUrls);
        }
        function onAdVideoThirdQuartile() {
            log.debug("onAdVideoThirdQuartile called");
            pingUrls($parsedVast.thirdQuartileUrls);
        }
        function onAdVideoComplete() {
            log.debug("onAdVideoComplete called");
            pingUrls($parsedVast.videoCompleteUrls);
        }
        function onAdUserAcceptInvitation() {
            log.debug("onAdUserAcceptInvitation called");
            pingUrls($parsedVast.userAcceptInvitationUrls);
        }
        function onAdUserClose() {
            log.debug("onAdUserClose called");
            pingUrls($parsedVast.closeUrls);
        }
        function onAdError(message) {
            log.error("onAdError called with message %s", message);
            pingUrls($parsedVast.errorUrls);
        }
        function onAdLog(message) {
            log.info("onAdLog called with message %s", message);
        }
        function onMinSkipOffsetReached() {
            $minSkipOffsetReached = true;
            if (!$creative.skipAd || !$creative.getAdSkippableState || $creative.getAdSkippableState()) {
                makeAdSkippable();
            }
        }
        function onMaxSkipOffsetReached() {
            makeAdSkippable();
        }
        function setSkipButtonTimeouts() {
            var timeSinceAdStarted = Date.now() - $adStartTimestamp - $totalAdPausedTime;
            var minSkipOffsetTime = $minSkipOffset - timeSinceAdStarted;
            var maxSkipOffsetTime = $maxSkipOffset - timeSinceAdStarted;
            clearTimeout($minSkipOffsetTimeout);
            clearTimeout($maxSkipOffsetTimeout);
            if (minSkipOffsetTime <= 0) {
                onMinSkipOffsetReached();
            } else {
                $minSkipOffsetTimeout = setTimeout(onMinSkipOffsetReached, minSkipOffsetTime);
            }
            if (maxSkipOffsetTime <= 0) {
                onMaxSkipOffsetReached();
            } else {
                $maxSkipOffsetTimeout = setTimeout(onMaxSkipOffsetReached, maxSkipOffsetTime);
            }
        }
        function showEndCardOrClose() {
            log.debug("showEndCardOrClose called");
            if ($currentState >= STATES.done) {
                return;
            }
            $currentState = STATES.done;
            clearTimeout($minSkipOffsetTimeout);
            clearTimeout($maxSkipOffsetTimeout);
            clearTimeout($skipAdTimeout);
            mraid.removeEventListener("viewableChange", onViewableChangeWhilePlaying);
            hideElement($videoContainer);
            $videoContainer.removeChild($video);
            if (!$parsedVast.endCard) {
                log.debug("No end card, closing");
                pingUrls($parsedVast.closeUrls);
                mraid.close();
                return;
            }
            if ($shouldFireSkipUrls) {
                pingUrls($parsedVast.skipUrls);
            }
            var spinner;
            function htmlContentFetchedOrTimeout() {
                log.debug("htmlContentFetchedOrTimeout called");
                if ($parsedVast.endCard.status != "ready") {
                    log.error("Failed to load HTMLResource URL, closing creative.");
                    mraid.close();
                    return;
                }
                var htmlContainer = document.createElement("div");
                htmlContainer.id = "aolEndCardHtmlContainer";
                htmlContainer.innerHTML = $parsedVast.endCard.html;
                htmlContainer.width = "100%";
                htmlContainer.height = "100%";
                htmlContainer.style.zIndex = "1";
                if ($parsedVast.endCard.backgroundColor) {
                    htmlContainer.style.backgroundColor = $parsedVast.endCard.backgroundColor;
                }
                if (spinner) {
                    $endcardContainer.removeChild(spinner);
                }
                $endcardContainer.appendChild(htmlContainer);
                executeScriptsInElement(htmlContainer);
                pingUrls($parsedVast.endCard.creativeViewUrls);
                pingUrls($parsedVast.wrapperCreativeViewUrls);
            }
            if ($parsedVast.endCard.type == "html") {
                log.debug("html end card");
                if ($parsedVast.endCard.status == "ready") {
                    log.debug("html end card ready");
                    htmlContentFetchedOrTimeout();
                } else if ($parsedVast.endCard.status == "failed") {
                    log.debug("html end card failed");
                    log.error("Failed to load HTMLResource URL, closing creative.");
                    mraid.close();
                    return;
                } else {
                    log.debug("html end card not yet ready, waiting");
                    $endcardContainer.addEventListener("htmlcontentfetched", htmlContentFetchedOrTimeout);
                    setTimeout(htmlContentFetchedOrTimeout, $htmlEndCardTimeoutTime);
                    spinner = document.createElement("img");
                    spinner.src = spinnerBase64EncodedImage;
                    spinner.style.width = "50px";
                    spinner.style.height = "50px";
                    spinner.style.position = "absolute";
                    spinner.style.left = "50%";
                    spinner.style.top = "50%";
                    spinner.style.marginLeft = "-25px";
                    spinner.style.marginTop = "-25px";
                    $endcardContainer.appendChild(spinner);
                }
            } else if ($parsedVast.endCard.type == "iframe") {
                log.debug("iframe end card");
                var iframe = document.createElement("iframe");
                iframe.id = "aolEndCardIframe";
                iframe.src = $parsedVast.endCard.url;
                iframe.style.border = 0;
                iframe.style.width = "100%;";
                iframe.style.height = "100%";
                iframe.style.zIndex = "1";
                $endcardContainer.appendChild(iframe);
                pingUrls($parsedVast.endCard.creativeViewUrls);
                pingUrls($parsedVast.wrapperCreativeViewUrls);
            } else {
                log.debug("static end card");
                pingUrls($parsedVast.endCard.creativeViewUrls);
                pingUrls($parsedVast.wrapperCreativeViewUrls);
            }
            showElement($endcardContainer);
        }
        function onCloseButtonPressed() {
            log.debug("onCloseButtonPressed called");
            pingUrls($parsedVast.closeUrls);
            mraid.close();
        }
        function onSkipButtonPressed() {
            log.debug("onSkipButtonPressed called");
            $shouldFireSkipUrls = true;
            $skipAdTimeout = setTimeout(function() {
                log.error("AdSkipped or AdStopped events were not fired before the timeout was reached.");
                onAdSkipped();
            }, $skipAdTimeoutTime);
            if (compareStringVersions($creativeVersion, "2.0") >= 0 && $creative.skipAd && $creative.getAdSkippableState && $creative.getAdSkippableState()) {
                log.debug("Calling $creative.skipAd");
                $creative.skipAd();
            } else {
                log.debug("Calling $creative.stopAd");
                $creative.stopAd();
            }
        }
        function onViewableChangeWhilePlaying(viewable) {
            log.debug("onViewableChangeWhilePlaying called with viewable %s", viewable);
            if (viewable) {
                log.debug("Calling $creative.resumeAd");
                $creative.resumeAd();
            } else {
                log.debug("Calling $creative.pauseAd");
                $creative.pauseAd();
            }
        }
        function startAd() {
            log.debug("startAd called");
            $startAdTimeout = setTimeout(function() {
                log.error("AdStarted not called within the timeout. Closing the creative.");
                mraid.close();
            }, $startAdTimeoutTime);
            log.debug("Calling $creative.startAd");
            $creative.startAd();
        }
        function scaleWidthAndHeight(unscaledVideoWidth, unscaledVideoHeight) {
            log.debug("scaleWidthAndHeight called with unscaledVideoWidth %s and unscaledVideoHeight %s", unscaledVideoWidth, unscaledVideoHeight);
            var windowWidth = window.innerWidth;
            var windowHeight = window.innerHeight;
            var windowWidthToVideoWidthRatio = windowWidth / unscaledVideoWidth;
            var windowHeightToVideoHeightRatio = windowHeight / unscaledVideoHeight;
            var multiplier = Math.min(windowWidthToVideoWidthRatio, windowHeightToVideoHeightRatio);
            var scaledWidthHeight = {
                width: unscaledVideoWidth * multiplier,
                height: unscaledVideoHeight * multiplier
            };
            log.debug("scaledWidthHeight: %s", scaledWidthHeight);
            return scaledWidthHeight;
        }
        function parseVast(vastDocs) {
            log.debug("parseVast called with vastDocs %s", vastDocs);
            var parser = new DOMParser();
            vastDocs.forEach(function(vastDoc) {
                var i, trackingElements, event;
                var vastXml = parser.parseFromString(vastDoc, "text/xml");
                var wrapperElements = vastXml.getElementsByTagName("Wrapper");
                var isWrapper = arrayExistsAndIsNotEmpty(wrapperElements);
                var impressionElements = vastXml.getElementsByTagName("Impression");
                if (arrayExistsAndIsNotEmpty(impressionElements)) {
                    $parsedVast.impressionUrls = $parsedVast.impressionUrls || [];
                    for (i = 0; i < impressionElements.length; i++) {
                        $parsedVast.impressionUrls.push(impressionElements[i].textContent.trim());
                    }
                }
                var errorElements = vastXml.getElementsByTagName("Error");
                if (arrayExistsAndIsNotEmpty(errorElements)) {
                    $parsedVast.errorUrls = $parsedVast.errorUrls || [];
                    for (i = 0; i < errorElements.length; i++) {
                        $parsedVast.errorUrls.push(errorElements[i].textContent.trim());
                    }
                }
                var linearElements = vastXml.getElementsByTagName("Linear");
                if (arrayExistsAndIsNotEmpty(linearElements)) {
                    var linearElement = linearElements[0];
                    var adParametersElements = linearElement.getElementsByTagName("AdParameters");
                    if (arrayExistsAndIsNotEmpty(adParametersElements)) {
                        $parsedVast.adParameters = adParametersElements[0].textContent.trim();
                    }
                    trackingElements = linearElement.getElementsByTagName("Tracking");
                    if (arrayExistsAndIsNotEmpty(trackingElements)) {
                        for (i = 0; i < trackingElements.length; i++) {
                            event = trackingElements[i].getAttribute("event");
                            var parsedVastProperty = TRACKING_EVENTS[event];
                            if (parsedVastProperty) {
                                $parsedVast[parsedVastProperty] = $parsedVast[parsedVastProperty] || [];
                                $parsedVast[parsedVastProperty].push(trackingElements[i].textContent.trim());
                            }
                        }
                    }
                    var clickThroughElements = linearElement.getElementsByTagName("ClickThrough");
                    if (arrayExistsAndIsNotEmpty(clickThroughElements)) {
                        $parsedVast.videoClickThroughUrl = clickThroughElements[0].textContent.trim();
                    }
                    var clickTrackingElements = linearElement.getElementsByTagName("ClickTracking");
                    if (arrayExistsAndIsNotEmpty(clickTrackingElements)) {
                        $parsedVast.videoClickTrackingUrls = $parsedVast.videoClickTrackingUrls || [];
                        for (i = 0; i < clickTrackingElements.length; i++) {
                            $parsedVast.videoClickTrackingUrls.push(clickTrackingElements[i].textContent.trim());
                        }
                    }
                    var customClickElements = linearElement.getElementsByTagName("CustomClick");
                    if (arrayExistsAndIsNotEmpty(customClickElements)) {
                        $parsedVast.videoCustomClickUrls = $parsedVast.videoCustomClickUrls || [];
                        for (i = 0; i < customClickElements.length; i++) {
                            $parsedVast.videoCustomClickUrls.push(customClickElements[i].textContent.trim());
                        }
                    }
                    var mediaFileElements = linearElement.getElementsByTagName("MediaFile");
                    if (arrayExistsAndIsNotEmpty(mediaFileElements)) {
                        for (i = 0; i < mediaFileElements.length; i++) {
                            if (mediaFileElements[i].getAttribute("apiFramework") == "VPAID" && (mediaFileElements[i].getAttribute("type") == "application/javascript" || mediaFileElements[i].getAttribute("type") == "application/x-javascript" || mediaFileElements[i].getAttribute("type") == "text/javascript")) {
                                $parsedVast.vpaidUrl = mediaFileElements[i].textContent.trim();
                                $parsedVast.videoWidth = mediaFileElements[i].hasAttribute("width") ? parseInt(mediaFileElements[i].getAttribute("width"), 10) : 0;
                                $parsedVast.videoHeight = mediaFileElements[i].hasAttribute("height") ? parseInt(mediaFileElements[i].getAttribute("height"), 10) : 0;
                                break;
                            }
                        }
                    }
                }
                var companionAdsElements = vastXml.getElementsByTagName("CompanionAds");
                if (arrayExistsAndIsNotEmpty(companionAdsElements)) {
                    var companionAdsElement = companionAdsElements[0];
                    if (isWrapper) {
                        var companionClickTrackingElements = companionAdsElement.getElementsByTagName("CompanionClickTracking");
                        if (arrayExistsAndIsNotEmpty(companionClickTrackingElements)) {
                            $parsedVast.wrapperCompanionClickTracking = $parsedVast.wrapperCompanionClickTracking || [];
                            for (i = 0; i < companionClickTrackingElements.length; i++) {
                                $parsedVast.wrapperCompanionClickTracking.push(companionClickTrackingElements[i].textContent.trim());
                            }
                        }
                        trackingElements = companionAdsElement.getElementsByTagName("Tracking");
                        if (arrayExistsAndIsNotEmpty(trackingElements)) {
                            for (i = 0; i < trackingElements.length; i++) {
                                event = trackingElements[i].getAttribute("event");
                                if (event == "creativeView") {
                                    $parsedVast.wrapperCreativeViewUrls = $parsedVast.wrapperCreativeViewUrls || [];
                                    $parsedVast.wrapperCreativeViewUrls.push(trackingElements[i].textContent.trim());
                                }
                            }
                        }
                    } else {
                        parseCompanionAds(companionAdsElement);
                    }
                }
            });
            if (!$parsedVast.vpaidUrl) {
                log.debug("VAST Invalid because the vpaid URL could not be found");
                return false;
            }
            return true;
        }
        function parseCompanionAds(companionAdsElement) {
            log.debug("parseCompanionAds called");
            var companionResourcePriority = [ "static", "html", "iframe" ];
            var companionElement, resourceElement, resourceType, i;
            if (companionAdsElement && arrayExistsAndIsNotEmpty(companionAdsElement.childNodes)) {
                for (i = 0; i < companionAdsElement.childNodes.length; i++) {
                    var tempCompanionElement = companionAdsElement.childNodes[i];
                    var tempResourceElement, tempResourceType;
                    if (tempCompanionElement.tagName == "Companion" && parseInt(tempCompanionElement.getAttribute("width"), 10) >= 300 && parseInt(tempCompanionElement.getAttribute("height"), 10) >= 250) {
                        var staticResourceElements = companionAdsElement.childNodes[i].getElementsByTagName("StaticResource");
                        var htmlResourceElements = companionAdsElement.childNodes[i].getElementsByTagName("HTMLResource");
                        var iframeResourceElements = companionAdsElement.childNodes[i].getElementsByTagName("IFrameResource");
                        if (arrayExistsAndIsNotEmpty(iframeResourceElements)) {
                            tempResourceElement = iframeResourceElements[0];
                            tempResourceType = "iframe";
                        } else if (arrayExistsAndIsNotEmpty(htmlResourceElements)) {
                            tempResourceElement = htmlResourceElements[0];
                            tempResourceType = "html";
                        } else if (arrayExistsAndIsNotEmpty(staticResourceElements)) {
                            for (var staticResourceIndex = 0; staticResourceIndex < staticResourceElements.length; staticResourceIndex++) {
                                if (staticResourceElements[staticResourceIndex].getAttribute("creativeType") == "image/png" || staticResourceElements[staticResourceIndex].getAttribute("creativeType") == "image/jpeg" || staticResourceElements[staticResourceIndex].getAttribute("creativeType") == "image/bmp" || staticResourceElements[staticResourceIndex].getAttribute("creativeType") == "image/gif") {
                                    tempResourceElement = staticResourceElements[staticResourceIndex];
                                    tempResourceType = "static";
                                    break;
                                }
                            }
                        }
                        if (tempResourceType && (!companionElement || companionResourcePriority.indexOf(tempResourceType) > companionResourcePriority.indexOf(resourceType))) {
                            companionElement = tempCompanionElement;
                            resourceType = tempResourceType;
                            resourceElement = tempResourceElement;
                        }
                    }
                }
            }
            if (companionElement) {
                var companionJson = {};
                if (resourceType == "static") {
                    companionJson.type = "static";
                    companionJson.width = parseInt(companionElement.getAttribute("width"), 10);
                    companionJson.height = parseInt(companionElement.getAttribute("height"), 10);
                    if (resourceElement.hasAttribute("backgroundColor")) {
                        companionJson.backgroundColor = resourceElement.getAttribute("backgroundColor");
                    }
                    companionJson.url = resourceElement.textContent.trim();
                    var companionClickTrackingElements = companionElement.getElementsByTagName("CompanionClickTracking");
                    if (arrayExistsAndIsNotEmpty(companionClickTrackingElements)) {
                        companionJson.clickTracking = [];
                        for (i = 0; i < companionClickTrackingElements.length; i++) {
                            companionJson.clickTracking.push(companionClickTrackingElements[i].textContent.trim());
                        }
                    }
                    var companionClickThroughElements = companionElement.getElementsByTagName("CompanionClickThrough");
                    if (arrayExistsAndIsNotEmpty(companionClickThroughElements)) {
                        companionJson.clickThrough = companionClickThroughElements[0].textContent.trim();
                    }
                } else if (resourceType == "html") {
                    var htmlContentFetchedEvent;
                    if (window.CustomEvent) {
                        htmlContentFetchedEvent = new Event("htmlcontentfetched");
                    } else {
                        htmlContentFetchedEvent = document.createEvent("Event");
                        htmlContentFetchedEvent.initEvent("htmlcontentfetched", true, true);
                    }
                    companionJson.type = "html";
                    companionJson.status = "loading";
                    if (resourceElement.hasAttribute("backgroundColor")) {
                        companionJson.backgroundColor = resourceElement.getAttribute("backgroundColor");
                    }
                    httpGet(resourceElement.textContent.trim(), 3e4, function(response, message) {
                        log.debug("httpGet callback for HTMLResource called with response %s", response);
                        if (response) {
                            log.debug("httpGet was successful");
                            companionJson.status = "ready";
                            companionJson.html = response;
                        } else {
                            log.error("httpGet failed with message %s", message);
                            companionJson.status = "failed";
                        }
                        $endcardContainer.dispatchEvent(htmlContentFetchedEvent);
                    });
                } else if (resourceType == "iframe") {
                    companionJson.type = "iframe";
                    companionJson.url = resourceElement.textContent.trim();
                }
                var trackingElements = companionElement.getElementsByTagName("Tracking");
                if (arrayExistsAndIsNotEmpty(trackingElements)) {
                    for (i = 0; i < trackingElements.length; i++) {
                        var event = trackingElements[i].getAttribute("event");
                        if (event == "creativeView") {
                            companionJson.creativeViewUrls = companionJson.creativeViewUrls || [];
                            companionJson.creativeViewUrls.push(trackingElements[i].textContent.trim());
                        }
                    }
                }
                if (companionJson.type) {
                    $parsedVast.endCard = companionJson;
                }
            }
        }
        function sizeAndPositionElements() {
            log.debug("sizeAndPositionElements called");
            var fullscreenWidth = window.innerWidth + "px";
            var fullscreenHeight = window.innerHeight + "px";
            var isLandscape = window.innerWidth > window.innerHeight;
            $videoContainer.style.width = fullscreenWidth;
            $videoContainer.style.height = fullscreenHeight;
            $endcardContainer.style.width = fullscreenWidth;
            $endcardContainer.style.height = fullscreenHeight;
            var unscaledVideoWidth = $actualVideoWidth || $parsedVast.videoWidth || DEFAULT_VIDEO_WIDTH;
            var unscaledVideoHeight = $actualVideoHeight || $parsedVast.videoHeight || DEFAULT_VIDEO_HEIGHT;
            var scaledWidthHeight = scaleWidthAndHeight(unscaledVideoWidth, unscaledVideoHeight);
            if (scaledWidthHeight.width != $videoWidth || scaledWidthHeight.height != $videoHeight) {
                $videoWidth = scaledWidthHeight.width;
                $videoHeight = scaledWidthHeight.height;
                $video.style.width = $videoWidth + "px";
                $video.style.height = $videoHeight + "px";
                $html.style.width = $video.style.width;
                $html.style.height = $video.style.height;
                if ($currentState >= STATES.ready) {
                    log.debug("Calling $creative.resizeAd with width %s and height %s", $videoWidth, $videoHeight);
                    $creative.resizeAd($videoWidth, $videoHeight, "normal");
                }
            }
            $video.style.left = "50%";
            $video.style.marginLeft = $videoWidth / 2 * -1 + "px";
            if (isLandscape) {
                $video.style.top = "50%";
                $video.style.marginTop = $videoHeight / 2 * -1 + "px";
            } else {
                if ($videoHeight + 50 > fullscreenHeight) {
                    $video.style.top = "0px";
                } else {
                    $video.style.top = "50px";
                }
                $video.style.marginTop = "0px";
            }
            $html.style.left = $video.style.left;
            $html.style.top = $video.style.top;
            $html.style.marginLeft = $video.style.marginLeft;
            $html.style.marginTop = $video.style.marginTop;
        }
        function hideElement(element) {
            log.debug("hideElement called, element.id: %s", element.id);
            element.style.display = "none";
        }
        function showElement(element) {
            log.debug("showElement called, element.id: %s", element.id);
            element.style.display = "";
        }
        function compareStringVersions(firstVersion, secondVersion) {
            log.debug("compareStringVersions called with firstVersion %s and secondVersion %s", firstVersion, secondVersion);
            var firstVersionArray = firstVersion.split(".");
            var secondVersionArray = secondVersion.split(".");
            var longerVersionLength = Math.max(firstVersionArray.length, secondVersionArray.length);
            for (var i = 0; i < longerVersionLength; i++) {
                var firstVersionPart, secondVersionPart;
                if (i < firstVersionArray.length) {
                    firstVersionPart = parseInt(firstVersionArray[i], 10);
                } else {
                    firstVersionPart = 0;
                }
                if (i < secondVersionArray.length) {
                    secondVersionPart = parseInt(secondVersionArray[i], 10);
                } else {
                    secondVersionPart = 0;
                }
                if (firstVersionPart > secondVersionPart) {
                    log.debug("firstVersion greater than second version");
                    return 1;
                } else if (firstVersionPart < secondVersionPart) {
                    log.debug("firstVersion less than second version");
                    return -1;
                }
            }
            log.debug("versions equal");
            return 0;
        }
        function getCurrentVolume() {
            log.debug("getCurrentVolume called");
            return $creative.getAdVolume ? $creative.getAdVolume() : -1;
        }
        function pingUrls(urls) {
            log.debug("pingUrls called with urls %s", urls);
            if (urls) {
                urls.forEach(pingUrl);
            }
        }
        function pingUrl(url) {
            log.debug("pingUrl called with url %s", url);
            var image = document.createElement("img");
            image.src = url;
            var event;
            if (window.CustomEvent) {
                event = new CustomEvent("aolpingedurl", {
                    detail: url
                });
            } else {
                event = document.createEvent("CustomEvent");
                event.initCustomEvent("aolpingedurl", true, true, url);
            }
            document.dispatchEvent(event);
        }
        function arrayExistsAndIsNotEmpty(arr) {
            return arr && arr.length > 0;
        }
        function makeAdSkippable() {
            log.debug("makeAdSkippable called. $adSkippable: %s", $adSkippable);
            if ($adSkippable) {
                return;
            }
            $adSkippable = true;
            showElement($skipButton);
            callNativeLayer(VPAID_API_MODULE, "adSkippable");
        }
        function executeScriptsInElement(element) {
            var scripts = element.getElementsByTagName("script");
            if (arrayExistsAndIsNotEmpty(scripts)) {
                var i = 0;
                var callback = function() {
                    i++;
                    if (i < scripts.length) {
                        executeScript(scripts[i]);
                    }
                };
                var executeScript = function(script) {
                    if (script.src) {
                        fetchScriptAndExecute(script.src, callback);
                    } else {
                        executeScriptText(script.innerHTML);
                        callback();
                    }
                };
                executeScript(scripts[0]);
            }
        }
        function fetchScriptAndExecute(url, callback) {
            var script = document.createElement("script");
            script.onload = script.onerror = script.onabort = callback;
            script.src = url;
            document.body.appendChild(script);
        }
        function executeScriptText(scriptText) {
            window["eval"].call(window, scriptText);
        }
    })();
    callNativeLayer(GENERIC_NAMESPACE, "fileLoaded", [ generateParameterObject("filename", "vpaid.js") ]);
})(window, document);