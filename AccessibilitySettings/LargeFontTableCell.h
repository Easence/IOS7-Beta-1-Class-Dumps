/* LargeFontTableCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel;

__attribute__((visibility("hidden")))
@interface LargeFontTableCell : XXUnknownSuperclass {
@private
	UILabel* _fontSizeLabel;
	UILabel* _fontSampleLabel;
	float _fontSize;
}
@property(assign, nonatomic) float fontSize;
-(void)layoutSubviews;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end
