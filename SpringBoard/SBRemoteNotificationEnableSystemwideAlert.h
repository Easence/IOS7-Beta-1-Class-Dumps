/* SBRemoteNotificationEnableSystemwideAlert.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationEnableSystemwideAlert : XXUnknownSuperclass {
	SBApplication* _app;
}
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)_showNotificationsPrefs;
-(void)dealloc;
-(id)initWithApplication:(id)application;
@end
