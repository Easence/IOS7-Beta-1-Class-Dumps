/* _ADResourceTrackingRecord.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSURL;

__attribute__((visibility("hidden")))
@interface _ADResourceTrackingRecord : XXUnknownSuperclass {
	NSURL* _URL;
	double _startTime;
	double _requestTime;
	double _responseTime;
}
@property(retain, nonatomic) NSURL* URL;
@property(assign, nonatomic) double responseTime;
@property(assign, nonatomic) double requestTime;
@property(assign, nonatomic) double startTime;
-(void)dealloc;
@end
