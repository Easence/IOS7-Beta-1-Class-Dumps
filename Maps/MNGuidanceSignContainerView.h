/* MNGuidanceSignContainerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MNGuidanceSignView, MNGuidanceSecondarySignView;
@protocol MNGuidanceSignViewDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignContainerView : XXUnknownSuperclass {
	id<MNGuidanceSignViewDelegate> _delegate;
	float _maximumWidth;
	MNGuidanceSignView* _primarySignView;
	MNGuidanceSecondarySignView* _secondarySignView;
}
@property(retain, nonatomic) MNGuidanceSecondarySignView* secondarySignView;
@property(retain, nonatomic) MNGuidanceSignView* primarySignView;
@property(assign, nonatomic) float maximumWidth;
@property(assign, nonatomic) id<MNGuidanceSignViewDelegate> delegate;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_alignAndCenterSigns;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(void)_handleSingleTap:(id)tap;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
