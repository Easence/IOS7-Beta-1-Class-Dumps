/* MNGuidanceSignBackgroundView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, MNSignStyle;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignBackgroundView : XXUnknownSuperclass {
	UIImageView* _outerBackdrop;
	UIImageView* _innerBackdrop;
	MNSignStyle* _style;
}
@property(retain, nonatomic) MNSignStyle* style;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
