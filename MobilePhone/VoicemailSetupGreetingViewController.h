/* VoicemailSetupGreetingViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "VoicemailGreetingViewController.h"


__attribute__((visibility("hidden")))
@interface VoicemailSetupGreetingViewController : VoicemailGreetingViewController {
	unsigned _saving : 1;
	unsigned _saveAttempted : 1;
}
-(void)_taskEnded:(id)ended;
-(void)_save;
-(void)voicemailGreetingView:(id)view saveErrored:(id)errored;
-(void)voicemailGreetingView:(id)view statusMessageChanged:(id)changed;
-(void)voicemailGreetingViewSaveCompleted:(id)completed;
-(void)voicemailGreetingViewSaveAbilityChanged:(id)changed;
-(void)_saveButtonClicked:(id)clicked;
-(void)_backButtonClicked:(id)clicked;
-(void)_updateNavBarButtons;
-(void)loadView;
-(void)saveStateToDefaults;
-(void)restoreStateFromDefaults;
-(id)greetingStatusView;
-(id)init;
@end
