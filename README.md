# Appodeal Unity Plugin

Stable version of Unity Appodeal SDK is 3.0.1. SDK integration documentation: [docs](https://wiki.appodeal.com/en/unity/get-started)

## Changelog

3.0.1 (November 08, 2022)

+ Updated Appodeal Android SDK to 3.0.1
+ Updated Appodeal iOS SDK to 3.0.1
+ Updated EDM Unity Plugin to 1.2.174
+ Removed Dummy.swift file as the new version of EDM plugin creates it by default
+ Changed Xcode project settings: bitcode is now off by default as Apple deprecated it
+ Implemented Events
+ Implemented GetReward method
+ Implemented OnAdRevenueReceived callback
+ Fixed a bug with Dependency Manager on Windows
+ Fixed a bug with re-importing plugin data when rebuilding Library dir
+ Minor improvements

3.0.0 (June 21, 2022)

+ Updated Appodeal Android SDK to 3.0.0
+ Updated Appodeal iOS SDK to 3.0.0
+ Updated Editor tools with new features
+ Implemented test ads in Unity Editor
+ Reworked API for better usability
+ Added XML comments for API
+ Fixed a few bugs
+ Removed NonSkippable ad type
+ Removed UserSettings, Consent, ConsentFormBuilder, ConsentManageException classes
+ Removed setBannerBackground method
+ Replaced showAsActivity & showAsDialog methods of ConsentForm class with a single Show() method.

2.15.4 (April 7, 2022)

+ Updated Appodeal Android SDK to 2.11.1.0
+ Updated networks configs

2.15.3 (March 18, 2022)

+ Updated Appodeal Android SDK to 2.11.0.3
+ Updated Appodeal iOS SDK to 2.11.1.3
+ Updated networks configs

2.15.2 (February 11, 2022)

+ Updated networks configs
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.169
+ minor fixes

2.15.1 (January 20, 2022)

+ Updated Appodeal Android SDK to 2.11.0.1
+ Updated Appodeal iOS SDK to 2.11.1
+ Updated networks configs
+ Fixed mrec callbacks

2.15.0 (December 29, 2021)

+ Updated Appodeal Android SDK to 2.11.0
+ Updated Appodeal iOS SDK to 2.11.0
+ Updated networks configs
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.168
+ Updated 'Manage Appodeal SDK' tool
+ Fixed minor issues in 'Appodeal Settings' tool
+ Removed requestAndroidMPermissions method from API
+ Removed unused scripts

2.14.5 (November 12, 2021)

+ Updated Appodeal Android SDK to 2.10.3
+ Updated Appodeal iOS SDK to 2.10.3
+ Updated networks configs

2.14.4 (August 26, 2021)

+ Updated networks configs
+ Fixed issue with updating BidMachine adapter


2.14.3 (August 6, 2021)

+ Updated Appodeal Android SDK to 2.10.2
+ Updated Appodeal iOS SDK to 2.10.2
+ Updated networks configs
+ Updated iOS Consent Manager to 1.1.2
+ Fixed issue with adding skaadnetworksids in Appodeal Settings tool
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.166

2.14.2 (June 11, 2021)

+ Updated Appodeal Android SDK to 2.10.1
+ Updated networks configs
+ Updated iOS Consent Manager to 1.1.1
+ Added Appodeal Settings Tool

2.14.1 (May 24, 2021)

+ Updated Appodeal iOS SDK to 2.10.1
+ Updated networks configs
+ Internal changes in Admob Settings tool
+ Fixed issue with namespaces in ConsentManager

2.14.0-Beta (May 04, 2021)

+ Updated Appodeal iOS SDK to 2.10.0
+ Updated Appodeal Android SDK to 2.10.0
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.165
+ Updated networks configs

2.13.0-Beta (April 19, 2021)

+ Updated Consent Manager 
+ Updated networks configs

2.12.2 (April 5, 2021)

+ Updated Appodeal Android SDK to 2.9.2
+ Updated networks configs
+ Added fix adapters versions in SDK Manager

2.12.1 (March 17, 2021)

+ Updated Appodeal iOS SDK to 2.9.1
+ Updated Appodeal Android SDK to 2.9.1
+ Updated networks configs
+ Added tool for AdMob App Id (Appodeal/AdMob Settings) 
+ Added display of versions of internal ad network dependencies

2.12.0-Beta (February 09, 2021)

+ Updated Appodeal iOS SDK to 2.9.0
+ Updated Appodeal Android SDK to 2.9.0
+ Updated networks configs
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.164
+ Fixed banner position issue

2.11.2 (December 11, 2020)

+ Updated networks configs
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.162
+ Added remove option to SDK Manager tool

2.11.1 (November 13, 2020)

+ Updated Appodeal iOS SDK to 2.8.1
+ Updated Appodeal Android SDK to 2.8.1
+ Updated networks configs
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.161
+ Removed method onResume for Android SDK 
+ Added method setSharedAdsInstanceAcrossActivities (enabling shared ads instance across activities (disabled by default) for Android SDK

2.11.0 (October 1, 2020)

+ Updated Appodeal iOS SDK to 2.8.0
+ Updated Appodeal Android SDK to 2.8.0
+ Mark adapters configs as optional: ChartboostDependencies, InMobiDependencies, MintegralDependencies TapjoyDependencies.
+ Replace AppodealX adapter config with BidMachine adapter config

2.10.7 (October 20, 2020)

+ Updated Appodeal iOS SDK to 2.7.5
+ Updated Appodeal Android SDK to 2.7.4
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.161

2.10.6 (September 23, 2020)

+ Updated Appodeal iOS SDK to 2.7.4
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.159
+ Merge Appodeal and ConsentManager directories

2.10.5 (August 31, 2020)

+ Updated Appodeal iOS SDK to 2.7.3
+ Updated Appodeal Android SDK to 2.7.3
+ Minor changes in SDK Manager
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.157

2.10.4 (July 31, 2020)

+ Updated Adapters config
+ Updated SDK Manager tool

2.10.3 (July 20, 2020)

+ Updated Appodeal iOS SDK to 2.7.2
+ Updated Appodeal Android SDK to 2.7.2
+ Added vertical banners
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.156

2.10.2 (July 2, 2020)

+ Updated Adapters config
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.155

2.10.1 (April 16, 2020)

+ Updated Appodeal iOS SDK to 2.7.1
+ Updated Appodeal Android SDK to 2.7.1
+ Added Appodeal SDK Manager (support Unity 2018+)
+ Updated External Dependency Manager (Play Services Resolver) to 1.2.150

2.10.0 (March 23, 2020)

+ Updated Appodeal iOS SDK to 2.7.0
+ Updated Appodeal Android SDK to 2.7.0
+ Added additional params for iOS build
+ Updated Play Services Resolver to 1.2.136.0
+ Included Consent Manager

2.9.8 (30/06/2020)

+ Updated Appodeal Android SDK to 2.6.5
+ Updated Appodeal iOS SDK to 2.6.5

2.9.7 (19/06/2020)

+ Updated External Dependency Manager (Play Services Resolver) to 1.2.156.0
+ Updated dependencies config
+ Fixed method canShow for iOS platform.

2.9.6 (28/05/2020)

+ Updated External Dependency Manager (Play Services Resolver) to 1.2.155.0
+ Updated Appodeal Android SDK to 2.6.4
+ Updated Appodeal iOS SDK to 2.6.4
+ Updated plugin dependencies config

2.9.5 (30/04/2020)

+ Updated External Dependency Manager (Play Services Resolver) to 1.2.150.0
+ Added Ogury iOS adapter
+ Updated PBX configuration for Unity 2019.3+

2.9.4 (26/03/2020)

+ Updated Appodeal Android SDK to 2.6.3
+ Updated Appodeal iOS SDK to 2.6.3
+ Updated Play Services Resolver to 1.2.136.0
+ Remove Ogury iOS adapter
+ Fixed plugin warnings

2.9.3 (28/02/2020)

+ Removed Mintegral adapter 
+ Updated Appodeal Android SDK to 2.6.2

2.9.2 (14/02/2020)

+ Updated Appodeal iOS SDK to 2.6.2
+ Updated Appodeal Android SDK to 2.6.1

2.9.1 (12/02/2020)

+ Updated Appodeal iOS SDK to 2.6.1
+ Updated Appodeal Android SDK to 2.6.0
+ Added Play Services Resolver by default
+ Removed internal iOS adapters and framework
+ Removed Ionic lib 
+ Updated internal checker scripts

2.8.64 (21/01/2020)

+ Updated Appodeal iOS SDK to 2.5.15
+ Updated banner callbacks

2.8.63 (5/12/2019)

+ Updated Appodeal iOS SDK to 2.5.14
+ Fixed target issue on Unity 2019.3

2.8.62 (5/11/2019)

+ Updated Appodeal iOS SDK to 2.5.13
+ Updated Appodeal Android SDK to 2.5.10
+ Added availability to update GDPR consent status after SDK was initialized

2.8.61 (17/10/2019)

+ Updated Appodeal iOS SDK to 2.5.12
+ Updated Appodeal Android SDK to 2.5.9

2.8.60 (1/10/2019)

+ Updated Appodeal iOS SDK to 2.5.11

2.8.59 (20/09/2019)

+ Updated Appodeal iOS SDK to 2.5.10
+ Updated Appodeal Android SDK to 2.5.8
+ Fixed setLogLevel method

2.8.58 (14/08/2019)

+ Updated Appodeal iOS SDK to 2.5.8
+ Updated Appodeal Android SDK to 2.5.7
+ Mintegral updated to 9.13.21
+ Removed CrushHunter
+ Fixed remove plugin script

2.8.57 (16/07/2019)

+ Updated Appodeal iOS SDK to 2.5.7 (hot fix)

2.8.56 (10/07/2019)

+ Update Appodeal Android SDK to 2.5.6
+ Update Appodeal iOS SDK to 2.5.6
+ Fix issue with orientation
+ Move Appodeal.framework to adapters folder

2.8.55 (21/06/2019)

+ Update Appodeal Android SDK to 2.5.5
+ Update Appodeal iOS SDK to 2.5.5
+ Plugin removal tool added (Appodeal > Remove Plugin)

2.8.54 (06/06/2019)

+ Update Appodeal Android SDK to 2.5.4
+ Update Appodeal iOS SDK to 2.5.4
+ Update onResume method
+ Change MoPub integration method

2.8.53 (11/04/2019)

+ Update Appodeal Android SDK to 2.5.3
+ Update Appodeal iOS SDK to 2.5.3
+ Add constants for network names
+ Fix Crash Hunter Script for path with spaces

2.8.52 (13/03/2019)
+ Update Appodeal Android SDK to 2.5.2
+ Update Appodeal iOS SDK to 2.5.2
+ Add automatic integration check (Appodeal > Check Integration)

2.8.51 (04/02/2019)

+ Update Appodeal Android SDK to 2.5.1 (hotfix)

2.8.50 (26/12/2018)

+ Update Appodeal Android SDK to 2.5.0
+ Update Appodeal iOS SDK to 2.5.0
+ Add security config to allow http requests on Android API 28
+ Fix mopub crashes
+ Fix iOS Crash Hunter script.
+ Disable bitcode for xcode 9.x and below

2.8.49.1 (14/01/2019)

+ Update Appodeal Android SDK to 2.4.10
+ Update Appodeal iOS SDK to 2.4.10
+ Add security config to allow http requests on Android API 28
+ Fix mopub crashes
+ Fix iOS Crash Hunter script.
+ Disable bitcode for xcode 9.x and below

2.8.49 (05/12/2018)

+ Update Appodeal Android SDK to 2.4.9
+ Update Appodeal iOS SDK to 2.4.9

2.8.48 (01/11/2018)

+ Update Appodeal Android SDK to 2.4.8
+ Update Appodeal iOS SDK to 2.4.8

2.8.46 (18/09/2018)

+ Update Appodeal iOS SDK to 2.4.6
+ Update Appodeal Android SDK to 2.4.6
+ Android architectures filter added (Appodeal > Filter Android Architectures)

2.8.45 (18/08/2018)

+ Ogury provider auto change before build added
+ Mrec integration added
+ Appodeal Android SDK updated to 2.4.5
+ Appodeal iOS SDK updated to 2.4.5
+ onExpired callbacks added

2.8.44 (03/07/2018)

+ Google Play Services Resolver Plugin separated from Appodeal Plugin
+ Assets Postprocess fixes
+ Demo scenes fixes for Unity 4 and higher support
+ Appodeal Android SDK and adapters updated to 2.4.4
+ Appodeal iOS SDK and adapters updated to 2.4.4
+ getPredictedEcpm method added
+ dummy platform added
+ assets folder moved from appodeal/assets to Android folder

2.8.43 (04/06/2018)

+ Appodeal Android SDK updated to 2.4.3
+ Appodeal iOS SDK updated to 2.4.3

2.8.42 (22/05/2018)

+ Appodeal Android SDK updated to 2.4.2
+ Appodeal iOS SDK updated to 2.4.2

2.8.41 (21/05/2018)

+ Appodeal Android SDK updated to 2.4.1
+ Appodeal iOS SDK updated to 2.4.1

2.8.40 (11/05/2018)

+ Appodeal Android SDK updated to 2.4.0
+ Appodeal iOS SDK updated to 2.4.0

2.8.34 (18/05/2018)

+ Appodeal Android SDK updated to 2.3.4
+ Appodeal iOS SDK updated to 2.3.4

2.8.33 (04/05/2018)

+ Appodeal Android SDK updated to 2.3.3
+ Appodeal iOS SDK updated to 2.3.3

2.8.32 (19/04/2018)

+ Appodeal Android SDK updated to 2.3.2
+ Appodeal iOS SDK updated to 2.3.2

2.8.31 (12/03/2018)

+ iOS & Android Callbacks reworked to delegates

2.8.30 (27/02/2018)

+ Appodeal Android SDK updated to 2.3.0
+ Appodeal iOS SDK updated to 2.3.0
+ setCustomRule renamed to setSegmentFilter
+ Added isPrecache check to onRewardedVideoLoaded callback
+ Added Plugin unistall feature
+ Google Play Services Resolver updated to 1.2.62

2.8.23 (15/12/2017)

+ Appodeal Android SDK updated to 2.1.9
+ Appodeal iOS SDK updated to 2.1.10
+ Bitcode enabled by default

2.7.6 (08/08/2017)

+ Added setUserId method
+ Fixed wrong variable name for unity older than 5.6.0
+ Default show banner for unity 5.6.2 or newer.

2.7.4 (21/07/2017)

+ Removed READ_PHONE_STATE android permission
+ Fixed banner-view positioning

2.2.0 (23/10/2016)

+ Appodeal Android SDK updated to 1.15.7
+ Appodeal iOS SDK updated to 1.3.2
+ iOS Adapters now bundled with plugin
+ iOS Disable Network Fixes

2.1.0 (05/10/2016)

+ Appodeal Android SDK updated to 1.15.5
+ Appodeal iOS SDK updated to 1.3.0

2.0.5 (17/09/2016)

+ Appodeal iOS SDK updated to 1.2.4
+ postprocess fixes 

2.0.4 (14/09/2016)

+ Appodeal iOS SDK updated to 1.2.3
+ Non SKippable Video Callbacks reworked for iOS

2.0.3 (07/09/2016)

+ Appodeal iOS SDK updated to 1.1.0
+ setCustomSegment renamed to setCustomRule
+ iOS now supports setSmartBanners and setCustom Rule

2.0.2 (06/09/2016)

+ Appodeal Android SDK updated to 1.15.3

2.0.1 (05/09/2016)

+ Appdoeal.framework and Appodeal.bundle now included to the package
+ XCode API added
+ mod-pbxproj removed
+ Appodeal iOS post process reworked and improved

2.0 (04/09/2016)

+ Appodeal iOS SDK updated to 1.0.0
+ iOS placements and custom segments added
+ Android SDK with android dependent libraries updated to 1.15.2
+ Google's Play Services Resolver added with Appodeal Dependencies
