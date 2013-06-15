/* UIPopoverControllerDelegate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "NSObject.h"


@protocol UIPopoverControllerDelegate <NSObject>
@optional
-(void)popoverController:(id)controller willRepositionPopoverToRect:(inout CGRect*)rect inView:(inout id*)view;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(BOOL)popoverControllerShouldDismissPopover:(id)popoverController;
@end