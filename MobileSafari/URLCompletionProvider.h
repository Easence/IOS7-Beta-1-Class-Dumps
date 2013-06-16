/* URLCompletionProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "CompletionProvider.h"

@class NSString, NSMutableArray, WebBookmarkCollection, NSMutableDictionary, URLCompletionDatabase;

__attribute__((visibility("hidden")))
@interface URLCompletionProvider : CompletionProvider {
	WebBookmarkCollection* _collection;
	NSMutableArray* _completionList;
	NSMutableDictionary* _completionsByAddress;
	unsigned _maxResults;
	NSString* _currentPrefix;
	BOOL _prefixWasModified;
	opaque_pthread_mutex_t _prefixMutex;
	opaque_pthread_cond_t _prefixWasModifiedCondition;
	unsigned _urlCompletionBackgroundTaskIdentifier;
	URLCompletionDatabase* _completionDatabase;
	BOOL _providesTopHits;
}
@property(assign, nonatomic) BOOL providesTopHits;
-(void)_endURLCompletionBackgroundTask;
-(void)_rescheduleEndOfURLCompletionBackgroundTask;
-(void)_startURLCompletionBackgroundTask;
-(void)setStringToComplete:(id)complete;
-(void)_getPrefixLoop;
-(unsigned)maximumCachedCompletionCount;
-(void)_doUpdateForPrefix:(id)prefix;
-(void)dealloc;
-(id)initWithBookmarkCollection:(id)bookmarkCollection maxResults:(unsigned)results searchableCollectionsMask:(int)mask;
@end
