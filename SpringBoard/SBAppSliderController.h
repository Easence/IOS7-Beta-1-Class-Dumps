/* SBAppSliderController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBAppSliderIconControllerDelegate.h"
#import "SBAppSliderScrollingViewDelegate.h"
#import "_UISettingsKeyObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, SBAppSwitcherServices, SBAppSliderIconController, SBAppSliderSettings, UIView, NSMutableDictionary, SBAppSliderScrollingViewController, NSArray, NSCache, NSMutableSet, NSString, NSMutableArray;
@protocol SBAppSliderControllerDelegate;

__attribute__((visibility("hidden")))
@interface SBAppSliderController : XXUnknownSuperclass <SBAppSliderIconControllerDelegate, SBAppSliderScrollingViewDelegate, _UISettingsKeyObserver> {
	id<SBAppSliderControllerDelegate> _delegate;
	NSMutableArray* _appList;
	SBAppSwitcherServices* _switcherServices;
	NSMutableDictionary* _switcherServiceViewControllerMap;
	unsigned _appListAccessCount;
	SBAppSliderScrollingViewController* _pageController;
	SBAppSliderIconController* _iconController;
	UIView* _containerView;
	UIView* _contentView;
	UIView* _pageView;
	UIView* _iconView;
	NSMutableSet* _hostedApplications;
	NSCache* _appImageCache;
	NSMutableDictionary* _appImages;
	unsigned _startAnchorIndex;
	int _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	BOOL _deferredWorkComplete;
	unsigned _startingIndex;
	NSString* _startingBundleIdentifier;
	NSDictionary* _startingViews;
	int _enterSide;
	SBAppSliderSettings* _settings;
	CGAffineTransform _wallpaperTransform;
}
@property(retain, nonatomic) NSDictionary* startingViews;
@property(readonly, assign, nonatomic) NSArray* applicationList;
@property(assign, nonatomic) CGAffineTransform wallpaperTransform;
@property(copy, nonatomic) NSString* startingBundleIdentifier;
@property(assign, nonatomic) id<SBAppSliderControllerDelegate> delegate;
-(id)pageController;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)sliderScrollerDidEndScrolling:(id)sliderScroller;
-(BOOL)sliderScroller:(id)scroller itemWantsToBeKeptInViewHierarchy:(unsigned)viewHierarchy;
-(void)sliderScroller:(id)scroller itemWantsToBeRemoved:(unsigned)beRemoved;
-(BOOL)sliderScroller:(id)scroller isIndexRemovable:(unsigned)removable;
-(void)sliderScrollerBeganPanning:(id)panning;
-(void)sliderScroller:(id)scroller itemTapped:(unsigned)tapped;
-(void)sliderScroller:(id)scroller contentOffsetChanged:(float)changed;
-(float)sliderScrollerDistanceBetweenItemCenters:(id)centers forOrientation:(int)orientation;
-(CGSize)sliderScrollerItemSize:(id)size forOrientation:(int)orientation;
-(id)sliderScroller:(id)scroller viewForIndex:(unsigned)index;
-(unsigned)sliderScrollerItemCount:(id)count;
-(void)sliderIconScrollerBeganPanning:(id)panning;
-(void)sliderIconScrollerDidEndScrolling:(id)sliderIconScroller;
-(unsigned)sliderIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(void)sliderIconScroller:(id)scroller activate:(id)activate;
-(void)sliderIconScroller:(id)scroller contentOffsetChanged:(float)changed;
-(void)_handleDeferredWork;
-(void)_handleDeferredWorkCore;
-(BOOL)_isScrolling;
-(id)_animationSettingsForIconAlphaTransition;
-(id)_transitionAnimationFactory;
-(int)_windowInterfaceOrientation;
-(void)_appStateChanged:(id)changed;
-(void)_disableContextHostingForApp:(id)app;
-(void)_quitAppAtIndex:(unsigned)index;
-(void)_endAppListAccess;
-(id)_beginAppListAccess;
-(void)_noteLockScreenCameraDidShow;
-(id)_iconListForAppList:(id)appList;
-(void)_setInteractionEnabled:(BOOL)enabled;
-(id)_generateCellViewForIndex:(unsigned)index;
-(id)_generateImageViewForApp:(id)app;
-(id)_generateViewForService:(id)service;
-(void)_switcherServiceRemoved:(id)removed;
-(void)_snapshotSavedToDisk:(id)disk;
-(void)_updatePageViewScale:(float)scale;
-(void)_updatePageViewScale:(float)scale xTranslation:(float)translation;
-(void)_updateForAnimationFrame:(float)animationFrame withAnchor:(unsigned)anchor;
-(float)_frameScaleValueForAnimation;
-(float)_scaleForFullscreenPageViewInOrientation:(int)orientation;
-(void)_reverseAppList;
-(BOOL)_inMode:(int)mode;
-(float)_sliderThumbnailVerticalPositionOffset;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)_getRotationContentSettings:(XXStruct_3uUjXA*)settings;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(id)pageForBundleIdentifier:(id)bundleIdentifier;
-(BOOL)allowShowHide;
-(void)forceDismiss;
-(void)_preheatImagesForApps:(id)apps;
-(void)preheatImagesForApps;
-(void)animateDismissalToBundleIdentifier:(id)bundleIdentifier withCompletion:(id)completion;
-(void)switcherWasDismissed:(BOOL)dismissed;
-(void)switcherWillBeDismissed:(BOOL)switcher;
-(void)switcherWasPresented:(BOOL)presented;
-(void)_layoutInOrientation:(int)orientation;
-(void)animatePresentationFromBundleIdentifier:(id)bundleIdentifier withViews:(id)views fromSide:(int)side withCompletion:(id)completion;
-(void)_layout;
-(CGRect)_nominalPageViewFrame;
-(void)loadView;
-(void)dealloc;
-(id)init;
@end
