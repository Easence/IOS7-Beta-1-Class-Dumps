/* MainChromeModeController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MapsChromeModeController.h"


@protocol MainChromeModeController <MapsChromeModeController>
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)resignCurrentModeAnimated:(BOOL)animated toMode:(id)mode;
-(void)becomeCurrentModeWithViews:(id)views animated:(BOOL)animated state:(id)state fromMode:(id)mode;
@end
