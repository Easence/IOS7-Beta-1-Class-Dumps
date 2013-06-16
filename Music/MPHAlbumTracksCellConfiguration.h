/* MPHAlbumTracksCellConfiguration.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Music-Structs.h"
#import "MPHSongCellConfiguration.h"


__attribute__((visibility("hidden")))
@interface MPHAlbumTracksCellConfiguration : MPHSongCellConfiguration {
}
+(CGSize)sizeForDuration:(double)duration;
+(id)propertiesToFetch;
+(float)cloudRightInsetForDurationWidth:(float)durationWidth;
+(float)tableViewCellHeight;
+(Class)tableViewCellClass;
+(id)tableViewCellBackgroundColor;
+(id)tableViewBackgroundColor;
+(void)configureCell:(id)cell forViewController:(id)viewController withEntity:(id)entity atIndex:(unsigned)index;
@end
