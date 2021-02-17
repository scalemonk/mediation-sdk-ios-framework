//  SMAds.h
//
//  © 2020 ScaleMonk, Inc. All Rights Reserved.
// Licensed under the ScaleMonk SDK License Agreement
// https://www.scalemonk.com/legal/en-US/mediation-license-agreement/index.html
//

#import <Foundation/Foundation.h>
#import "SMRewardedVideoAdEventListener.h"
#import "SMInterstitialAdEventListener.h"
#import "SMBannerAdEventListener.h"
#import "SMBannerView.h"
#import "SMSessionService.h"
#import "SMWrapperAnalytics.h"

@interface SMAds : NSObject

+ (SMAds *)sharedInstance;

- (instancetype)initWithApplicationId:(NSString *)applicationId;

- (instancetype)initWithApplicationId:(NSString *)applicationId andCustomUserId: (NSString *)customUserId andAnalytics: (id<SMWrapperAnalytics>) analytics;

- (void)initialize:(void (^)(BOOL))done;

- (void)initialize;

- (void)addVideoListener:(id <SMRewardedVideoAdEventListener>)listener;

- (void)addInterstitialListener:(id <SMInterstitialAdEventListener>)listener;

- (void)addBannerListener:(id <SMBannerAdEventListener>)listener;

- (void)clearVideoListeners;

- (void)clearInterstitialListeners;

- (void)clearBannerListeners;

- (void)showInterstitialAdWithViewController:(UIViewController *)viewController
                                      andTag:(NSString *)tag;

- (void)showInterstitialAdWithViewController:(UIViewController *)viewController;

- (void)showRewardedVideoAdWithViewController:(UIViewController *)viewController
                                       andTag:(NSString *)tag;

- (void)showRewardedVideoAdWithViewController:(UIViewController *)viewController;

- (void)showBannerAdWithViewController:(UIViewController *)viewController
                            bannerView:(SMBannerView *)bannerView
                                andTag:(NSString *)tag;

- (void)showBannerAdWithViewController:(UIViewController *)viewController
                            bannerView:(SMBannerView *)bannerView;

- (void)stopLoadingBanners;

- (void)stopLoadingBannersWithTag:(NSString *)tag;

- (void)setIsApplicationChildDirected:(BOOL)childDirectedTreatment;

- (void)setHasGDPRConsentWithStatus:(BOOL)status;

- (void)setUserCantGiveGDPRConsentWithStatus: (BOOL) status;

- (BOOL)areInterstitialsEnabled;

- (BOOL)areVideosEnabled;

- (BOOL)areBannersEnabled;

- (BOOL)isInterstitialReadyToShow:(NSString *)tag;

- (BOOL)isRewardedReadyToShow:(NSString *)tag;

- (void)enablePolicy:(NSString*) policyName withSessionService: (id<SMSessionService>) sessionService;

- (void)setExtraInfo:(NSDictionary*)extraInfo;

@end

