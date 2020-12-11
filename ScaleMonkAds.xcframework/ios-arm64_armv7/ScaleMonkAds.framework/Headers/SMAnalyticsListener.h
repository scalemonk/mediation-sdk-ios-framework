#import <Foundation/Foundation.h>

@protocol SMAnalyticsListener <NSObject>
@required
- (void)onEventReceived:(NSString *)eventName
            eventParams:(NSDictionary<NSString *, NSObject *> *)eventParams;
@end
