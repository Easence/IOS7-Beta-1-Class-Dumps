/* SBUIAnimationZoomDownAppToPhone.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIAnimationZoomDownApp.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBUIAnimationZoomDownAppToPhone : SBUIAnimationZoomDownApp {
	BOOL _usingSuperZoomImplementation;
	BOOL _fromPhoneAppToFaceTimeAppDuringCall;
}
-(void)_applicationDependencyStateChanged;
-(void)_cleanupAnimation;
-(void)_startAnimation;
-(void)_prepareAnimation;
-(void)animateZoomWithCompletion:(id)completion;
-(BOOL)_shouldZoomUsingSuperImplementation;
-(id)_animationProgressDependency;
-(BOOL)_animationShouldStart;
-(void)dealloc;
-(void)_cleanupPhonesContextHostView;
-(XXStruct_UhFvxB)fakeStatusBarInfoWithStartEffectivelyHidden:(BOOL)startEffectivelyHidden endStyle:(int)style endOrientation:(int)orientation;
@end
