/* EKReminderViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol EKReminderViewControllerDelegate <NSObject>
-(void)reminderViewControllerSaved:(id)saved;
-(void)reminderViewControllerDeleted:(id)deleted;
-(void)reminderViewControllerCanceled:(id)canceled;
@optional
-(void)reminderViewControllerDisappeared:(id)disappeared;
-(void)reminderViewControllerAppeared:(id)appeared;
-(void)viewSizeChangedAnimated:(BOOL)animated;
-(id)viewForActionSheet;
@end
