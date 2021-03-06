/* MainChromeViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ChromeViewController.h"
#import "UINavigationControllerDelegate.h"
#import "Maps-Structs.h"
#import "MainChromeViews.h"
#import "AudioSettingsViewControllerDelegate.h"
#import "AdvisorySheetViewDelegate.h"

@class NSError, MKWorldView, NSHashTable, UIView, MainChromeViewItem, FloatingControlsView, EasyCallbackAlertView, FloatingControl, AdvisorySheet, AudioSettingsViewController, UIToolbar, UINavigationController, SearchPinsManager, BlurView, MapsChromeCommonControls;
@protocol MapsChromeTopBarContent;

__attribute__((visibility("hidden")))
@interface MainChromeViewController : ChromeViewController <UINavigationControllerDelegate, AdvisorySheetViewDelegate, MainChromeViews, AudioSettingsViewControllerDelegate> {
	id<MapsChromeTopBarContent> _topBarContent;
	CGRect _statusBarFrame;
	BOOL _statusBarHidden;
	BOOL _topBarHidden;
	BOOL _controlBarHidden;
	BOOL _appearing;
	BOOL _rotating;
	BOOL _advisoryVisible;
	BOOL _displayed;
	BOOL _showingSettingsTopBarStyle;
	unsigned _viewCallbacksSuppressionCount;
	BOOL _hasCalledViewAppearMethods;
	id _lastUpdateTopBarContentCompletionBlock;
	AdvisorySheet* _advisorySheet;
	BOOL _animatingPresentAdvisory;
	BOOL _animatingDismissAdvisory;
	BOOL _hasDoneInitalLayoutForControlBar;
	MapsChromeCommonControls* _commonControls;
	SearchPinsManager* _searchPinsManager;
	BlurView* _topBlurView;
	EasyCallbackAlertView* _locationServicesAlertView;
	FloatingControl* _audioControl;
	AudioSettingsViewController* _audioSettingsViewController;
	UINavigationController* _audioSettingsNavController;
	int _viewMode;
	BOOL _isObservingNonselectingTaps;
	BOOL _hasScheduledTapToHideToggle;
	BOOL _shouldSuppressTapToHideToggle;
	NSHashTable* _interruptions;
	FloatingControlsView* _controlBar;
	UIToolbar* _topBar;
	id _didFinishAnimatingSettingsView;
	UIView* _worldViewReplacement;
	UIView* _customTopBarView;
	NSError* _displayedLocationError;
}
@property(readonly, assign, nonatomic) UIView* containingView;
@property(readonly, assign, nonatomic) MKWorldView* worldView;
@property(readonly, assign, nonatomic) MainChromeViewItem* topItem;
@property(retain, nonatomic) NSError* displayedLocationError;
@property(copy, nonatomic) id lastUpdateTopBarContentCompletionBlock;
@property(retain, nonatomic, setter=_setCustomTopBarView:) UIView* _customTopBarView;
@property(retain, nonatomic) UIView* worldViewReplacement;
@property(retain, nonatomic) FloatingControlsView* controlBar;
@property(copy, nonatomic) id didFinishAnimatingSettingsView;
@property(assign, nonatomic, getter=isSuppressed) BOOL suppressed;
@property(retain, nonatomic) UIToolbar* topBar;
@property(readonly, assign) MapsChromeCommonControls* commonControls;
@property(readonly, assign, nonatomic) BOOL topBarHidden;
@property(readonly, assign, nonatomic) BOOL statusBarHidden;
@property(readonly, assign, nonatomic) UINavigationController* phoneNavigationController;
@property(retain, nonatomic) id<MapsChromeTopBarContent> topBarContent;
@property(readonly, assign, nonatomic, getter=isShowingLocationServicesAlert) BOOL showingLocationServicesAlert;
+(int)_blurViewStyleForBarBackdropKind:(int)barBackdropKind;
+(Class)chromeViewItemClass;
-(void)_toggleBarsForTapToHide;
-(void)ignoreCurrentTapForTapToHide;
-(void)_scheduleToggleBarsForTapToHide;
-(void)_updateTapToHideIfNeeded;
-(void)setTapToHideEnabled:(BOOL)hideEnabled forMode:(id)mode;
-(BOOL)isCurrentMode:(id)mode;
-(void)pushMode:(id)mode animated:(BOOL)animated;
-(CGSize)attributionAnchorOffset;
-(void)currentModeWillChangeByMovingToItem:(id)currentMode fromItem:(id)item animated:(BOOL)animated;
-(void)currentModeDidChangeByMovingToItem:(id)currentMode fromItem:(id)item animated:(BOOL)animated;
-(void)addReplacementViewToViewHierarchy:(id)viewHierarchy;
-(void)audioSettingsViewControllerPickedNewRoute:(id)route isBluetooth:(BOOL)bluetooth;
-(void)audioSettingsViewController:(id)controller hasRoutesToPick:(BOOL)pick;
-(void)_updateAudioRoutingButtonVisability;
-(id)_audioControl;
-(void)_handleTapOnAudioControl:(id)control;
-(void)_setAudioSettingsViewControllerBluetoothEnabled:(BOOL)enabled;
-(void)_dismissAudioSettings:(id)settings;
-(id)_audioSettingsNavController;
-(id)_audioSettingsViewController;
-(void)worldViewDidStopUserInteraction:(id)worldView;
-(void)worldViewDidStartUserInteraction:(id)worldView;
-(void)advisorySheetButtonWasTapped:(id)tapped;
-(void)dismissAdvisorySheetWithIdentifier:(id)identifier animated:(BOOL)animated;
-(void)_presentAdvisorySheetAnimated:(BOOL)animated;
-(void)presentAdvisorySheetAnimated:(BOOL)animated identifier:(id)identifier title:(id)title subtitle:(id)subtitle buttonTitle:(id)title5 delegate:(id)delegate;
-(CGRect)_advisorySheetFrameForPresentation;
-(id)_advisorySheet;
-(id)presentNavSafetyAlertForInterruption:(int)interruption withCompletion:(id)completion;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)topBarSizeDidChange:(CGSize)topBarSize;
-(void)topBarSizeWillChange:(CGSize)topBarSize;
-(void)layoutForUnobscuredBoundsChange;
-(CGRect)unobscuredBoundsInContainingViewWithOptions:(int)options;
-(UIEdgeInsets)mapInsetsIncludingBarsWithNonopaqueParts:(BOOL)nonopaqueParts;
-(void)_setBlockingInteractionsForPageCurl:(BOOL)pageCurl;
-(void)setTopBarMiniAltHeight:(float)height forMode:(id)mode;
-(void)hideTopBarShadow:(BOOL)shadow forMode:(id)mode;
-(void)setBlurColor:(id)color forMode:(id)mode;
-(void)setExtendedBlurFrame:(CGRect)frame forMode:(id)mode;
-(void)setBackdropKind:(int)kind forMode:(id)mode;
-(void)moveToMapDisplayStyle:(int)mapDisplayStyle forChangeToLightLevel:(int)lightLevel animation:(id)animation duration:(double)duration timingFunctionName:(id)name;
-(id)topContainer;
-(void)_locationManagerApprovalDidChange:(id)_locationManagerApproval;
-(void)showLocationServicesAlertWithError:(id)error;
-(id)presentInterruptionOfKind:(int)kind userInfo:(id)info completionHandler:(id)handler;
-(void)unquiesceWorldView;
-(void)quiesceWorldView;
-(id)rotatingHeaderView;
-(void)updateTopBarContentAnimated:(BOOL)animated;
-(void)setTopBarContent:(id)content animated:(BOOL)animated;
-(void)willDismissSettings;
-(void)willPresentSettings;
-(void)_endInterruption:(id)interruption;
-(id)presentViewController:(id)controller willInvokeViewAppearanceCallbacks:(BOOL)callbacks animated:(BOOL)animated completion:(id)completion;
-(void)presentViewController:(id)controller animated:(BOOL)animated completion:(id)completion;
-(void)_updateBlurView;
-(void)setViewMode:(int)mode;
-(int)_currentTopBarBackdropStyle;
-(void)_userDefaultsDidChange;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)_updateAdvisorySheetLayout;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)_setStatusBarHidden:(BOOL)hidden topBarHidden:(BOOL)hidden2 controlBarHidden:(BOOL)hidden3 animated:(BOOL)animated;
-(void)setStatusBarHidden:(BOOL)hidden topBarHidden:(BOOL)hidden2 animated:(BOOL)animated;
-(void)_layoutControlBar;
-(void)_layoutTopBar;
-(id)_topBarIfAvailable;
-(CGRect)_topBarFrame;
-(void)insertSubviewBelowTopBar:(id)bar;
-(void)_layoutWorldView;
-(void)_animateBarsToCurrentStateWithDuration:(double)duration;
-(CGRect)_topBlurViewFrame;
-(void)viewDidLayoutSubviews;
-(void)loadView;
-(float)_statusBarMaxY;
-(void)_willChangeStatusBarFrame:(id)frame;
-(void)dealloc;
-(id)initChromeAndContainer:(id*)container;
@end
