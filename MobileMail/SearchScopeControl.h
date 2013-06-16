/* SearchScopeControl.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, UIScrollView, UIView, UISegmentedControl;

__attribute__((visibility("hidden")))
@interface SearchScopeControl : XXUnknownSuperclass {
	UIScrollView* _scrollView;
	UISegmentedControl* _segments;
	UIView* _separator;
	NSArray* _scopeTitles;
}
@property(assign, nonatomic) int selectedScopeIndex;
@property(copy, nonatomic) NSArray* scopeTitles;
-(void)_segmentValueChanged:(id)changed;
-(void)setScopeTitles:(id)titles animated:(BOOL)animated;
-(void)_updateTitles:(BOOL)titles;
-(void)willMoveToSuperview:(id)superview;
-(void)_didScroll;
-(void)_updateMaskIfNecessary;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
