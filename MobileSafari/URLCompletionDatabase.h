/* URLCompletionDatabase.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSObject;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface URLCompletionDatabase : XXUnknownSuperclass {
	NSObject<OS_dispatch_group>* _cloudTabFetching;
	int _searchableCollectionsMask;
}
@property(assign, nonatomic) int searchableCollectionsMask;
-(id)fakeBookmarkMatchDataWithURLString:(id)urlstring title:(id)title;
-(void)enumerateMatchDataForTypedStringHint:(id)typedStringHint withBlock:(id)block;
-(void)dealloc;
-(id)initWithSearchableCollectionsMask:(int)searchableCollectionsMask;
@end
