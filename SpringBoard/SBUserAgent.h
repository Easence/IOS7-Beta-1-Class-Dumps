/* SBUserAgent.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIUserAgent.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBBulletinAlertHandlerRegistry;

__attribute__((visibility("hidden")))
@interface SBUserAgent : XXUnknownSuperclass <SBUIUserAgent> {
	SBBulletinAlertHandlerRegistry* _modalAlertRegistry;
}
+(id)sharedUserAgent;
-(void)disableLockScreenBundleNamed:(id)named deactivationContext:(id)context;
-(void)enableLockScreenBundleNamed:(id)named activationContext:(id)context;
-(void)setWallpaperTunnelActive:(BOOL)active forFullscreenAlertController:(id)fullscreenAlertController;
-(BOOL)isUsingLegacyStyle;
-(void)activateRemoteAlertService:(id)service options:(id)options;
-(void)activateStarkRemoteAlertService:(id)service ofType:(id)type;
-(void)setMinimumBacklightLevel:(float)level animated:(BOOL)animated;
-(BOOL)isSBUILoggingEnabled;
-(void)removeActiveInterfaceOrientationObserver:(id)observer;
-(void)addActiveInterfaceOrientationObserver:(id)observer;
-(void)activateModalBulletinAlert:(id)alert;
-(id)modalBulletinAlertHandlerRegistry;
-(void)stopRinging;
-(void)playRingtoneAtPath:(id)path vibrationPattern:(id)pattern;
-(void)playRingtoneAtPath:(id)path;
-(int)networkUsageTypeForAppWithDisplayID:(id)displayID;
-(void)setIdleText:(id)text;
-(void)setBadgeNumberOrString:(id)string forApplicationWithID:(id)anId;
-(void)notifyOnNextUserEvent;
-(BOOL)isIdleTimerDisabledForReason:(id)reason;
-(void)setIdleTimerDisabled:(BOOL)disabled forReason:(id)reason;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary andDimScreen:(BOOL)screen;
-(void)lockAndDimDeviceDisconnectingCallIfNecessary:(BOOL)necessary;
-(void)lockAndDimDevice;
-(void)undimScreen;
-(void)dimScreen:(BOOL)screen;
-(void)updateLockScreenInterfaceIfNecessary;
-(CGRect)defaultContentRegionForAwayViewPlugin:(id)awayViewPlugin withOrientation:(int)orientation;
-(BOOL)launchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
-(BOOL)canLaunchFromAwayViewPluginWithURL:(id)url bundleID:(id)anId;
-(BOOL)launchFromPushOrLocalBulletin:(id)pushOrLocalBulletin origin:(int)origin;
-(BOOL)launchFromBulletinWithURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate launchOrigin:(int)origin;
-(BOOL)canLaunchFromBulletinWithURL:(id)url bundleID:(id)anId;
-(BOOL)_launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock animate:(BOOL)animate;
-(BOOL)launchFromSource:(int)source withURL:(id)url bundleID:(id)anId allowUnlock:(BOOL)unlock;
-(BOOL)launchApplicationFromSource:(int)source withURL:(id)url options:(id)options;
-(BOOL)launchApplicationFromSource:(int)source withDisplayID:(id)displayID options:(id)options;
-(BOOL)canLaunchFromSource:(int)source withURL:(id)url bundleID:(id)anId;
-(BOOL)_openApplication:(id)application withURL:(id)url fromSource:(int)source animated:(BOOL)animated options:(id)options;
-(void)_cleanupFromBannerLaunch;
-(id)_safeValue:(id)value forKey:(id)key ofType:(Class)type;
-(BOOL)openURL:(id)url allowUnlock:(BOOL)unlock animated:(BOOL)animated;
-(void)openURL:(id)url animateIn:(BOOL)anIn scale:(float)scale start:(double)start duration:(float)duration animateOut:(BOOL)anOut;
-(void)prepareToAnswerCall;
-(BOOL)launchDisplayWithURL:(id)url forCall:(BOOL)call sender:(id)sender;
-(void)setFlipBackAttributeForSEODisplayWithIdentifier:(id)identifier;
-(BOOL)lockScreenIsShowing;
-(BOOL)deviceIsTethered;
-(BOOL)deviceIsBlocked;
-(BOOL)deviceIsPasscodeLockedRemotely;
-(BOOL)deviceIsPasscodeLocked;
-(BOOL)deviceIsLocked;
-(BOOL)canUserLaunchIcon;
-(BOOL)alertIsActive;
-(BOOL)springBoardIsActive;
-(BOOL)applicationInstalledForDisplayID:(id)displayID;
-(id)topSuspendedEventsOnlyDisplayID;
-(id)foregroundDisplayID;
-(id)foregroundApplicationDisplayID;
-(int)activeInterfaceOrientation;
-(void)updateInterfaceOrientationIfNecessary;
-(void)dealloc;
-(id)init;
@end
