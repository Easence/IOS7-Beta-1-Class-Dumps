/* HUDTouchInfo.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"

@class UIView, UITouch, UIImageView;

__attribute__((visibility("hidden")))
@interface HUDTouchInfo : XXUnknownSuperclass {
	UITouch* _touch;
	UIImageView* _dot;
	UIView* _bar;
	CGPoint _plottedLocation;
	CGPoint _locationInHUD;
	XXStruct_MU8DIA _stockValue;
}
@property(retain, nonatomic) UIView* bar;
@property(retain, nonatomic) UIImageView* dot;
@property(assign, nonatomic) __weak UITouch* touch;
@property(assign, nonatomic) CGPoint locationInHUD;
@property(assign, nonatomic) CGPoint plottedLocation;
@property(assign, nonatomic) XXStruct_MU8DIA stockValue;
-(void).cxx_destruct;
-(id)description;
@end
