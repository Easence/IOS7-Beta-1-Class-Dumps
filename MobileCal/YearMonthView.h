/* YearMonthView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIFont, EKCalendarDate, NSCalendar;

__attribute__((visibility("hidden")))
@interface YearMonthView : XXUnknownSuperclass {
	EKCalendarDate* _endCalendarDate;
	NSString* _monthString;
	int _firstDayIndex;
	int _daysInWeek;
	int _todayIndex;
	NSCalendar* _calendar;
	EKCalendarDate* _calendarDate;
}
@property(readonly, assign, nonatomic) float ySpacing;
@property(readonly, assign, nonatomic) float xSpacing;
@property(readonly, assign, nonatomic) float daysYAdjustTop;
@property(readonly, assign, nonatomic) float daysXAdjustLeft;
@property(readonly, assign, nonatomic) float circleSizeForDoubleDigit;
@property(readonly, assign, nonatomic) float circleSize;
@property(readonly, assign, nonatomic) float todayTextSize;
@property(readonly, assign, nonatomic) float dayTextSize;
@property(readonly, assign, nonatomic) float todayNumberKerning;
@property(readonly, assign, nonatomic) UIFont* todayNumberFont;
@property(readonly, assign, nonatomic) UIFont* dayNumberFont;
@property(readonly, assign, nonatomic) float headerFontKerning;
@property(readonly, assign, nonatomic) UIFont* headerFont;
@property(readonly, assign, nonatomic) float yInset;
@property(readonly, assign, nonatomic) float xInset;
@property(retain, nonatomic) EKCalendarDate* calendarDate;
+(id)_todayTextColor;
+(id)_defaultTextColor;
+(id)_monthNameFormatter;
-(void).cxx_destruct;
-(id)_cachedImageForMonthName:(id)monthName;
-(id)_cachedImageForDayNumber:(id)dayNumber size:(CGSize)size;
-(void)_updateToday;
-(void)_reloadCachedValues;
-(void)_significantTimeChanged:(id)changed;
-(CGRect)frameForTodayHighlight;
-(void)pulseTodayCircle;
-(void)_getTodayNumberTextFrame:(CGRect*)frame circleFrame:(CGRect*)frame2;
-(CGPoint)headerOrigin;
-(CGRect)frameForGridOfDays;
-(BOOL)containsCalendarDate:(id)date;
-(void)drawRect:(CGRect)rect;
-(id)description;
-(void)dealloc;
-(id)initWithCalendarDate:(id)calendarDate calendar:(id)calendar;
@end
