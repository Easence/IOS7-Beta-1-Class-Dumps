/* QuotaAppDetailsResponse.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface QuotaAppDetailsResponse : XXUnknownSuperclass {
	NSMutableArray* _apps;
}
@property(readonly, assign, nonatomic) NSArray* apps;
-(id)description;
-(void)addApps:(id)apps;
-(void)dealloc;
-(id)initWithHTTPResponse:(id)httpresponse data:(id)data;
@end