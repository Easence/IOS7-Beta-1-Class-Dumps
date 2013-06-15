/* SBLockScreenClippedSlideController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBDisableAppStatusBarAlphaChangesAssertion, UIView, SBLockScreenViewControllerBase, SBFakeStatusBarView;

__attribute__((visibility("hidden")))
@interface SBLockScreenClippedSlideController : XXUnknownSuperclass {
	SBLockScreenViewControllerBase* _lockscreenVC;
	UIView* _clippingView;
	UIView* _viewToClip;
	UIView* _statusBarContainer;
	BOOL _wantsFakeStatusBar;
	BOOL _shouldSlideLockScreenView;
	BOOL _cleanupManually;
	BOOL _needsCleanup;
	BOOL _hidesSpringBoardStatusBarInitially;
	SBFakeStatusBarView* _fakeStatusBar;
	SBDisableAppStatusBarAlphaChangesAssertion* _statusBarAssertion;
}
@property(assign, nonatomic) BOOL cleanupManually;
@property(assign, nonatomic) BOOL shouldSlideLockScreenView;
@property(assign, nonatomic) BOOL hidesSpringBoardStatusBarInitially;
@property(assign, nonatomic) BOOL wantsFakeStatusBar;
@property(retain, nonatomic) UIView* viewToClip;
-(void)_cleanup;
-(void)_setupAndAddFakeStatusBarIfNecessary;
-(void)cleanupIfNecessary;
-(void)performTransition:(int)transition duration:(double)duration delay:(double)delay completion:(id)completion;
-(void)performTransition:(int)transition withAnimator:(id)animator;
-(id)_completionForTransition:(int)transition;
-(id)_stepperForTransition:(int)transition;
-(void)dealloc;
-(id)initWithLockScreenViewController:(id)lockScreenViewController;
@end
