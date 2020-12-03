#import <Foundation/Foundation.h>

@class SMProviderCallbacks;
@class SMWaterfallEntry;

typedef NS_ENUM(NSInteger, SMGDPRConsentStatus){
    NotAplicable = 1,
    Unknown = 2,
    Granted = 3,
    Revoked = 4
};

@protocol SMProviderProtocol <NSObject>

- (NSString*) name;

@optional

/**
 List of test modes avaialble for the provider.

 @return List of available test modes.

 @see TestMode enum.
 */
+ (NSArray<NSNumber*>*)supportedTestModes;

/**
 Transforms a given attributed provider to be on pair with the configured test mode, mainly through the
 change of its placement.

 @param attr The attributed provider.
 */
+ (void)transformAttrToAdhereTestMode:(SMWaterfallEntry*)attr;

/**
 * Give providers a hook that is fired prior to call `initializeWithAllPlacements`.
 */

/**
 Prepares the provider to be ready for test mode.
 */
- (void)prepareForTestMode;

@required

/**
 Initializes the provider.

 A provider initialization consists of initializing the provider SDK and making sure that the provider
 SDK complies with the user consent (if they are under GDPR data restrictions).

 The provider can only make cache and display calls after it's initialized, otherwise it won't work.

 @param allPlacements dictionary of all the configured placements separated by ad type and crosspromo
 @param adsInstance The SMProviderCallbacks instance.
 @param gDPRConsentStatus the GDPR consent status (true or false)
 */
- (void)initializeWithAllPlacements:(NSMutableDictionary*)allPlacements
                     andAdsInstance:(SMProviderCallbacks*)adsInstance
               andGDPRConsentStatus: (Boolean) gDPRConsentStatus;

- (void) updateConsentStatus: (SMGDPRConsentStatus)status;
@end
