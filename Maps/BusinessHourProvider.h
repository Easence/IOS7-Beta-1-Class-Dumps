/* BusinessHourProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GEOBusiness, GEOTimeRange;

__attribute__((visibility("hidden")))
@interface BusinessHourProvider : XXUnknownSuperclass {
	GEOBusiness* business;
	GEOTimeRange* firstRangeFromTomorrow;
	GEOTimeRange* lastRangeFromYesterday;
}
@property(retain) GEOTimeRange* lastRangeFromYesterday;
@property(retain) GEOTimeRange* firstRangeFromTomorrow;
@property(retain) GEOBusiness* business;
-(id)businessHoursForSearchResult:(id)searchResult;
-(id)businessHours;
-(id)displayHoursForTimeRanges:(id)timeRanges;
-(void)dealloc;
@end
