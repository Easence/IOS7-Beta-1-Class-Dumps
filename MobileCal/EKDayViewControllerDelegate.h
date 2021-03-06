/* EKDayViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol EKDayViewControllerDelegate <NSObject>
-(void)dayViewController:(id)controller didChangeDisplayDate:(id)date;
-(void)dayViewController:(id)controller didSelectEvent:(id)event;
@optional
-(void)dayViewController:(id)controller didStartDeceleratingTargettingDate:(id)date;
-(void)dayViewControllerDidEndScrolling:(id)dayViewController;
-(void)dayViewController:(id)controller didScrollToDate:(id)date normalizedOffset:(float)offset;
-(void)dayViewControllerDidBeginScrolling:(id)dayViewController;
-(void)dayViewController:(id)controller handleGestureCommittingOccurrence:(id)occurrence;
-(BOOL)delegateWantsToHandleDayViewController:(id)handleDayViewController gestureCommittingOccurrence:(id)occurrence;
-(void)dayViewControllerDidReloadData:(id)dayViewController;
-(void)dayViewControllerDidTapEmptySpace:(id)dayViewController;
-(BOOL)dayViewControllerShouldAllowLongPress:(id)dayViewController;
-(void)dayViewController:(id)controller awaitsDeletingOccurrence:(id)occurrence;
-(void)dayViewController:(id)controller awaitsRefreshingOccurrence:(id)occurrence;
-(void)dayViewController:(id)controller beginEditingOccurrence:(id)occurrence;
-(id)dayViewController:(id)controller createEventAtDate:(id)date allDay:(BOOL)day;
@end
