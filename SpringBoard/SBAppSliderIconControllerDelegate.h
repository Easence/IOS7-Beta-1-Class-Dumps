/* SBAppSliderIconControllerDelegate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SBAppSliderIconControllerDelegate <NSObject>
-(void)sliderIconScrollerDidEndScrolling:(id)sliderIconScroller;
-(unsigned)sliderIconScroller:(id)scroller settledIndexForNormalizedOffset:(inout float*)normalizedOffset andXVelocity:(float)velocity;
-(void)sliderIconScrollerBeganPanning:(id)panning;
-(void)sliderIconScroller:(id)scroller activate:(id)activate;
-(void)sliderIconScroller:(id)scroller contentOffsetChanged:(float)changed;
@end
