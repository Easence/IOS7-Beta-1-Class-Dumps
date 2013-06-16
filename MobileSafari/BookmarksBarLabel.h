/* BookmarksBarLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage, UIColor, UIFont, BookmarksBarLabelGradientView;

__attribute__((visibility("hidden")))
@interface BookmarksBarLabel : XXUnknownSuperclass {
	UIImage* gradientImage;
	UIImage* highlightGradientImage;
	BOOL isHightlighted;
	NSString* text;
	UIFont* font;
	UIColor* textColor;
	UIColor* shadowColor;
	CGSize shadowOffset;
	BookmarksBarLabelGradientView* gradientView;
}
@property(assign) CGSize shadowOffset;
@property(retain) UIColor* shadowColor;
@property(retain) UIColor* textColor;
@property(retain) UIFont* font;
@property(retain) NSString* text;
@property(retain) UIImage* highlightGradientImage;
@property(retain) UIImage* gradientImage;
-(void)drawRect:(CGRect)rect;
-(void)setHighlighted:(BOOL)highlighted;
-(BOOL)isHightlighted;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
