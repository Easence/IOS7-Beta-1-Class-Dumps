/* UINavigationBarDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIBarPositioningDelegate.h"


@protocol UINavigationBarDelegate <UIBarPositioningDelegate>
@optional
-(void)navigationBar:(id)bar didPopItem:(id)item;
-(BOOL)navigationBar:(id)bar shouldPopItem:(id)item;
-(void)navigationBar:(id)bar didPushItem:(id)item;
-(BOOL)navigationBar:(id)bar shouldPushItem:(id)item;
@end
