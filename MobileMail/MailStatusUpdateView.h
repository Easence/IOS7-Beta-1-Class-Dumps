/* MailStatusUpdateView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "MailStatusLabelView.h"

@class NSTimer, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface MailStatusUpdateView : MailStatusLabelView {
	NSTimer* _updateTimer;
	NSDateFormatter* _timeFormatter;
	NSDateFormatter* _weekdayFormatter;
	NSDateFormatter* _dateFormatter;
}
-(id)_statusUpdateFormatUpdatedOnDateWithDate:(id)date;
-(id)_statusUpdateFormatUpdatedDayWithDate:(id)date;
-(id)_statusUpdateFormatUpdatedAtTimeWithDate:(id)date;
-(id)_statusUpdateFormatUpdatedMinutesAgoWithCalendar:(id)calendar date:(id)date now:(id)now;
-(void)update;
-(void)_updateTimerFired:(id)fired;
-(void)_setUpdateTimerFireDate:(id)date;
-(void)_significantTimeChange:(id)change;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
