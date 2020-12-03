#import <Foundation/Foundation.h>

@protocol SMRewardedVideoAdEventListener <NSObject>
@optional

- (void)onVideoAdClick:(NSString *)tag;
- (void)onVideoAdViewStart:(NSString *)tag;
- (void)onVideoAdFinishWithNoReward:(NSString *)tag;
- (void)onVideoAdFinishWithReward:(NSString *)tag;
- (void)onVideoAdFail:(NSString *)tag;
- (void)onVideoReady;

@end
