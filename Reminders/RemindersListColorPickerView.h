/* RemindersListColorPickerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Reminders-Structs.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface RemindersListColorPickerView : XXUnknownSuperclass {
	NSMutableArray* _colorControls;
	id _target;
	SEL _selector;
}
-(void).cxx_destruct;
-(void)setTarget:(id)target action:(SEL)action;
-(void)selectColor:(int)color;
-(void)buttonTapped:(id)tapped;
-(void)configureButton:(id)button;
-(id)buttonImageForColor:(int)color;
-(void)layoutSubviews;
-(void)setAlpha:(float)alpha;
-(id)initWithFrame:(CGRect)frame customColor:(id)color;
@end
