/* VoicemailErrorController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface VoicemailErrorController : XXUnknownSuperclass {
	NSMutableArray* _currentErrors;
	unsigned _dropOthers : 1;
}
+(id)sharedInstance;
-(void)systemAlertDismissed:(int)dismissed result:(int)result;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)presentErrorBlockingOthers:(id)others;
-(void)presentError:(id)error;
-(void)dealloc;
@end
