/* RoundedCornerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"

@class UIImage, ClipCornerView;

__attribute__((visibility("hidden")))
@interface RoundedCornerView : XXUnknownSuperclass {
	ClipCornerView* _clipCornerViews[4];
	float _cornerRadius;
	float _cornerSize;
	UIImage* _imageBackground;
}
-(void).cxx_destruct;
-(void)setFrame:(CGRect)frame;
-(void)_layoutSubviews;
-(CGPoint)_originForCornerIndex:(int)cornerIndex withBoundsSize:(CGSize)boundsSize;
-(id)initWithCornerRadius:(float)cornerRadius size:(float)size imageBackground:(id)background;
@end
