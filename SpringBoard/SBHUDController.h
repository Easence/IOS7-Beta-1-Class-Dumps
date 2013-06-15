/* SBHUDController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, SBHUDView, UIWindow;

__attribute__((visibility("hidden")))
@interface SBHUDController : XXUnknownSuperclass {
	UIWindow* _hudWindow;
	UIView* _hudContentView;
	SBHUDView* _hudView;
	int _orientation;
	BOOL _hudVisibleOrFading;
}
+(id)sharedHUDController;
-(void)hideHUDView;
-(id)visibleOrFadingHUDView;
-(id)visibleHUDView;
-(void)presentHUDView:(id)view autoDismissWithDelay:(double)delay;
-(void)presentHUDView:(id)view;
-(void)_orderWindowOut:(id)anOut;
-(void)_tearDown;
-(void)_createUI;
-(void)reorientHUDIfNeeded:(BOOL)needed;
-(void)_recenterHUDView;
-(void)dealloc;
@end
