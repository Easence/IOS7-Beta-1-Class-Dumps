/* AXHeaderValueCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

__attribute__((visibility("hidden")))
@interface AXHeaderValueCell : XXUnknownSuperclass {
@private
	UILabel* _headerLabel;
	UILabel* _contentLabel;
}
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)layoutSubviews;
-(BOOL)accessibilityScrollToVisible;
-(id)initWithFrame:(CGRect)frame header:(id)header content:(id)content;
@end
