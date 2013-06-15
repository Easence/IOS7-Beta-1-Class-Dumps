/* SBBulletinDateLabel.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"

@protocol SBDateLabelDelegate;

@protocol SBBulletinDateLabel <NSObject>
@property(assign, nonatomic) BOOL isTimestamp;
@property(assign, nonatomic) int labelType;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
-(void)prepareForReuse;
-(void)stopCoalescingUpdates;
-(void)startCoalescingUpdates;
-(void)setEndDate:(id)date withTimeZone:(id)timeZone;
-(void)setStartDate:(id)date withTimeZone:(id)timeZone;
@end
