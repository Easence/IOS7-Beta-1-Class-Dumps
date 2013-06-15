/* SBStarkAlertToImpersonatedAppWorkspaceTransaction.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBStarkAlertToAppWorkspaceTransaction.h"

@class SBUIAnimationController, SBAlert, SBApplication;

__attribute__((visibility("hidden")))
@interface SBStarkAlertToImpersonatedAppWorkspaceTransaction : SBStarkAlertToAppWorkspaceTransaction {
	SBAlert* _fromAlert;
	SBAlert* _toAlert;
	SBApplication* _toApplication;
	SBUIAnimationController* _animation;
}
-(void)_activateAlert;
-(BOOL)selfStarkAlertDidActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(BOOL)selfStarkAlertWillActivate:(id)selfStarkAlert overAlerts:(id)alerts;
-(BOOL)selfStarkAlertDidDeactivate:(id)selfStarkAlert;
-(int)_setupMilestonesFrom:(id)from to:(id)to;
-(id)_newAnimationControllerFrom:(id)from to:(id)to;
-(void)_beginAnimation;
-(id)debugDescription;
-(void)dealloc;
-(id)initWithWorkspace:(id)workspace mainScreenAlertManager:(id)manager starkScreenController:(id)controller alert:(id)alert toApplication:(id)application;
@end
