# Changelog
All notable changes to this project will be documented in this file.

## [1.0.0] - 2021-03-05
- Added the possibility to select which adnets to include and which versions of them.
- Renamed Swift and Objective-C interface to have more natural names.
- Verbose logging can now be turned on and off.

## [0.4.2] - 2021-03-01
- Fixed facebook `allow tracking` to be mandatory only on iOS 14.5 onwards.

## [0.4.1] - 2021-02-12
- Fix crash when using Vungle test-mode.
- Fixed banner analytics.

## [0.4.0] - 2021-02-10
- Fix AppLovin Mediation dialog popping up.
- Updated `Google-Mobile-Ads-SDK` to version `7.69.0`.
- Updated `AppLovinSDK` to version `6.15.1`.
- Updated `FBAudienceNetwork` to version `6.2.1`.
- Updated `VungleSDK-iOS` to version `6.8.1`.

## [0.3.0] - 2021-02-09
- Fix ironSource crash when calling `setUserCantGiveGDPRConsentWithStatus`.
- Renamed swift methods in API to make them more intuitive.

## [0.2.0] - 2021-02-08
- Fix `setUserCantGiveGDPRConsentWithStatus` method.
- Added `isRewardedReadyToShow` and `isInterstitialReadyToShow`.

## [0.1.2] - 2021-02-03
- Fix compilation in different versions of Xcode.
- Remove swift interface.

## [0.1.1] - 2021-02-01
- First version of ScaleMonkAds.
- Enables display of Banner, Interstitial and Rewarded Video ads.
- Integrates with AdMob, Applovin, Facebook, IronSource, UnityAds and Vungle SDKs.
