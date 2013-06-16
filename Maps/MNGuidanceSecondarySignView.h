/* MNGuidanceSecondarySignView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MNGuidanceSignBackgroundView, MNGuidanceSignInstructionsLabel, NSArray, UIImage, UIView, MNGuidanceManeuverView, UIImageView, MNSignStyle;

__attribute__((visibility("hidden")))
@interface MNGuidanceSecondarySignView : XXUnknownSuperclass {
	float _maximumWidth;
	UIView* _containerView;
	BOOL _disallowMutation;
	MNGuidanceManeuverView* _maneuverView;
	MNGuidanceSignInstructionsLabel* _instructionsLabel;
	UIImageView* _shieldView;
	CGPoint _shieldCenter;
	MNGuidanceSignBackgroundView* _backgroundView;
	UIImageView* _borderView;
	MNSignStyle* _style;
	int _variant;
	NSArray* _instructionsTextAlternatives;
	UIView* _separatorView;
}
@property(readonly, assign, nonatomic) UIView* separatorView;
@property(assign, nonatomic) int variant;
@property(assign, nonatomic) CGPoint shieldCenter;
@property(retain, nonatomic) UIImage* shieldImage;
@property(readonly, assign, nonatomic) MNGuidanceManeuverView* maneuverView;
@property(copy, nonatomic) NSArray* instructionsTextAlternatives;
@property(retain, nonatomic) MNSignStyle* style;
@property(assign, nonatomic) float maximumWidth;
+(BOOL)canDisplayJunction:(id)junction;
-(void)setInstructionsText:(id)text shorterAlternatives:(id)alternatives;
-(void)disallowMutation;
-(void)setHidden:(BOOL)hidden;
-(void)setContentFrameX:(float)x;
-(CGRect)contentFrame;
-(void)setLeftEdgeOfInstruction:(float)instruction;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)_showBounds:(id)bounds;
-(void)transformSublayersByPercentComplete:(float)complete;
-(void)textLinesShouldAnimateFromHeight:(float)textLines;
-(void)animateTextDown;
-(void)animateTextUp;
-(void)updateStyleValuesFromTheme;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
