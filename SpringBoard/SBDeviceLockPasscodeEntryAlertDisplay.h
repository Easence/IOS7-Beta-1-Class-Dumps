/* SBDeviceLockPasscodeEntryAlertDisplay.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBSlidingAlertDisplay.h"


__attribute__((visibility("hidden")))
@interface SBDeviceLockPasscodeEntryAlertDisplay : SBSlidingAlertDisplay {
}
-(float)durationForOthersActivation;
-(float)delayForOthersActivation;
-(void)dismiss;
-(void)alertDisplayWillBecomeVisible;
-(void)deviceUnlockCanceled;
-(void)deviceUnlockSucceeded;
-(void)useEmergencyCallButton;
@end
