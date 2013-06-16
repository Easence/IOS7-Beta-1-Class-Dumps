/* PhoneDesktopView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FaceTime-Structs.h"

@class _UIBackdropView, UITransitionView, UIImageView, UIImage;

__attribute__((visibility("hidden")))
@interface PhoneDesktopView : XXUnknownSuperclass {
	UIImageView* _imageView;
	UIImage* _wallpaperImage;
	UIImage* _queuedImage;
	BOOL _animatingTransition;
	_UIBackdropView* _backdropView;
	UITransitionView* _wallpaperContainer;
}
@property(retain) UITransitionView* wallpaperContainer;
@property(retain) _UIBackdropView* backdropView;
@property(readonly, assign, getter=isAnimatingTransition) BOOL animatingTransition;
-(void)transitionToQueuedImage;
-(void)reallyTransitionToImage:(id)image animated:(BOOL)animated;
-(void)transitionToImage:(id)image animated:(BOOL)animated;
-(id)initWithFrame:(CGRect)frame image:(id)image;
-(void)transitionViewDidComplete:(id)transitionView fromView:(id)view toView:(id)view3;
-(double)durationForTransition:(int)transition;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
@end
