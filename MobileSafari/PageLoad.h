/* PageLoad.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSURL, NSTimer, NSError;

__attribute__((visibility("hidden")))
@interface PageLoad : XXUnknownSuperclass {
	int _status;
	NSTimer* _timer;
	NSDate* _startRenderDate;
	NSDate* _endRenderDate;
	NSDate* _startRenderFrameCountDate;
	NSDate* _endRenderFrameCountDate;
	long _startRenderFrameCount;
	long _endRenderFrameCount;
	NSURL* _URL;
	NSURL* _redirectURL;
	NSDate* _startDate;
	NSDate* _startLoadDate;
	NSDate* _redirectDate;
	NSDate* _endLoadDate;
	NSDate* _firstVisualLayoutDate;
	NSError* _error;
	XXStruct_Eg7cJC _heapBefore;
	XXStruct_Eg7cJC _heapAfter;
}
@property(assign, nonatomic) XXStruct_Eg7cJC heapAfter;
@property(assign, nonatomic) XXStruct_Eg7cJC heapBefore;
@property(retain, nonatomic) NSError* error;
@property(retain, nonatomic) NSDate* firstVisualLayoutDate;
@property(retain, nonatomic) NSDate* endLoadDate;
@property(retain, nonatomic) NSDate* redirectDate;
@property(retain, nonatomic) NSDate* startLoadDate;
@property(retain, nonatomic) NSDate* startDate;
@property(retain, nonatomic) NSURL* redirectURL;
@property(retain, nonatomic) NSURL* URL;
-(double)framesPerSecond;
-(double)renderDuration;
-(void)finishRenderTime:(id)time;
-(void)startRenderTime:(id)time;
-(void)finishRenderFps:(id)fps;
-(void)startRenderFps:(id)fps;
-(void)setTimer:(id)timer;
-(id)timer;
-(id)statusString;
-(int)status;
-(void)setStatus:(int)status;
-(BOOL)atURL:(id)url;
-(id)description;
-(void)dealloc;
-(id)initWithURL:(id)url;
@end
