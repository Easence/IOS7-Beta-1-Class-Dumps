/* _MBLLoadMessageJob.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MFMailMessage;

__attribute__((visibility("hidden")))
@interface _MBLLoadMessageJob : XXUnknownSuperclass {
	MFMailMessage* _message;
	id _mbl;
}
@property(readonly, assign, nonatomic) MFMailMessage* message;
-(void)dealloc;
-(id)initForMessage:(id)message forMBLMailbox:(id)mblmailbox;
-(void)run;
@end
