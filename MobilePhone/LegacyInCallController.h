/* LegacyInCallController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "PhoneBaseViewController.h"
#import "TPDialerKeypadDelegate.h"
#import "CommunicationDisplayViewController.h"

@class UINavigationBar, LegacyInCallLCDView, TUCall, PhoneTabBarController, UIView, LegacySixSquareView, UITableView, AddressBookController, TPLegacyBottomSingleButtonBar, NSTimer, TPLegacyBottomDoubleButtonBar, TPLegacyBottomBar, TPLegacyPhonePad, TPLegacyAudioDeviceView, AudioDeviceController, NSArray, LegacyPhoneDesktopView, UIAlertView, UIImage, LegacyInCallLCDField;

__attribute__((visibility("hidden")))
@interface LegacyInCallController : CommunicationDisplayViewController <UITableViewDelegate, UITableViewDataSource, PhoneBaseViewController, TPDialerKeypadDelegate> {
	UIView* _legacyInCallView;
	LegacyInCallLCDView* _lcd;
	TPLegacyBottomSingleButtonBar* _bottomBar;
	TPLegacyBottomDoubleButtonBar* _emergencyCallBottomBar;
	TPLegacyBottomDoubleButtonBar* _ttyBottomBar;
	TPLegacyBottomDoubleButtonBar* _doubleBottomBar;
	TPLegacyBottomBar* _defaultBottomBar;
	LegacySixSquareView* _legacySixSquare;
	TPLegacyPhonePad* _phonePad;
	UINavigationBar* _navBar;
	UIView* _centerView;
	UIView* _conferenceView;
	UITableView* _conferenceTable;
	LegacyInCallLCDField* _field;
	NSTimer* _emergencyCallCycleTimer;
	int _emergencyCallCycleIndex;
	NSArray* _emergencyCallStrings;
	TPLegacyBottomBar* _fakeBottomBar;
	TPLegacyAudioDeviceView* _routeList;
	NSTimer* _autodismissRouteListTimer;
	AudioDeviceController* _deviceController;
	SEL _passcodeUnlockAction;
	BOOL _sheetVisible;
	AddressBookController* _standaloneContactsViewController;
	PhoneTabBarController* _addCallViewController;
	unsigned _dtmfPlaying : 1;
	TUCall* _calls[2];
	NSTimer* _durationTimer;
	NSArray* _displayedConferenceMembers;
	int _lastConferenceParticipantCount;
	UIAlertView* _enableFaceTimeAlertView;
	unsigned _pendingDisconnect : 2;
	unsigned _currentCallCount : 2;
	unsigned _currentCall : 2;
	unsigned _currentCallProvisional : 1;
	unsigned _conference : 2;
	unsigned _suspended : 1;
	unsigned _tonePlayed : 1;
	unsigned _disconnecting : 1;
	unsigned _disconnectingConference : 1;
	unsigned _disconnectingAnimationStarted : 1;
	unsigned _timerDisabled : 1;
	unsigned _animatingConferenceCell : 1;
	unsigned _nextUpdateIsReset : 1;
	unsigned _checkKeypadOnNextUpdate : 1;
	unsigned _isMergingCalls : 1;
	unsigned _routesEnabled : 1;
	unsigned _suspendingUnderLock : 1;
	unsigned _returnToLastViewAfterLock : 1;
	unsigned _blinkCount : 3;
	unsigned _handlingPhoneCallDuringFaceTime : 1;
	unsigned _handlingFallbackToLegacyInCallFromFaceTime : 1;
	unsigned _preToneMuteState : 2;
	unsigned _resettingEmergencyCallFromIdle : 1;
	unsigned _routeListReloadPending : 1;
	unsigned _lockedDirty : 1;
	unsigned _animatingInEmergencyCallUI : 1;
	BOOL _shouldAddSpaceBeforeNextCharacterDialed;
	BOOL _longPressMuteWasTriggered;
	BOOL _inEmergencyCallbackState;
	BOOL _handlingCallModelChange;
	BOOL _isAnimatingSendDigitsUI;
	BOOL _suppressSendDigitsAnimations;
	TPLegacyBottomDoubleButtonBar* _sendDigitsBar;
	TPLegacyBottomSingleButtonBar* _preSendDigitsBar;
	BOOL _desktopViewVisible;
	BOOL _animatingDesktopView;
	BOOL _desktopImageQueued;
	BOOL _handlingVoiceControlURL;
	LegacyPhoneDesktopView* _desktopView;
	UIImage* _queuedDesktopImage;
	BOOL _registeredForNotifications;
	BOOL _handlingEmergencyCall;
}
@property(readonly, assign, nonatomic, getter=isHandlingEmergencyCall) BOOL handlingEmergencyCall;
@property(readonly, assign, nonatomic) UIImage* queuedDesktopImage;
@property(readonly, assign, nonatomic) LegacyPhoneDesktopView* desktopView;
@property(readonly, assign, nonatomic, getter=isHandlingVoiceControlURL) BOOL handlingVoiceControlURL;
@property(readonly, assign, nonatomic, getter=isDesktopImageQueued) BOOL desktopImageQueued;
@property(readonly, assign, nonatomic, getter=isAnimatingDesktopView) BOOL animatingDesktopView;
@property(readonly, assign, nonatomic, getter=isDesktopViewVisible) BOOL desktopViewVisible;
@property(readonly, assign, nonatomic, getter=isSheetVisible) BOOL sheetVisible;
@property(readonly, assign, nonatomic) PhoneTabBarController* addCallViewController;
@property(readonly, assign, nonatomic) AddressBookController* standaloneContactsViewController;
+(id)voiceControlBackgroundImage;
+(BOOL)_resumeToKeypadCallMatchesCall:(id)keypadCallMatchesCall;
+(id)defaultPNGName;
+(int)viewType;
+(int)statusBarStyle;
+(void)_callStateChangedWhileSuspended:(id)suspended;
+(void)initialize;
-(void)showDesktopViewAnimated:(BOOL)animated;
-(void)hideDesktopViewAnimated:(BOOL)animated;
-(void)updateDesktopImageForCall:(id)call;
-(void)phoneCallIdentityChanged:(id)changed;
-(void)tearDownDesktopView;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(void)dismissViewControllerWithTransition:(int)transition completion:(id)completion;
-(void)presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)showContactsSheet:(BOOL)sheet;
-(void)showAddCallSheet:(BOOL)sheet;
-(void)endEmergencyCallbackMode;
-(void)handleEmergencyCallbackModeStatusNotification;
-(void)handleEmergencyCallbackMode;
-(void)_transitionFromLegacyInCallToEmergencyCallViewWithAnimate:(BOOL)animate didEndSelector:(SEL)selector;
-(void)_callManagemementStateChanged;
-(BOOL)shouldShowAmbiguousCallList;
-(double)_alternatingDurationForCall:(id)call;
-(id)_alternateLabelForCall:(id)call;
-(void)_setDefaultBottomBarButtonAlpha:(float)alpha;
-(void)_restoreAnimatingButtonsFromView:(id)view;
-(id)_newEndCallButtonWithTitle:(id)title small:(BOOL)small allowPressAndHold:(BOOL)hold;
-(void)_setSpeakerButtonSelected:(BOOL)selected;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)LegacyInCallLCDViewPopTextCompleted:(id)callLCDViewPopTextCompleted;
-(void)animateCallMerge;
-(BOOL)isCallWaitingViewVisible;
-(void)_finishedCallWaitingFlip;
-(void)animateResumeFromCallWaitingAlertUnderLock;
-(void)cancelCallWaitingAlert;
-(void)animateOutOfCallWaitingAlert;
-(BOOL)animateToCallWaitingAlertForCall:(id)call name:(id)name label:(id)label uid:(int)uid;
-(void)reallyFlipToCallWaiting:(BOOL)callWaiting fromTTY:(BOOL)tty withName:(id)name label:(id)label uid:(int)uid phoneCall:(id)call;
-(void)flipToCallWaiting:(BOOL)callWaiting fromTTY:(BOOL)tty withName:(id)name label:(id)label uid:(int)uid phoneCall:(id)call;
-(void)_setupNewAnimatingLCD:(id*)lcd oldLCD:(id*)lcd2;
-(void)handleURL:(id)url;
-(void)prepareToHandleURL:(id)handleURL;
-(BOOL)_auxiliaryAudioRoutesAvailable;
-(BOOL)defaultBottomBarHasTwoButtons;
-(id)_getEndCallButton:(id)button;
-(void)_setResumeToKeypad:(BOOL)keypad;
-(void)_reset;
-(void)_resetCallStateNotification:(id)notification;
-(void)setDisplayedCalls:(id)calls;
-(void)_setCallCount:(int)count;
-(void)updateHoldButtonTitleAndImage;
-(void)_setCallIndex:(unsigned)index toCall:(id)call;
-(void)didFinishAnimatingUnderLockSuspension;
-(BOOL)_lockCompleteState;
-(void)_lockCompletedWhileOnCall;
-(void)_lockCompleted;
-(void)animateResumeFromUnderLock:(BOOL)underLock;
-(void)_animateResumeSlidingBottomBar:(id)bar direction:(int)direction;
-(void)animateUnderLockSuspension:(BOOL)suspension blinkEndCallButton:(BOOL)button afterDelay:(float)delay;
-(void)_blinkEndCallButton;
-(void)_finishedBlinking;
-(void)_transitionUnderLockSuspensionAnimated:(BOOL)animated withCompletionBlock:(id)completionBlock;
-(id)_fakeBottomLockBar;
-(id)_ensureFakeLockBar;
-(void)_setFakeBottomBar:(id)bar;
-(id)currentBottomBar;
-(CGAffineTransform)_offscreenTransformForView:(id)view withLocationType:(int)locationType;
-(BOOL)isSuspendingUnderLock;
-(BOOL)isShowingLock;
-(void)_conferenceHistoryChangedNotification:(id)notification;
-(void)_conferenceParticipantsChanged:(id)changed;
-(void)_displayedCallsChanged:(id)changed;
-(void)_handleIncomingCallNotification:(id)notification;
-(void)_handleApplicationDidEnterBackgroundNotification:(id)_handleApplication;
-(void)_callDisplayNameChangedNotification:(id)notification;
-(void)_callStatusChangedNotification:(id)notification;
-(void)_callStatusChanged:(id)changed;
-(void)_updateDuration;
-(void)_updateStatus:(unsigned)status provisionally:(BOOL)provisionally;
-(void)_setDisableTimerUpdates:(BOOL)updates;
-(void)_setConferenceCall:(unsigned)call;
-(void)_updateSingleCallerPhoto;
-(id)_updateConferenceDisplayNameCache;
-(void)_setCurrentCall:(unsigned)call;
-(void)_updateCurrentCallDisplay;
-(void)_unprovisionalize;
-(void)_updateConferenceButtonStateGivenCurrentCallState:(int)state;
-(void)_applicationDeactivated:(id)deactivated;
-(void)_applicationReactivated:(id)reactivated;
-(void)_handleEndOfLastCall;
-(void)_startEndOfLastCallAnimationRelocking;
-(void)_startEndOfLastCallAnimation;
-(void)_startEndOfLastCallAnimationWithRelock:(BOOL)relock;
-(void)_transitionFromPhoneCallDuringFaceTimeToLegacyInCallUIAnimated:(BOOL)callUIAnimated;
-(void)_transitionFromFaceTimeToLegacyInCallUIDowngradeAnimated:(BOOL)callUIDowngradeAnimated;
-(void)_setupPhoneCallDuringFaceTimeUI;
-(void)_setupFallbackToLegacyInCallFromFaceTimeUI;
-(void)startEndOfLastCallTransitionAnimated:(BOOL)lastCallTransitionAnimated fadeCompletedBlock:(id)block;
-(void)startOutgoingCallTransitionAnimated:(BOOL)animated;
-(void)transitionInFromViewType:(int)viewType animated:(BOOL)animated completionBlock:(id)block;
-(void)prepareForTransitionInFromViewType:(int)viewType animated:(BOOL)animated;
-(void)_cancelEndAllCalls:(id)calls;
-(void)_endCallLongPress:(id)press;
-(void)_endCallExited:(id)exited;
-(void)_endCallDown:(id)down;
-(void)_endCallClicked:(id)clicked;
-(void)_performDisconnectOfCurrentCall;
-(void)_updatePendingDisconnectState;
-(void)_setEndCallButtonDimmed:(BOOL)dimmed;
-(void)legacySixSquareButtonHeldDownShort:(int)aShort;
-(void)legacySixSquareButtonHeldDown:(int)down;
-(void)_setSpeakerPositionAsRoute:(BOOL)route;
-(void)legacySixSquareButtonClicked:(int)clicked;
-(void)_showAddCall;
-(void)showContacts:(BOOL)contacts;
-(void)_showPasscodeKeypadForOperation:(SEL)operation;
-(void)LegacyInCallLCDViewConferenceButtonClicked:(id)callLCDViewConferenceButtonClicked;
-(void)LegacyInCallLCDViewCompletedAnimation:(id)callLCDViewCompletedAnimation;
-(void)LegacyInCallLCDView:(id)callLCDView positionTapped:(int)tapped;
-(void)_keypadFieldFadedOut;
-(void)LegacyInCallLCDFieldSendButtonClicked:(id)callLCDFieldSendButtonClicked;
-(BOOL)_sendEnteredDigitsAndForceActive:(BOOL)active;
-(void)_keypadDoubleBottomBarFadedOut;
-(void)_hideKeypadClicked:(id)clicked;
-(void)_restorePreToneMuteState;
-(void)phonePadDidEndSounds:(id)phonePad;
-(void)phonePadWillBeginSounds:(id)phonePad;
-(void)phonePad:(id)pad replaceLastDigitWithString:(id)string;
-(void)phonePad:(id)pad keyUp:(BOOL)up;
-(void)phonePad:(id)pad keyDown:(BOOL)down;
-(void)setShouldAddSpaceBeforeNextCharacterDialed;
-(void)startTimerForAddingSpaceBeforeNextCharacterDialed;
-(void)LegacyInCallLCDFieldDeleteButtonClicked:(id)callLCDFieldDeleteButtonClicked;
-(void)_cancelEmergencyCall:(id)call;
-(void)_placeEmergencyCall:(id)call;
-(void)_showEmergencyCallUI;
-(void)_showEmergencyCallUIAnimated:(BOOL)animated;
-(void)_cycleEmergencyLabel;
-(void)_scheduleEmergencyLabelTimerForInterval:(double)interval;
-(void)_stopCyclingEmergencyLabel;
-(void)_handleFailedEmergencyCall;
-(void)_clearEmergencyCallUI;
-(void)_showKeypadDoubleBottomBar;
-(void)_revealKeypadWithDuration:(float)duration label:(id)label;
-(void)_dismissButtonClicked:(id)clicked;
-(void)_setupDoubleBottomBarWithEndTitle:(id)endTitle dismissTitle:(id)title;
-(void)_toggleHold;
-(void)_updateUIForHoldStatusChange;
-(void)_updateUIForHoldStatus:(BOOL)holdStatus;
-(BOOL)_isMuteButtonDoublingAsHold;
-(void)_muteChanged:(id)changed;
-(void)swapCalls;
-(BOOL)shouldDisableEdgeClip;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidUnload;
-(void)viewWillUnload;
-(BOOL)shouldSnapshot;
-(void)_setupLegacyInCallController;
-(void)dealloc;
-(id)init;
-(void)_resetCallState;
-(void)loadView;
-(void)prepareForSnapshot;
-(void)setLockedDirty:(BOOL)dirty;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)noteParticipantsChanged:(id)changed;
-(void)navigationBar:(id)bar buttonClicked:(int)clicked;
-(void)tableRowDeletionAnimationCompleted:(id)completed;
-(void)dismissAfterEnding;
-(void)dismissAfterPrivate;
-(void)table:(id)table privateClickedForRow:(int)row;
-(void)table:(id)table endCallClickedForRow:(int)row;
-(void)_removeCallAtIndex:(int)index;
-(void)dismissConferenceManagementView;
-(void)dismissConferenceManagementViewWithTransition:(int)transition;
-(void)displayConferenceManagementView;
-(id)audioDeviceView:(id)view deviceAtIndex:(int)index isActive:(BOOL*)active;
-(int)audioDeviceViewNumberOfDevices:(id)devices;
-(void)audioDeviceView:(id)view selectedItem:(int)item;
-(void)audioDeviceView:(id)view eventOccurred:(id)occurred;
-(BOOL)shouldDisplayMuteOption;
-(void)_reloadRouteList;
-(void)audioDeviceControllerAudioRoutesChanged:(id)changed;
-(void)setupDeviceController;
-(void)hideAudioRoutesClicked:(id)clicked;
-(void)hideAudioRoutesToKeypad;
-(void)revealAudioRoutingDeviceListWithDuration:(float)duration;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)setupAutodismissRoutingTimer;
-(void)_setupAutodismissRoutingTimer:(float)timer;
-(void)_autodismissAudioMenu:(id)menu;
-(void)resetAutodismissTimer;
-(void)faceTimeAvailabilityChanged:(id)changed;
-(BOOL)faceTimeButtonEnabled;
-(BOOL)faceTimeButtonShown;
-(void)upgradeCurrentPhoneCallToFaceTime;
-(void)unregisterToHandleFaceTimeAvailabilityChanges;
-(void)registerToHandleFaceTimeAvailabilityChanges;
-(void)updateFaceTimeButton;
-(void)_fromSendDigitsStartAnimating;
-(void)sendDigitsTapped;
-(void)_toSendDigitsStartAnimating;
-(void)_setupSendDigitsBar;
-(BOOL)needToAnimateToSendDigitsBar;
-(void)updateSendDigitsUI;
-(BOOL)readyToSend;
-(id)dialString;
-(void)stopListeningForDTMFEvents;
-(void)startListeningForDTMFEvents;
@end
