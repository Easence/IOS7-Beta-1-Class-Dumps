/* SBAwayLockBar.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIView, UIButton, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBAwayLockBar : XXUnknownSuperclass {
	UIButton* _slideshowButton;
	UIView* _cameraGrabber;
	NSMutableDictionary* _orientationToButtonImages;
}
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)touchesCancelled:(id)cancelled withEvent:(id)event;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)_slideshowButtonActivated:(id)activated;
-(void)_setShowsButton:(BOOL)button button:(id*)button2 buttonTag:(int)tag hasComposedImage:(BOOL)image action:(SEL)action animated:(BOOL)animated;
-(void)_setImagesForButton:(id)button orientation:(int)orientation;
-(id)_selectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
-(id)_unselectedImageForButtonTag:(int)buttonTag interfaceOrientation:(int)orientation;
-(id)_newButtonWithAction:(SEL)action tag:(int)tag hasComposedImage:(BOOL)image;
-(void)setOrientation:(int)orientation;
-(BOOL)showsCameraGrabber;
-(void)setShowsCameraGrabber:(BOOL)grabber;
-(void)setSlideshowButtonSelected:(BOOL)selected;
-(void)setShowsSlideshowButton:(BOOL)button;
-(BOOL)_shouldStopLabelAnimationForGrab;
-(void)setLabel:(id)label;
-(void)dealloc;
@end
