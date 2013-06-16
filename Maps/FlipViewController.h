/* FlipViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SUScalingFlipViewDelegate.h"

@class SUScalingFlipView, UIView, UIViewController;
@protocol FlipViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface FlipViewController : XXUnknownSuperclass <SUScalingFlipViewDelegate> {
	CGRect _originalRect;
	BOOL _flippingBack;
	id<FlipViewControllerDelegate> _flipDelegate;
	UIView* _viewToFlip;
	UIViewController* _viewControllerToPresent;
	SUScalingFlipView* _scalingFlipView;
}
@property(retain, nonatomic) SUScalingFlipView* scalingFlipView;
@property(retain, nonatomic) UIViewController* viewControllerToPresent;
@property(retain, nonatomic) UIView* viewToFlip;
@property(assign, nonatomic) id<FlipViewControllerDelegate> flipDelegate;
-(void)scalingFlipViewDidFinish:(id)scalingFlipView;
-(void)_unflipViewController;
-(void)flipToViewController;
-(CGRect)_modalPresentationRect;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(void)dealloc;
-(id)initWithFlipView:(id)flipView controllerToPresent:(id)present;
@end
