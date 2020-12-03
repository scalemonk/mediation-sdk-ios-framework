#import "SMWaterfallEntry.h"

@protocol SMAdsRTBLoggerProtocol

/**
Logs a bid request to RTB provider event.

@param attr The attributed provider instance.
*/
- (void)logBidRequest:(SMWaterfallEntry*)attr;
/**
 Logs the latency of bid request to RTB provider event.
 
 @param attr The attributed provider instance.
 @param error The error object.
 @param duration The duration of the round trip to the Exchange in ms.
 */
- (void)logBidLatency:(SMWaterfallEntry*)attr
             duration:(NSNumber *)duration
                error:(NSError*)error;

@end
