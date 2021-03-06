/* BrowserToolbar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CALayer, UILongPressGestureRecognizer, UIBarButtonItem, _UIBackdropView, NSArray;
@protocol BrowserToolbarDelegate;

__attribute__((visibility("hidden")))
@interface BrowserToolbar : XXUnknownSuperclass {
	CALayer* _linkImageContainerLayer;
	UIBarButtonItem* _backItem;
	UIBarButtonItem* _forwardItem;
	UIBarButtonItem* _actionItem;
	UIBarButtonItem* _bookmarksItem;
	UIBarButtonItem* _tabExposeItem;
	UILongPressGestureRecognizer* _backLongPressRecognizer;
	UILongPressGestureRecognizer* _forwardLongPressRecognizer;
	_UIBackdropView* _backgroundView;
	BOOL _hasDarkBackground;
	id<BrowserToolbarDelegate> _browserDelegate;
	NSArray* _defaultItems;
}
@property(assign, nonatomic) BOOL hasDarkBackground;
@property(readonly, assign, nonatomic) NSArray* defaultItems;
@property(assign, nonatomic) id<BrowserToolbarDelegate> browserDelegate;
-(void)setActionEnabled:(BOOL)enabled;
-(void)setForwardEnabled:(BOOL)enabled;
-(void)setBackEnabled:(BOOL)enabled;
-(void)_installGestureRecognizers;
-(void)_backLongPressRecognized;
-(void)_forwardLongPressRecognized;
-(void)setItems:(id)items animated:(BOOL)animated;
-(void)dealloc;
-(id)_bookmarksItemLayer;
-(id)_tabExposeItemLayer;
-(id)initWithFrame:(CGRect)frame;
-(void)_tabExposeButtonPressed;
-(CGRect)cloudTabsPopoverPresentationRect;
-(CGRect)bookmarksPopoverPresentationRect;
-(CGRect)actionPopoverPresentationRect;
-(CGRect)forwardPopoverPresentationRect;
-(CGRect)backPopoverPresentationRect;
-(void)cancelLinkAnimations;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)animateLinkImage:(CGImageRef)image flipped:(BOOL)flipped fromRect:(CGRect)rect toLayer:(id)layer orButton:(int)button inView:(id)view afterLinkImageDisappears:(id)disappears afterButtonBounces:(id)bounces;
-(id)_pulseAnimationWithInitalTransform:(CATransform3D)initalTransform;
-(id)_bounceAnimationWithInitalTransform:(CATransform3D)initalTransform;
-(id)_toolbarItemAnimationTemplate;
-(id)_layerForButton:(int)button;
-(id)_fadeOutAnimation;
-(id)_scalingAnimationToFitLayerWithSize:(CGSize)size intoItemWithSize:(CGSize)size2 startingFromTransform:(CATransform3D)transform;
-(id)_slightRotationAnimationStartingFromTransform:(CATransform3D)transform withRelativeAngle:(float)relativeAngle;
-(id)_ballisticMovementAnimationFromPoint:(CGPoint)point throughPoint:(CGPoint)point2 toPoint:(CGPoint)point3;
@end
