/* SBUIPluginControllerHost.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBUIPluginControllerHost <NSObject>
-(void)uiPlugin:(id)plugin forceUpdateToInterfaceOrientation:(int)interfaceOrientation animated:(BOOL)animated;
-(void)uiPluginUserEventOccurred:(id)occurred;
-(BOOL)uiPlugin:(id)plugin launchApplicationWithBundleID:(id)bundleID openURL:(id)url;
-(BOOL)uiPlugin:(id)plugin openURL:(id)url;
-(BOOL)uiPluginAttemptDeviceUnlock:(id)unlock withPassword:(id)password lockViewOwner:(id)owner;
-(void)uiPlugin:(id)plugin setExpectsFaceContact:(BOOL)contact;
-(BOOL)uiPluginExpectsFaceContact:(id)contact;
-(void)uiPlugin:(id)plugin isNowRunning:(BOOL)running;
-(void)uiPluginWantsDismissal:(id)dismissal withAnimation:(BOOL)animation;
-(BOOL)uiPluginWantsActivation:(id)activation forEvent:(int)event completion:(id)completion;
@end
