/* BookmarksBarButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileSafari-Structs.h"


__attribute__((visibility("hidden")))
@interface BookmarksBarButton : XXUnknownSuperclass {
	BOOL _usesHighlightedStyle;
	BOOL _usesPrivateBrowsingStyle;
}
-(void)setSelected:(BOOL)selected;
-(void)setHighlighted:(BOOL)highlighted;
-(BOOL)_shouldShowHighlightedStyleImages;
-(BOOL)usesHighlightedStyle;
-(void)setUsesHighlightedStyle:(BOOL)style;
-(id)initWithFrame:(CGRect)frame;
@end
