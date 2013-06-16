/* RemindersStandardListModel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import "RemindersListModel.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RemindersStandardListModel : RemindersListModel {
	BOOL _isToday;
	NSMutableArray* _completedReminders;
	NSMutableArray* _recentlyAddedReminders;
	BOOL _shouldLoadCompletedReminders;
}
@property(readonly, assign) unsigned numberOfIncompleteReminders;
@property(readonly, assign) unsigned numberOfCompletedReminders;
@property(readonly, assign) unsigned numberOfReminders;
@property(assign, nonatomic) BOOL shouldLoadCompletedReminders;
-(void).cxx_destruct;
-(void)removeReminderFromModel:(id)model;
-(id)description;
-(BOOL)invalidateMaintainedReminders;
-(void)protectedRemoveReminderAtIndex:(int)index;
-(void)addReminder:(id)reminder;
-(BOOL)shouldInvalidateReminder:(id)reminder;
-(BOOL)needsReloadForChangedObjectIDs:(id)changedObjectIDs;
-(BOOL)matchesReminder:(id)reminder;
-(id)storeProtectedData:(id)data rangeAlreadyFaulted:(NSRange)faulted;
-(id)fetchProtectedData;
-(id)_fetchCompletedRemindersInCalendars:(id)calendars;
-(void)_fetchRemindersWithDueDate:(id)dueDate calendars:(id)calendars fetchedReminders:(id*)reminders fetchedCompletedCount:(int*)count;
-(void)_fetchRemindersForTodayCardWithDueDate:(id)dueDate calendars:(id)calendars fetchedReminders:(id*)reminders fetchedCompletedCount:(int*)count;
-(id)predicateForCountingReminders;
-(void)checkOrUncheckReminder:(id)reminder;
-(int)_compareReminder:(id)reminder toReminder:(id)reminder2;
-(void)faultReminder:(id)reminder;
-(id)propertiesToFetch;
-(BOOL)willDisplayRemindersInRange:(NSRange)range;
-(int)indexOfReminder:(id)reminder protected:(BOOL)aProtected;
-(id)reminderAtIndex:(int)index;
-(void)setDueDate:(id)date;
@end
