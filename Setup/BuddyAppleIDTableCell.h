/* BuddyAppleIDTableCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, BuddyAppleIDTableCellCanvasView, UIImage;

__attribute__((visibility("hidden")))
@interface BuddyAppleIDTableCell : XXUnknownSuperclass {
	BuddyAppleIDTableCellCanvasView* _canvasView;
	UIImage* _serviceImage;
	NSString* _serviceDescription;
}
@property(copy, nonatomic) NSString* serviceDescription;
@property(retain, nonatomic) UIImage* serviceImage;
+(float)heightForText:(id)text cellWidth:(float)width;
+(id)stringDrawingContext;
+(id)textAttributes;
+(void)initialize;
-(void)dealloc;
-(void)setBackgroundColor:(id)color;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
