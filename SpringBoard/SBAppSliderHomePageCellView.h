/* SBAppSliderHomePageCellView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class _UIBackdropView, UIView, SBFakeStatusBarView;

__attribute__((visibility("hidden")))
@interface SBAppSliderHomePageCellView : XXUnknownSuperclass {
	UIView* _homeSnapshot;
	_UIBackdropView* _backdropView;
	SBFakeStatusBarView* _fakeStatusBar;
}
@property(retain, nonatomic) UIView* homeSnapshot;
-(void)_viewDidAnimate:(id)_view;
-(void)_viewWillAnimate:(id)_view;
-(void)_viewDismissing:(id)dismissing;
-(void)_viewPresenting:(id)presenting;
-(int)_layoutOrientationForBounds:(CGRect)bounds;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)layoutSubviews;
-(void)setAdaptiveColorInfo:(id)info;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
