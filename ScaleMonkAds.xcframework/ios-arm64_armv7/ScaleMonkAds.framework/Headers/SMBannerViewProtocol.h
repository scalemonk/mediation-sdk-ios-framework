#import <Foundation/Foundation.h>
@import UIKit;

@class SMBannerView;


@protocol SMBannerViewProtocol <NSObject>


@property (nonatomic) UIViewController* viewController;
@property (nonatomic) bool isLoaded;
@property (nonatomic) NSString* bannerTag;
@property (nonatomic) SMBannerView* owner;


- (void) requestLoad;
- (void) notifyBannerShown;

@end
