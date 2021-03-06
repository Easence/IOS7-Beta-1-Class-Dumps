/* SBBulletinCellContentView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBBulletinCellContentViewBase.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface SBBulletinCellContentView : SBBulletinCellContentViewBase {
	UIView* _blurView;
	UIView* _contentView;
	float _shadowBlur;
	void* _data;
	unsigned long _dataLength;
}
+(float)heightForSystemAlertStyleWithTitle:(id)title maxLines:(unsigned)lines message:(id)message maxLines:(unsigned)lines4 contentWidth:(float)width;
+(float)heightForBulletinStyleWithSubtitle:(id)subtitle imageHeight:(float)height;
+(float)heightForBulletinStyleWithSubtitle:(id)subtitle message:(id)message maxLines:(unsigned)lines contentWidth:(float)width;
+(id)_attachmentFont;
+(id)_messageFont;
+(id)_subtitleFont;
+(id)_dateFont;
+(id)_titleFont;
-(void)displayLayer:(id)layer;
-(void)drawInGrayscaleContexts;
-(void)drawInColorContext;
-(BOOL)getSourceData:(vImage_Buffer*)data dstData:(vImage_Buffer*)data2;
-(void)setNeedsDisplay;
-(void)setShadowColor:(id)color;
-(void)drawRect:(CGRect)rect;
-(void)_drawLabel:(id)label inContext:(CGContextRef)context;
-(void)_drawLabel:(id)label withMetrics:(id)metrics inContext:(CGContextRef)context;
-(void)_configureCTMForDrawingLabel:(id)drawingLabel inContext:(CGContextRef)context;
-(void)layoutSubviews;
-(void)_layoutAttachmentTextAtX:(float)x;
-(float)_layoutMessageAtX:(float)x y:(float)y;
-(float)_layoutAttachmentImageAtX:(float)x y:(float)y;
-(float)_layoutSubtitleAtX:(float)x y:(float)y;
-(float)_layoutTitleAtX:(float)x y:(float)y;
-(BOOL)_shouldVerticallyCenterBulletinStyleDate;
-(BOOL)_shouldVerticallyCenterBulletinStyleTitle;
-(id)_attachmentFont;
-(id)_messageFont;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)_dateFont;
-(void)_configureLabel:(id)label withFont:(id)font color:(id)color alignment:(int)alignment;
-(void)dealloc;
-(id)_initForLayoutStyle:(int)layoutStyle;
-(void)setShadowBlur:(float)blur;
@end
