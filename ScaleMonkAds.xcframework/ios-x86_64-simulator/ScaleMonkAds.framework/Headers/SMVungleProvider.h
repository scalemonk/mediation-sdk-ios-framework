#import <Foundation/Foundation.h>
#import "SMProviderProtocol.h"
#import "SMVideoProtocol.h"
#import "SMInterstitialProtocol.h"
#import "AuctionProviderProtocol.h"

@class SMProviderCallbacks;

@interface SMVungleProvider : NSObject <SMProviderProtocol, SMVideoProtocol, SMInterstitialProtocol, AuctionProviderProtocol>

@property (nonatomic, copy) NSString* appId;
@property (weak) SMProviderCallbacks* callbacks;

+ (SMVungleProvider*) vungleWithAppId:(NSString*)appId interstitialPlacementRTB:(NSString*)interstitialPlacementRTB videoPlacementRTB:(NSString*)videoPlacementRTB;

@end