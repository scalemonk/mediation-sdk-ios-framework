#import <Foundation/Foundation.h>
#import "SMProviderProtocol.h"
#import "SMProviderCallbacks.h"
#import "SMInterstitialProtocol.h"
#import "SMBannerProtocol.h"
#import "SMBannerView.h"
#import "SMVideoProtocol.h"
#import "AuctionProviderProtocol.h"


@class SMProviderCallbacks;

@interface SMUnityAdsProvider : NSObject <SMProviderProtocol, SMVideoProtocol, SMInterstitialProtocol>

@property (nonatomic, copy) NSString* appId;
@property (weak) SMProviderCallbacks* callbacks;

+ (SMUnityAdsProvider*) unityAdsWithAppId:(NSString*)appId;

@end
