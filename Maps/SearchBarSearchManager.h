/* SearchBarSearchManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SearchBookmarksAndHistoryOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SearchMeCardLabelsOperationDelegate.h"
#import "SearchAddressBookOperationDelegate.h"
#import "SearchRecentsOperationDelegate.h"

@class NSDate, NSTimer, NSMutableArray, SearchBarSearchManagerRequest, NSString, NSOperationQueue;
@protocol SearchBarSearchManagerDelegate;

__attribute__((visibility("hidden")))
@interface SearchBarSearchManager : XXUnknownSuperclass <SearchBookmarksAndHistoryOperationDelegate, SearchMeCardLabelsOperationDelegate, SearchAddressBookOperationDelegate, SearchRecentsOperationDelegate> {
	id<SearchBarSearchManagerDelegate> _delegate;
	NSMutableArray* _searchResults;
	NSOperationQueue* _searchQueue;
	NSString* _query;
	void* _addressBook;
	NSDate* _lastSearchDate;
	SearchBarSearchManagerRequest* _pendingSearch;
	NSTimer* _pendingSearchTimer;
}
@property(retain, nonatomic) NSDate* lastSearchDate;
@property(retain, nonatomic) SearchBarSearchManagerRequest* pendingSearch;
@property(retain, nonatomic) NSTimer* pendingSearchTimer;
@property(copy, nonatomic) NSString* query;
-(void)_searchUsingSearchRequest:(id)request;
-(void)_startPendingSearchRequest;
-(void)cancelCurrentSearch;
-(void)searchName:(id)name forSearchMode:(int)searchMode withTypes:(int)types;
-(void)searchAddressBookOperation:(id)operation didMatchResults:(id)results;
-(void)searchRecentsOperation:(id)operation didMatchResults:(id)results;
-(void)meCardLabelsOperation:(id)operation didMatchResults:(id)results;
-(void)bookmarksAndHistoryOperation:(id)operation didFindMatches:(id)matches;
-(void)_addNonduplicateResultsFromArray:(id)array toSearchResults:(id)searchResults;
-(void)dealloc;
-(id)initWithDelegate:(id)delegate;
@end
