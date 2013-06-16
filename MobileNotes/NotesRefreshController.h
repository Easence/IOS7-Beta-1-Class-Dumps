/* NotesRefreshController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSDate, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface NotesRefreshController : XXUnknownSuperclass {
	NSMutableDictionary* _lastNotesRefreshDates;
	NSDate* _lastStoresListRefreshDate;
}
+(id)sharedInstance;
-(void).cxx_destruct;
-(void)refreshNotesForCollectionWithId:(id)anId;
-(void)refreshAllNotesIfNeeded;
-(BOOL)notesNeedRefreshForCollectionWithId:(id)anId;
-(BOOL)notesNeedRefresh;
-(void)refreshStoresList;
-(void)refreshOrphanedAccounts;
-(BOOL)storesListNeedsRefresh;
-(id)_accountStore;
@end
