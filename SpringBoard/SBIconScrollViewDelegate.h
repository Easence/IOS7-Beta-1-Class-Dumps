/* SBIconScrollViewDelegate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "SpringBoard-Structs.h"


@protocol SBIconScrollViewDelegate <UIScrollViewDelegate>
-(void)iconScrollView:(id)view willSetContentOffset:(inout CGPoint*)offset;
-(void)iconScrollViewDidCancelTouchTracking:(id)iconScrollView;
-(void)iconScrollViewWillCancelTouchTracking:(id)iconScrollView;
@end
