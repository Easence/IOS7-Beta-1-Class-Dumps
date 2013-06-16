/* EKCalendarWidgetViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "EKDayViewDataSource.h"
#import "CalendarWidget-Structs.h"
#import <UIKit/UIScreen.h>

@class EKEventStore, NSObject, CalendarOccurrencesCollection, UIView, UIButton, EKDayView;
@protocol OS_dispatch_queue;

@interface EKCalendarWidgetViewController : UIScreen <EKDayViewDataSource> {
	UIView* _contentView;
	UIButton* _debugRefreshButton;
	EKDayView* _dayView;
	EKEventStore* _eventStore;
	NSObject<OS_dispatch_queue>* _eventLoadingQueue;
	CalendarOccurrencesCollection* _loadedEventCollection;
	unsigned _startHour;
	unsigned _endHour;
}
-(void).cxx_destruct;
-(id)dayView:(id)view eventsForStartDate:(id)startDate endDate:(id)date;
-(void)_reloadEvents;
-(void)_cleanupFetchDerivedData;
-(id)_selectedCalendars;
-(id)_fetchedDaysOccurrences;
-(id)_endOfViewedTimeSpanComponentsWithOccurrences:(id)occurrences;
-(id)_startOfViewedTimeSpanComponentsWithOccurrences:(id)occurrences;
-(id)_currentDateComponents;
-(id)_eventsSortedByFarthestEndLast:(id)last;
-(id)_eventsSortedByOldestStartFirst:(id)first;
-(id)_currentlyHappeningEventsFilteredFromArray:(id)array;
-(id)_now;
-(CGRect)_viewFrame;
-(float)_desiredHeightForOrientation:(int)orientation;
-(float)_displayedRangeHours;
-(CGSize)preferredViewSize;
-(unsigned)_visibleSecondForHour:(unsigned)hour;
-(void)_refreshDayView;
-(void)_relayoutDayViewVisibleTimeSpan;
-(void)_eventFetchCompleted;
-(void)_debugRefreshButtonPushed;
-(void)_significantTimeChange:(id)change;
-(void)_selectedCalendarsDidChange;
-(void)_databaseDidChange;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)loadView;
-(id)_dayView;
-(id)init;
@end
