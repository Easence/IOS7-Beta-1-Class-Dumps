/* SBLockScreenSlideUpController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class _UIDynamicValueAnimation, SBLockScreenView, SBLockScreenBounceAnimator, UIView;

__attribute__((visibility("hidden")))
@interface SBLockScreenSlideUpController : XXUnknownSuperclass {
	BOOL _isInScreenOffMode;
	UIView* _slidingStatusBarView;
	SBLockScreenView* _lockScreenView;
	SBLockScreenBounceAnimator* _bounceAnimator;
	_UIDynamicValueAnimation* _dynamicAnimation;
}
+(id)lockScreenViewFakeStatusBar;
-(id)_newDynamicAnimationForGestureSucceeded:(BOOL)gestureSucceeded targetValue:(double)value withInitialVelocity:(double)initialVelocity;
-(id)_newBounceAnimatorWithGrabberView:(id)grabberView;
-(void)abortDynamicAnimationForScreenOff;
-(void)setInScreenOffMode:(BOOL)screenOffMode;
-(void)hideSlidingStatusBar;
-(void)finalizeGesture;
-(void)cleanupFromGesture;
-(void)prepareForSlideUpAnimation;
-(void)translateSlidingViewByY:(float)y;
-(void)gestureDidEnd:(BOOL)gesture;
-(void)gestureWillEndWithVelocity:(float)gesture;
-(void)setGrabberOnLockScreen:(id)screen;
-(id)grabberView;
-(void)dealloc;
-(void)setLockScreenView:(id)view;
-(id)lockScreenView;
@end
