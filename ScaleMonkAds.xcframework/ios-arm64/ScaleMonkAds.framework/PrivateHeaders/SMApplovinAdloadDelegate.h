#import <Foundation/Foundation.h>
#import <AppLovinSDK/AppLovinSDK.h>

@class SMWaterfallEntry;

@protocol SMApplovinAddloadProtocol <NSObject>

- (void) didFailToLoadAdWithAttrProvider:(SMWaterfallEntry*)attrProvider;
- (void) didLoadAdWithAttrProvider:(SMWaterfallEntry*)attrProvider ad:(ALAd*)ad;

@end


@interface SMApplovinAdloadDelegate : NSObject <ALAdLoadDelegate>

- (instancetype)initWithAttrProvider:(SMWaterfallEntry*)attrProvider delegate:(id<SMApplovinAddloadProtocol>)delegate;

@end

