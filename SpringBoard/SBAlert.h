/* SBAlert.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBDisplayProtocol.h"
#import "SpringBoard-Structs.h"

@class SBActivationContext, NSHashTable, NSMapTable, NSMutableDictionary, UIScreen, SBAlertView, SBAlertManager;
@protocol SBAlertDelegate;

__attribute__((visibility("hidden")))
@interface SBAlert : XXUnknownSuperclass <SBDisplayProtocol> {
	id<SBAlertDelegate> _alertDelegate;
	SBAlertView* _display;
	NSMutableDictionary* _dictionary;
	SBActivationContext* _activationContext;
	BOOL _isWallpaperTunnelActive;
	NSMapTable* _displayValues;
	NSHashTable* _displayFlags;
	BOOL _orientationChangedEventsEnabled;
	float _accelerometerSampleInterval;
	BOOL _requestedDismissal;
	UIScreen* _targetScreen;
	SBAlertManager* _alertManager;
}
@property(retain, nonatomic) SBAlertManager* alertManager;
@property(assign, nonatomic, getter=_requestedDismissal, setter=_setRequestedDismissal:) BOOL requestedDismissal;
@property(copy, nonatomic) SBActivationContext* activationContext;
+(void)test;
+(void)registerForAlerts;
-(void)_removeFromImpersonatedAppIfNecessary;
-(id)_impersonatesApplicationWithBundleID;
-(void)removeFromView;
-(void)alertViewIsReadyToDismiss:(id)dismiss;
-(void)setDisplay:(id)display;
-(void)setAlertDelegate:(id)delegate;
-(id)alertDelegate;
-(BOOL)suppressesControlCenter;
-(BOOL)suppressesNotificationCenter;
-(BOOL)suppressesBanners;
-(void)handleAutoLock;
-(BOOL)handleHeadsetButtonPressed:(BOOL)pressed;
-(BOOL)handleVolumeDownButtonPressed;
-(BOOL)handleVolumeUpButtonPressed;
-(BOOL)handleLockButtonPressed;
-(BOOL)hasTranslucentBackground;
-(BOOL)shouldPendAlertItemsWhileActive;
-(void)handleSlideshowHardwareButton;
-(BOOL)handleMenuButtonHeld;
-(BOOL)handleMenuButtonDoubleTap;
-(BOOL)handleMenuButtonTap;
-(void)animateDeactivation;
-(BOOL)currentlyAnimatingDeactivation;
-(void)didFinishAnimatingOut;
-(void)didFinishAnimatingIn;
-(void)didAnimateLockKeypadOut;
-(void)didAnimateLockKeypadIn;
-(int)starkStatusBarStyle;
-(int)statusBarStyle;
-(double)autoLockTime;
-(BOOL)managesOwnStatusBarAtActivation;
-(double)autoDimTime;
-(BOOL)allowsEventOnlySuspension;
-(BOOL)expectsFaceContactInLandscape;
-(BOOL)expectsFaceContact;
-(void)setExpectsFaceContact:(BOOL)contact inLandscape:(BOOL)landscape;
-(void)setExpectsFaceContact:(BOOL)contact;
-(int)effectiveStatusBarStyle;
-(double)accelerometerSampleInterval;
-(void)setAccelerometerSampleInterval:(double)interval;
-(BOOL)orientationChangedEventsEnabled;
-(void)setOrientationChangedEventsEnabled:(BOOL)enabled;
-(id)description;
-(void)deactivate;
-(int)interfaceOrientationForActivation;
-(void)activate;
-(int)statusBarStyleOverridesToCancel;
-(void)displayDidDisappear;
-(float)finalAlpha;
-(BOOL)showsSpringBoardStatusBar;
-(BOOL)undimsDisplay;
-(BOOL)allowsStackingOfAlert:(id)alert;
-(void)removeObjectForKey:(id)key;
-(id)objectForKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)alertDisplayViewWithSize:(CGSize)size;
-(id)deactivationValue:(unsigned)value;
-(BOOL)deactivationFlag:(unsigned)flag;
-(void)setDeactivationSetting:(unsigned)setting value:(id)value;
-(void)setDeactivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)clearDeactivationSettings;
-(id)activationValue:(unsigned)value;
-(BOOL)activationFlag:(unsigned)flag;
-(void)setActivationSetting:(unsigned)setting value:(id)value;
-(void)setActivationSetting:(unsigned)setting flag:(BOOL)flag;
-(void)clearActivationSettings;
-(BOOL)isWallpaperTunnelActive;
-(void)setWallpaperTunnelActive:(BOOL)active;
-(BOOL)displayFlag:(unsigned)flag;
-(id)displayValue:(unsigned)value;
-(void)setDisplaySetting:(unsigned)setting value:(id)value;
-(void)setDisplaySetting:(unsigned)setting flag:(BOOL)flag;
-(void)clearDisplaySettings;
-(void)dismissAlert;
-(void)clearDisplay;
-(id)display;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)didMoveToParentViewController:(id)parentViewController;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(id)_screen;
-(void)_setTargetScreen:(id)screen;
-(void)dealloc;
-(id)init;
-(BOOL)isRemote;
-(BOOL)matchesRemoteAlertService:(id)service options:(id)options;
-(id)effectiveViewController;
@end
