/* SBRemoteNotificationPermissionAlert.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBApplication;

__attribute__((visibility("hidden")))
@interface SBRemoteNotificationPermissionAlert : XXUnknownSuperclass {
	SBApplication* _app;
	unsigned _types;
}
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithApplication:(id)application notificationTypes:(unsigned)types;
@end
