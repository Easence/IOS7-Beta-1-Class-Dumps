/* HourlyScrollerBeltView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIScrollViewDelegate.h"
#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol HourlyScrollerBeltDelegate;

__attribute__((visibility("hidden")))
@interface HourlyScrollerBeltView : XXUnknownSuperclass <UIScrollViewDelegate> {
	id<HourlyScrollerBeltDelegate> _hourlyScrollerDelegate;
	NSMutableArray* _cells;
}
@property(retain, nonatomic) NSMutableArray* cells;
@property(assign, nonatomic) id<HourlyScrollerBeltDelegate> hourlyScrollerDelegate;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)resetScrollerOffsets;
-(void)reloadData;
-(id)forecasts;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
