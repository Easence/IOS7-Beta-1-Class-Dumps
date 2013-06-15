/* SBShowcaseController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBHighlightView, SBWindow, UIControl, UIView;
@protocol SBShowcaseViewControllerProtocol, SBShowcaseControllerOwner;

__attribute__((visibility("hidden")))
@interface SBShowcaseController : XXUnknownSuperclass {
	SBWindow* _hostWindow;
	UIView* _hostView;
	SBWindow* _showcaseWindow;
	UIView* _rootView;
	UIView* _contentView;
	UIControl* _blockingView;
	UIView* _clippingView;
	UIView* _showcaseView;
	UIView* _topShadowView;
	UIView* _bottomShadowView;
	UIView* _hidingView;
	SBHighlightView* _separator;
	float _revealAmount;
	int _orientation;
	BOOL _isAnimating;
	int _pendingRevealMode;
	id<SBShowcaseControllerOwner> _owner;
	id<SBShowcaseViewControllerProtocol> _showcaseViewController;
}
@property(assign, nonatomic, getter=isAnimating) BOOL animating;
@property(assign, nonatomic) int revealMode;
@property(assign, nonatomic) float revealAmount;
@property(assign, nonatomic) int orientation;
@property(readonly, assign, nonatomic) SBWindow* window;
@property(readonly, assign, nonatomic) UIControl* blockingView;
@property(retain, nonatomic) UIView* hidingView;
@property(retain, nonatomic) UIView* hostView;
@property(assign, nonatomic) id<SBShowcaseControllerOwner> owner;
@property(retain, nonatomic) id<SBShowcaseViewControllerProtocol> showcase;
+(float)fullRevealAmount;
-(BOOL)transferOwnershipToOwner:(id)owner;
-(void)noteRevealModeWillChange:(int)noteRevealMode;
-(void)dismissWithFadeOfDuration:(double)duration;
-(void)dismissWithAnimation:(BOOL)animation;
-(void)updateRevealMode:(int)mode withBlock:(id)block;
-(float)_showcaseRevealedAmount;
-(CGRect)_hostViewFrame;
-(CGRect)_adjustedContentFrameForFrame:(CGRect)frame;
-(CGRect)_portraitAdjustedFrameForFrame:(CGRect)frame;
-(CGRect)_contentFrame;
-(CGAffineTransform)_rootTransform;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)didDisappear;
-(void)willDisappear;
-(void)didAppear;
-(void)willAppear;
-(float)_separatorAlphaForRevealAmount:(float)revealAmount;
-(CGRect)_visibleShowcaseBounds;
-(void)_updateShowcase;
-(void)_updateShowcaseWindowLevel;
-(float)_showcaseWindowLevel;
-(void)setAlpha:(float)alpha;
-(void)setHidden:(BOOL)hidden;
-(float)revealAmountForMode:(int)mode;
-(float)bottomBarHeight;
-(CGRect)showcaseViewFrame;
-(void)dealloc;
-(id)init;
@end
