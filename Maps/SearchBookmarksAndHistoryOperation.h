/* SearchBookmarksAndHistoryOperation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;
@protocol SearchBookmarksAndHistoryOperationDelegate;

__attribute__((visibility("hidden")))
@interface SearchBookmarksAndHistoryOperation : XXUnknownSuperclass {
	void* _addressBook;
	NSString* _searchQuery;
	int _searchMode;
	BOOL _abAllowed;
	int _limit;
	id<SearchBookmarksAndHistoryOperationDelegate> _delegate;
}
@property(assign, nonatomic) id<SearchBookmarksAndHistoryOperationDelegate> delegate;
-(id)_bookmarksAndHistoryResultsForSearchQuery:(id)searchQuery searchMode:(int)mode;
-(BOOL)_removeCompletionString:(id)string fromCompletions:(id)completions query:(id)query;
-(void)_addCompletionString:(id)string toCompletions:(id)completions query:(id)query;
-(void)main;
-(void)dealloc;
-(id)initWithSearchQuery:(id)searchQuery searchMode:(int)mode addressBook:(void*)book limit:(int)limit;
@end
