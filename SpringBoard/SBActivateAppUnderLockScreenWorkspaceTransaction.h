/* SBActivateAppUnderLockScreenWorkspaceTransaction.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBToAppWorkspaceTransaction.h"

@class SBLockScreenViewControllerBase, SBDisableActiveInterfaceOrientationChangeAssertion;

__attribute__((visibility("hidden")))
@interface SBActivateAppUnderLockScreenWorkspaceTransaction : SBToAppWorkspaceTransaction {
	SBLockScreenViewControllerBase* _lockScreenController;
	SBDisableActiveInterfaceOrientationChangeAssertion* _disableActiveOrientationChangeAssertion;
}
-(BOOL)selfApplicationExited:(id)exited;
-(BOOL)selfApplicationLaunchDidFail:(id)selfApplicationLaunch;
-(BOOL)selfWorkspaceDidResume;
-(void)_suspendWorkspaceIfNecessary;
-(BOOL)_shouldWorkspaceBeSuspended;
-(BOOL)selfApplicationDidBecomeReceiver:(id)selfApplication fromApplication:(id)application;
-(BOOL)selfApplicationActivated:(id)activated;
-(BOOL)selfAlertDidActivate:(id)selfAlert overAlerts:(id)alerts;
-(void)_alertDidActivate;
-(void)_handleAppActivationFailure;
-(void)_setupAndActivate;
-(void)_transactionComplete;
-(void)_commit;
-(BOOL)shouldPerformToAppStateCleanupOnCompletion;
-(BOOL)shouldToggleSpringBoardStatusBarOnCleanup;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application lockScreenController:(id)controller activationHandler:(id)handler;
-(id)initWithWorkspace:(id)workspace alertManager:(id)manager application:(id)application lockScreenController:(id)controller;
@end
