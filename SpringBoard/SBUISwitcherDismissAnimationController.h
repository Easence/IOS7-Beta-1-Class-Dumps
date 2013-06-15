/* SBUISwitcherDismissAnimationController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIMainScreenAnimationController.h"

@class SBAppSliderController, SBAppSwitcherPageView, UIView;

__attribute__((visibility("hidden")))
@interface SBUISwitcherDismissAnimationController : SBUIMainScreenAnimationController {
	SBAppSliderController* _sliderController;
	UIView* _appContextHostView;
	SBAppSwitcherPageView* _animatingPageView;
	BOOL _finishedSwitcherAnimation;
	BOOL _finishedCrossfadingToHostView;
}
-(void)_reportAnimationFinishedIfNecessary;
-(void)_noteCrossfadeDidFinish;
-(void)_noteSwitcherAnimationFinished;
-(void)_crossfadeApp;
-(void)_applicationDependencyStateChanged;
-(id)_animationProgressDependency;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)dealloc;
-(id)initWithActivatingApp:(id)activatingApp deactivatingApp:(id)app;
@end
