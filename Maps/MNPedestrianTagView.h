/* MNPedestrianTagView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, VerticalShadowView;

__attribute__((visibility("hidden")))
@interface MNPedestrianTagView : XXUnknownSuperclass {
	BOOL _isDimmed;
	UILabel* _titleLabel;
	UILabel* _detailsLabel;
	VerticalShadowView* _shadowView;
}
@property(retain, nonatomic) VerticalShadowView* shadowView;
@property(assign, nonatomic) BOOL isDimmed;
@property(retain, nonatomic) UILabel* detailsLabel;
@property(retain, nonatomic) UILabel* titleLabel;
-(void)updateStyleForTheme;
-(void)updateStyleThemeDimmed:(BOOL)dimmed animation:(id)animation;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
