/* PhoneApplication.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UIApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIWindow, NSString, UIViewController, UIActionSheet, UIAlertView, UIImage, UIColor, PhoneRootViewController;
@protocol PhoneBaseViewController;

__attribute__((visibility("hidden")))
@interface PhoneApplication : XXUnknownSuperclass <UIApplicationDelegate> {
	PhoneRootViewController* _rootController;
	UIWindow* _window;
	UIViewController<PhoneBaseViewController>* _currentController;
	UIActionSheet* _currentActionSheet;
	UIAlertView* _alertView;
	id _alertHandler;
	double _launchTime;
	unsigned _isDialingCall : 1;
	unsigned _suspendingApplication : 1;
	unsigned _resumingApplication : 1;
	unsigned _applicationResumedViaURL : 1;
	NSString* _cachedApplicationBadgeString;
	int _transparencyRequestCounter;
}
@property(retain, nonatomic) UIWindow* window;
@property(assign) int transparencyRequestCounter;
@property(assign, nonatomic) UIViewController<PhoneBaseViewController>* currentController;
@property(copy, nonatomic) id alertHandler;
@property(retain, nonatomic) UIAlertView* alertView;
@property(readonly, assign) UIColor* applicationTintColor;
@property(readonly, assign, nonatomic) BOOL resumingApplication;
@property(readonly, assign, nonatomic) BOOL suspendingApplication;
@property(readonly, assign, nonatomic) BOOL applicationResumedViaURL;
@property(readonly, assign, nonatomic) BOOL showsPhoneVoicemail;
@property(readonly, assign, nonatomic) BOOL dialerIsNumericOnly;
@property(readonly, assign, nonatomic) BOOL showsPhoneDialer;
@property(readonly, assign, nonatomic) BOOL badgesMissedFaceTime;
@property(readonly, assign, nonatomic) BOOL badgesMissedFaceTimeAudio;
@property(readonly, assign, nonatomic) BOOL badgesMissedTelephonyCalls;
@property(readonly, assign, nonatomic) BOOL showsFaceTimeRecents;
@property(readonly, assign, nonatomic) BOOL showsFaceTimeAudioRecents;
@property(readonly, assign, nonatomic) BOOL showsTelephonyRecents;
@property(readonly, assign, nonatomic) BOOL showsFaceTimeFavorites;
@property(readonly, assign, nonatomic) BOOL showsFaceTimeAudioFavorites;
@property(readonly, assign, nonatomic) BOOL showsTelephonyFavorites;
@property(readonly, assign, nonatomic) BOOL showsFaceTime;
@property(readonly, assign, nonatomic) BOOL showsFaceTimeAudio;
@property(readonly, assign, nonatomic) BOOL showsTelephonyCalls;
@property(readonly, assign, nonatomic) BOOL defaultActionIsFaceTime;
@property(readonly, assign, nonatomic) BOOL defaultActionIsFaceTimeAudio;
@property(readonly, assign, nonatomic) BOOL defaultActionIsTelephonyCall;
@property(readonly, assign, nonatomic) int defaultAction;
@property(readonly, assign, nonatomic) BOOL showSplashScreenOnSignin;
@property(readonly, assign, nonatomic) BOOL tabBarCanSlide;
@property(readonly, assign, nonatomic) BOOL tabBarFillsScreen;
@property(readonly, assign, nonatomic) BOOL contentViewCanRotate;
@property(readonly, assign, nonatomic) BOOL alwaysShowVideoConferenceController;
@property(readonly, assign, nonatomic) UIImage* contentViewBackgroundImage;
@property(readonly, assign, nonatomic) int addressBookUIStyle;
@property(readonly, assign, nonatomic) int wizardGlobalAppearanceStyle;
@property(readonly, assign, nonatomic) unsigned userInterfaceStyle;
+(id)sharedNumberFormatter;
+(id)viewControllerForTabViewType:(int)tabViewType;
+(id)viewControllerForRootViewType:(int)rootViewType;
+(Class)controllerClassForTabViewType:(int)tabViewType;
-(BOOL)showsCallsFromService:(int)service;
-(void)releaseApplicationTransparency;
-(void)requestApplicationTransparency;
-(BOOL)faceTimeAudioIsAvailable;
-(BOOL)isDeviceCapableOfFaceTimeAudio;
-(BOOL)telephonyCallingIsAvailable;
-(BOOL)isDeviceCapableOfTelephonyCalls;
-(BOOL)faceTimeIsAvailable;
-(BOOL)isDeviceCapableOfFaceTime;
-(int)userInterfaceScreenType;
-(BOOL)dialVoicemail;
-(BOOL)dialPhoneNumber:(id)number;
-(BOOL)dialPhoneNumber:(id)number dialAssist:(BOOL)assist;
-(BOOL)dialPhoneNumber:(id)number forUID:(int)uid dialAssist:(BOOL)assist;
-(BOOL)dialPhoneNumber:(id)number forUID:(int)uid dialAssist:(BOOL)assist wasAlreadyAssisted:(BOOL)assisted;
-(BOOL)dialPhoneNumber:(id)number forUID:(int)uid service:(int)service dialAssist:(BOOL)assist wasAlreadyAssisted:(BOOL)assisted;
-(BOOL)shouldAttemptPhoneCallForService:(int)service;
-(void)_performDialOfNumber:(id)number withCall:(id)call;
-(void)handleResumeEvent:(GSEventRef)event;
-(void)handleSuspendEvent:(GSEventRef)event;
-(BOOL)handleEvent:(GSEventRef)event withNewEvent:(id)newEvent;
-(BOOL)shouldHangUpOnLock;
-(void)applicationOpenURL:(id)url;
-(BOOL)openURL:(id)url;
-(void)setIgnoresInteractionEvents:(BOOL)events;
-(BOOL)runTest:(id)test options:(id)options;
-(void)startSwitchTest;
-(void)startScrollTest;
-(void)_scroll;
-(void)_revertAddressBook;
-(void)_releaseAddressBook;
-(void*)existingAddressBook;
-(void*)addressBook;
-(BOOL)authorizedToUseAddressBook;
-(void)accessibilityReduceMotionChangedNotification:(id)notification;
-(void)_displayedCallsChanged:(id)changed;
-(void)_faceTimeDismissed:(id)dismissed;
-(void)didReceiveMemoryWarning;
-(id)currentViewController;
-(void)_logSwitch;
-(BOOL)handleDoubleHeightStatusBarTap:(int)tap;
-(int)statusBar:(id)bar styleForRequestedStyle:(int)requestedStyle overrides:(int)overrides;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)showAirplaneView;
-(void)dismissActionSheet;
-(void)clearActionSheet;
-(void)presentActionSheet:(id)sheet fromToolBarItem:(id)toolBarItem;
-(void)presentActionSheet:(id)sheet;
-(BOOL)isDisplayingSheet;
-(void)_ftcServiceAvailabilityChanged:(id)changed;
-(void)_localeChangedNotification:(id)notification;
-(double)launchTime;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)dealloc;
-(CGRect)phoneViewTabBarContentFrame;
-(void)showInitialView;
-(void)_initializeUI;
-(void)_handleVoicemailUIStatusChangedNotification:(id)notification;
-(id)rootViewController;
-(void)_resetCurrentViewController;
-(void)applicationDidResumeForEventsOnly;
-(void)applicationWillSuspendForEventsOnly;
-(void)applicationDidResume;
-(void)applicationDidResumeFromUnderLock;
-(void)applicationDidEndResumeAnimation;
-(void)applicationResume:(GSEventRef)resume;
-(void)handleApplicationFinishedSnapshottingNotification:(id)notification;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)applicationWillEnterForeground:(id)application;
-(void)applicationDidEnterBackground:(id)application;
-(void)prepareForDefaultImageSnapshotForScreen:(id)screen;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(BOOL)shouldSnapshot;
-(void)applicationDidFinishLaunching:(id)application;
-(void)emergencyCallBackModeChangedNotification:(id)notification;
-(void)_callStatusChanged:(id)changed;
-(id)localizedCarrierName;
-(BOOL)inAirplaneMode;
-(id)ttyTitle;
-(BOOL)promptForTTY;
-(BOOL)toggleMute;
-(BOOL)setMuted:(BOOL)muted;
-(BOOL)isMuted;
-(CTServerConnectionRef)_serverConnection;
-(void)setShouldSuspendAfterLastCall:(BOOL)suspendAfterLastCall;
-(BOOL)shouldSuspendAfterLastCall;
-(BOOL)callInterruptedAnApplication;
-(void)promptUpgradeCurrentPhoneCallToFaceTimeIfNecessary;
-(BOOL)inCall;
-(void)updatePushReliabilityStatus;
-(void)displayedCallRemoved:(id)removed;
-(BOOL)isAboutToIssueDisconnectOfLastCall;
-(void)requestSuspendAfterLastCall;
-(void)requestSuspendWithTransparencyAfterLastCall;
-(void)_forceWindowFront;
-(BOOL)initiateFaceTimeCallForPerson:(void*)person property:(int)property identifier:(int)identifier fanOut:(BOOL)anOut;
-(BOOL)initiateFaceTimeAudioForPerson:(void*)person property:(int)property identifier:(int)identifier fanOut:(BOOL)anOut;
-(BOOL)initiateFaceTimeForPerson:(void*)person property:(int)property identifier:(int)identifier audioOnly:(BOOL)only fanOut:(BOOL)anOut;
-(BOOL)shouldSuspendAfterVC;
-(BOOL)activeFaceTimeCallExists;
-(BOOL)faceTimeInvitationExists;
-(BOOL)inFaceTime;
@end
