/* PHVoicemailSetupViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "TPSetPINViewControllerDelegate.h"
#import "PHVoicemailGreetingViewControllerDelegate.h"

@class PHVoicemailNavigationController, PhoneNavigationController;
@protocol PHVoicemailSetupViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PHVoicemailSetupViewController : XXUnknownSuperclass <TPSetPINViewControllerDelegate, PHVoicemailGreetingViewControllerDelegate> {
	PHVoicemailNavigationController* _navigationController;
	id<PHVoicemailSetupViewControllerDelegate> _voicemailSetupDelegate;
	PhoneNavigationController* _setupPINAndGreetingNavigationController;
}
@property(retain) PhoneNavigationController* setupPINAndGreetingNavigationController;
@property(assign) id<PHVoicemailSetupViewControllerDelegate> voicemailSetupDelegate;
@property(assign) PHVoicemailNavigationController* navigationController;
-(BOOL)_hasValidProvisionalPIN;
-(void)voicemailGreetingViewControllerFinished:(id)finished;
-(void)setPINViewControllerFinished:(id)finished success:(BOOL)success oldPIN:(id)pin newPIN:(id)pin4;
-(void)_voicemailSetupButtonClicked:(id)clicked withEvent:(id)event;
-(BOOL)wantsFullScreenLayout;
-(void)loadView;
-(void)dealloc;
-(id)initWithNavigationController:(id)navigationController;
@end
