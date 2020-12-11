#import <Foundation/Foundation.h>

@protocol SMBannerAdEventListener <NSObject>
@optional
- (void)onBannerFail:(NSString *)tag;
- (void)onBannerCompleted:(NSString *)tag;
@end
