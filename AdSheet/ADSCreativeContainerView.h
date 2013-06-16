/* ADSCreativeContainerView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AdSheet-Structs.h"

@class ADSCreativeView, UIImageView;

__attribute__((visibility("hidden")))
@interface ADSCreativeContainerView : XXUnknownSuperclass {
	int _adType;
	ADSCreativeView* _creativeView;
	UIImageView* _brandingFrame;
}
@property(retain, nonatomic) UIImageView* brandingFrame;
@property(retain, nonatomic) ADSCreativeView* creativeView;
@property(readonly, assign, nonatomic) int adType;
-(CGRect)_contentFrame;
-(void)layoutSubviews;
-(void)setFrame:(CGRect)frame;
-(id)_bannerFrameImageForSize:(CGSize)size;
-(id)initWithAdType:(int)adType;
-(void)dealloc;
@end
