/* SixSquareView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class SixSquareButton;

__attribute__((visibility("hidden")))
@interface SixSquareView : XXUnknownSuperclass {
	SixSquareButton* _buttons[6];
	id _delegate;
	BOOL _onlyShowsFourButtons;
}
@property(assign, nonatomic) BOOL onlyShowsFourButtons;
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
-(CGSize)totalSize;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
