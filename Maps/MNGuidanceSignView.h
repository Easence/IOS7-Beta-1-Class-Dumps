/* MNGuidanceSignView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MNGuidanceSignBackgroundView, MNGuidanceSignDistanceLabel, NSArray, MNGuidanceSignInstructionsLabel, UIImage, UIView, MNGuidanceManeuverView, UIActivityIndicatorView, UIImageView, NSString, MNSignStyle;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignView : XXUnknownSuperclass {
	float _maximumWidth;
	UIView* _containerView;
	BOOL _disallowMutation;
	MNGuidanceSignDistanceLabel* _distanceLabel;
	MNGuidanceSignInstructionsLabel* _instructionsLabel;
	MNGuidanceManeuverView* _maneuverView;
	BOOL _shouldShowSpinner;
	UIActivityIndicatorView* _activityView;
	UIImageView* _borderView;
	MNGuidanceSignBackgroundView* _backgroundView;
	UIView* _dividerView;
	UIImageView* _shieldView;
	CGPoint _shieldCenter;
	MNSignStyle* _style;
	NSArray* _instructionsTextAlternatives;
	BOOL _showsSubviewBounds;
	BOOL _shouldHideDivider;
	int _variant;
}
@property(assign, nonatomic) BOOL shouldHideDivider;
@property(assign, nonatomic) BOOL shouldShowSpinner;
@property(assign, nonatomic) int variant;
@property(assign, nonatomic) CGPoint shieldCenter;
@property(retain, nonatomic) UIImage* shieldImage;
@property(readonly, assign, nonatomic) MNGuidanceManeuverView* maneuverView;
@property(assign, nonatomic) unsigned maximumNumberOfInstructionLines;
@property(copy, nonatomic) NSArray* instructionsTextAlternatives;
@property(copy, nonatomic) NSString* distanceText;
@property(retain, nonatomic) MNSignStyle* style;
@property(assign, nonatomic) float maximumWidth;
-(void)updateDividerHeightForRect:(CGRect)rect;
-(void)disallowMutation;
-(void)textLinesShouldAnimateFromHeight:(float)textLines;
-(void)transformSublayersByPercentComplete:(float)complete;
-(void)updateAlpha:(id)alpha;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)setInstructionsText:(id)text shorterAlternatives:(id)alternatives;
-(id)_activityView;
-(void)setHidden:(BOOL)hidden;
-(void)setContentFrameX:(float)x;
-(CGRect)contentFrame;
-(float)leftEdgeOfInstruction;
-(BOOL)textIsCentered;
-(void)layoutSubviews;
-(void)setNeedsLayout;
-(float)heightThatFitsWidth:(float)width;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)animateTextDown;
-(void)animateTextUp;
-(void)updateStyleValuesFromTheme;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
