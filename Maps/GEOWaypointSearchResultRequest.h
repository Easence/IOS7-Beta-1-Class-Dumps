/* GEOWaypointSearchResultRequest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOMapRegion, GEOWaypoint, GEOLatLng, SearchResult;

__attribute__((visibility("hidden")))
@interface GEOWaypointSearchResultRequest : XXUnknownSuperclass {
	GEOWaypoint* _waypoint;
	SearchResult* _searchResult;
	GEOMapRegion* _mapRegion;
}
@property(readonly, assign, nonatomic) GEOLatLng* latLng;
@property(readonly, assign, nonatomic) SearchResult* searchResult;
@property(readonly, assign, nonatomic) GEOWaypoint* waypoint;
-(XXStruct_gLbvpC)coordinate;
-(BOOL)mapRegionContainsCoordinate:(XXStruct_gLbvpC)coordinate;
-(BOOL)representsSearchString;
-(id)singleLineAddress;
-(id)traceName;
-(id)persistentData;
-(id)navAnnouncementName;
-(id)navDisplayName;
-(void)dealloc;
-(id)initWithGEOWaypoint:(id)geowaypoint searchResult:(id)result placeSearchResponse:(id)response;
-(id)initWithDirectionsWaypoint:(id)directionsWaypoint mapViewSearchInfo:(id)info;
@end
