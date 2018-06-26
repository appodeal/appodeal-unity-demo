/*! Ad-SDK-JS-Bridge - 1.4.0 - c352d9a - 2017-02-22 */
(function(window, document) {
    if (window.MmJsBridge && window.MmJsBridge.actionsQueueLoaded) {
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
        MmJsBridge.actionsQueueLoaded = true;
        function executeFunctionByName(functionName, context, args) {
            var namespaces = functionName.split(".");
            for (var i = 0; i < namespaces.length; i++) {
                context = context[namespaces[i]];
            }
            return context.apply(window, args);
        }
        if (window.MmInjectedFunctions && MmInjectedFunctions.useActionsQueue && MmInjectedFunctions.useActionsQueue()) {
            setInterval(function() {
                var i;
                var queue = MmInjectedFunctions.getActionsQueue();
                if (queue) {
                    log.debug("actionsQueue equals %s", queue);
                    queue = JSON.parse(queue);
                    for (i = 0; i < queue.length; i++) {
                        executeFunctionByName(queue[i].functionName, window, queue[i].args);
                    }
                }
            }, 100);
        }
    })();
    callNativeLayer(GENERIC_NAMESPACE, "fileLoaded", [ generateParameterObject("filename", "actionsQueue.js") ]);
})(window, document);