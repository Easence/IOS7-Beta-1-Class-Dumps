/* SBUIStarkAnimationZoomDownApp.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIStarkScreenAnimationController.h"

@class UIView, SBAlert;

__attribute__((visibility("hidden")))
@interface SBUIStarkAnimationZoomDownApp : SBUIStarkScreenAnimationController {
	SBAlert* _alertImpersonator;
	UIView* _viewToAnimate;
}
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(double)animationDelay;
-(double)animationStartTime;
-(double)animationDuration;
-(void)_prepareAnimation;
-(id)appContext;
-(BOOL)prefersLayerHostSnapshot;
-(void)dealloc;
-(id)initWithDeactivatingApp:(id)deactivatingApp withAlertImpersonator:(id)alertImpersonator starkScreenController:(id)controller;
-(id)initWithDeactivatingApp:(id)deactivatingApp starkScreenController:(id)controller;
@end
