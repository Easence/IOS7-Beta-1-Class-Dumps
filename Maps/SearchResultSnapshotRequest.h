/* SearchResultSnapshotRequest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SearchResultResourceRequest.h"
#import "Maps-Structs.h"

@class GEOPlace;

__attribute__((visibility("hidden")))
@interface SearchResultSnapshotRequest : SearchResultResourceRequest {
	GEOPlace* _place;
	unsigned _level;
	CGSize _size;
}
@property(assign) CGSize size;
@property(assign) unsigned zoomLevel;
@property(retain) GEOPlace* place;
+(id)requestWithSearchResult:(id)searchResult place:(id)place zoomLevel:(unsigned)level size:(CGSize)size;
-(void)dealloc;
@end
