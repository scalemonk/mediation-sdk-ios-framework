#import <Foundation/Foundation.h>
#import "SMAdsConstants.h"

@protocol AuctionProviderProtocol <NSObject>
@required
- (NSDictionary<NSString *, NSObject *>*)providerDataForAdType:(AdTypeEnum)adType;
@end
