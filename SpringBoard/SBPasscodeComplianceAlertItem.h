/* SBPasscodeComplianceAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBPasscodeComplianceAlertItem : XXUnknownSuperclass {
	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;
}
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(BOOL)shouldShowInLockScreen;
-(void)dealloc;
-(id)initWithTitle:(id)title message:(id)message continueButtonTitle:(id)title3 cancelButtonTitle:(id)title4;
@end
