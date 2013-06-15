/* SBBulletinTimerDateLabel.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBBulletinDateLabel.h"

@class NSTimer;
@protocol SBDateLabelDelegate;

__attribute__((visibility("hidden")))
@interface SBBulletinTimerDateLabel : XXUnknownSuperclass <SBBulletinDateLabel> {
	double _fireTime;
	NSTimer* _tickTimer;
	BOOL _allDay;
	id<SBDateLabelDelegate> _delegate;
	int _labelType;
}
@property(assign, nonatomic) BOOL isTimestamp;
@property(assign, nonatomic) int labelType;
@property(assign, nonatomic) id<SBDateLabelDelegate> delegate;
@property(assign, nonatomic, getter=isAllDay) BOOL allDay;
+(id)unitFont;
+(id)digitFont;
-(void)stopCoalescingUpdates;
-(void)startCoalescingUpdates;
-(void)prepareForReuse;
-(void)setEndDate:(id)date withTimeZone:(id)timeZone;
-(void)_tickTimerFired:(id)fired;
-(void)setStartDate:(id)date withTimeZone:(id)timeZone;
-(void)_updateText;
-(id)_formatDuration:(double)duration;
-(void)dealloc;
-(void)_invalidateTimer;
@end
