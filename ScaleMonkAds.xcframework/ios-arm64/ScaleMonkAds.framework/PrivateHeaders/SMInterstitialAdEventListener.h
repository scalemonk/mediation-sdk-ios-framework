#import <Foundation/Foundation.h>

@protocol SMInterstitialAdEventListener <NSObject>
@optional
- (void) onInterstitialClick:(NSString *)tag;
- (void) onInterstitialFail:(NSString *)tag;
- (void) onInterstitialView:(NSString *)tag;
- (void) onInterstitialViewStart:(NSString *)tag;
- (void) onInterstitialReady;

@end
