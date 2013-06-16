/* LegacySixSquareView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "FaceTime-Structs.h"

@class LegacySixSquareButton, UIImage;

__attribute__((visibility("hidden")))
@interface LegacySixSquareView : XXUnknownSuperclass {
	LegacySixSquareButton* _buttons[6];
	UIImage* _LegacySixSquareButtons[6][2];
	CGSize _LegacySixSquareTotalSize;
	id _delegate;
}
-(void)setAllButtonsEnabled:(BOOL)enabled;
-(id)buttonAtPosition:(int)position;
-(void)_cancelButtonDown:(id)down;
-(void)_buttonDown:(id)down;
-(void)_buttonHeldDownShort:(id)aShort;
-(void)_buttonHeldDown:(id)down;
-(void)_buttonClicked:(id)clicked;
-(void)setTitle:(id)title image:(id)image forPosition:(int)position;
-(void)setDelegate:(id)delegate;
-(void)removeFromSuperview;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
