/* PadMonthWeekView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "InfiniteScrollViewSubview.h"
#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class PadMonthWeekOccurrencesView, NSArray, NSMutableDictionary, EKCalendarDate, EKEvent, _CircleView, UILabel, UIView;
@protocol PadMonthWeekViewDataSource, PadMonthWeekViewDelegate;

__attribute__((visibility("hidden")))
@interface PadMonthWeekView : XXUnknownSuperclass <InfiniteScrollViewSubview> {
	UILabel* _monthLabel;
	UIView* _topBorderLine;
	_CircleView* _todayCircle;
	NSArray* _dayNumberLabels;
	NSMutableDictionary* _highlightedDays;
	PadMonthWeekOccurrencesView* _occurrencesView;
	BOOL _showsMonthLabel;
	BOOL _showsTopBorder;
	BOOL _isZoomedDay;
	EKCalendarDate* _startDate;
	EKCalendarDate* _endDate;
	int _dayCount;
	int _todayDay;
	id<PadMonthWeekViewDataSource> _dataSource;
	id<PadMonthWeekViewDelegate> _delegate;
	NSRange _highlightedDayRange;
}
@property(assign, nonatomic) BOOL isZoomedDay;
@property(assign, nonatomic) __weak id<PadMonthWeekViewDelegate> delegate;
@property(assign, nonatomic) __weak id<PadMonthWeekViewDataSource> dataSource;
@property(retain, nonatomic) EKEvent* selectedOccurrence;
@property(assign, nonatomic) NSRange highlightedDayRange;
@property(assign, nonatomic) BOOL showsTopBorder;
@property(assign, nonatomic) BOOL showsMonthLabel;
@property(assign, nonatomic) int todayDay;
@property(assign, nonatomic) int dayCount;
@property(copy, nonatomic) EKCalendarDate* endDate;
@property(copy, nonatomic) EKCalendarDate* startDate;
+(float)monthLabelHeight;
-(void).cxx_destruct;
-(int)dayIndexForToday;
-(id)occurrencesView;
-(CGRect)circleFrame;
-(id)weekdayLabels;
-(BOOL)containsCalendarDate:(id)date;
-(id)snapshotImageForDay:(id)day;
-(void)layoutSubviews;
-(float)topInset;
-(float)leftInset;
-(id)endCalendarDate;
-(id)calendarDate;
-(void)_viewTapped:(id)tapped;
-(void)_updateMonthLabel;
-(void)_rebuildDayNumberLabels;
-(void)setStartDate:(id)date endDate:(id)date2 dayCount:(int)count todayDay:(int)day;
-(id)newFeedbackViewForDraggingOccurrence:(id)draggingOccurrence atPoint:(CGPoint)point;
-(CGRect)frameForOccurrenceAfterLastOnDay:(id)occurrenceAfterLastOnDay;
-(CGRect)frameForOccurrence:(id)occurrence onDay:(id)day;
-(id)occurrenceAtPoint:(CGPoint)point;
-(id)dateAtPoint:(CGPoint)point;
-(id)description;
-(void)reloadData;
-(id)initWithFrame:(CGRect)frame;
@end
