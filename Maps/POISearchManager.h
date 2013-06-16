/* POISearchManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable, NSCache, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface POISearchManager : XXUnknownSuperclass {
	NSCache* _poiCache;
	NSMapTable* _completionHandlers;
	NSMutableDictionary* _canShowActivityIndicatorForBusinessIDs;
	NSMutableDictionary* _loadingForBusinessIDs;
	NSMutableDictionary* _activityIndicatorVisibleForBusinessIDs;
}
-(void)dealloc;
-(void)searchForBusinessID:(unsigned long long)businessID completionHandler:(id)handler;
-(void)searchForBusinessID:(unsigned long long)businessID completionHandler:(id)handler searchResultType:(int)type;
-(id)searchResultForBusinessID:(unsigned long long)businessID;
-(void)_setLoading:(BOOL)loading forBusinessID:(unsigned long long)businessID;
-(void)setCanShowActivityIndicator:(BOOL)indicator forBusinessID:(unsigned long long)businessID;
-(void)_updateActivityIndicatorForBusinessID:(unsigned long long)businessID;
-(id)init;
@end
