/* MPUCoverZoomViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPUCoverZoomViewControllerDelegate <NSObject>
-(id)detailViewControllerForEntity:(id)entity;
-(id)imageRequestForEntity:(id)entity;
@optional
-(float)imageAspectRatio;
-(unsigned)maximumNumberOfRows;
-(unsigned)minimumNumberOfRows;
-(unsigned)defaultNumberOfRows;
@end