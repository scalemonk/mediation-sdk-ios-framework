#import <Foundation/Foundation.h>
#import <AppLovinSDK/AppLovinSDK.h>

#import "SMInterstitialProtocol.h"
#import "SMApplovinAdloadDelegate.h"

@class SMProviderCallbacks;

@interface SMAppLovinInterstitialDelegate : NSObject<SMInterstitialProtocol, SMApplovinAddloadProtocol>

@property (nonatomic, weak) SMProviderCallbacks* callbacks;

- (instancetype)initWithSdk:(ALSdk *)sdk
               andCallbacks:(SMProviderCallbacks*)callbacks;

- (void)updateConfigsWithSdk:(ALSdk *)appLovinSdk;

@end
