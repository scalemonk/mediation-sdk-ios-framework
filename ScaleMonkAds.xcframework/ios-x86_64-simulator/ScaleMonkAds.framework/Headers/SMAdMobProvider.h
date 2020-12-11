#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GADBannerView.h>
#import "SMProviderProtocol.h"
#import "SMInterstitialProtocol.h"
#import "SMBannerProtocol.h"
#import "SMBannerView.h"
#import "SMVideoProtocol.h"

@class SMProviderCallbacks;

@interface SMAdMobProvider : NSObject<SMProviderProtocol, SMInterstitialProtocol, SMBannerProtocol, SMVideoProtocol>

@property (weak) SMProviderCallbacks* adsInstance;
+ (SMAdMobProvider*) admobDefault;

@end

@interface AdMobSize : NSObject

@property (nonatomic) GADAdSize gadSize;

+ (AdMobSize*)forSize:(GADAdSize)size;

@end
