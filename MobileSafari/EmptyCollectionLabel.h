/* EmptyCollectionLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface EmptyCollectionLabel : XXUnknownSuperclass {
	NSString* _text;
	CTFramesetterRef _framesetter;
	CGSize _textSizePortrait;
	CGSize _textSizeLandscape;
	UIImage* _replacementImage;
	unsigned _replacementLocation;
}
-(void)dealloc;
-(void)drawRect:(CGRect)rect;
-(CGSize)sizeForOrientation:(int)orientation;
-(id)initWithFrame:(CGRect)frame text:(id)text font:(id)font replacingString:(id)string withImage:(id)image;
@end
