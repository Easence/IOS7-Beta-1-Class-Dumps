/* RemindersRefreshController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class ACAccountStore, NSMutableSet, NSMutableArray, NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface RemindersRefreshController : XXUnknownSuperclass {
	NSMutableArray* _calendarsPendingRefresh;
	BOOL _isPendingRefreshForCalendarList;
	NSMutableDictionary* _lastCalendarRefreshDates;
	NSDate* _lastCalendarListRefreshDate;
	ACAccountStore* _accountStore;
	NSMutableSet* _allRemindersSyncingAccountIDs;
	BOOL _paused;
}
@property(retain, nonatomic) NSDate* lastCalendarListRefreshDate;
+(id)sharedRefreshController;
-(void).cxx_destruct;
-(void)resumeScheduledRefreshes;
-(void)pauseScheduledRefreshes;
-(void)scheduleRefreshForCalendarList;
-(void)scheduleRefreshForAllCalendars;
-(void)scheduleRefreshForCalendarWithIdentifier:(id)identifier;
-(void)dealloc;
-(BOOL)_needsRefreshForCalendarList;
-(BOOL)_needsRefreshForCalendarWithIdentifier:(id)identifier;
-(void)_refreshCalendarList;
-(void)_refreshCalendarWithIdentifier:(id)identifier;
-(id)_allRemindersSyncingAccountIDs;
-(id)_accountStore;
-(void)_accountStoreDidChange:(id)_accountStore;
@end
