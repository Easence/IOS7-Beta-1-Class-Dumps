/* VideosSmallVideosCollectionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Videos-Structs.h"
#import "VideosArtworkCollectionViewController.h"


__attribute__((visibility("hidden")))
@interface VideosSmallVideosCollectionViewController : VideosArtworkCollectionViewController {
}
-(CGSize)proportionalSizeForIndexPath:(id)indexPath withMaxSize:(CGSize)maxSize;
-(CGSize)collectionView:(id)view largestArtworkSizeForIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view artworkSizeForIndexPath:(id)indexPath;
-(Class)cellClass;
-(CGSize)iPadLandscapeArtworkSize;
-(CGSize)iPadPortraitArtworkSize;
-(CGSize)iPadLandscapeItemSize;
-(CGSize)iPadPortraitItemSize;
@end
