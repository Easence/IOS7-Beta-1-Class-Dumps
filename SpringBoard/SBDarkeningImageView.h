/* SBDarkeningImageView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class UIImage;
@protocol SBDarkeningImageViewDelegate;

__attribute__((visibility("hidden")))
@interface SBDarkeningImageView : XXUnknownSuperclass {
	UIImage* _baseImage;
	float _brightness;
	id<SBDarkeningImageViewDelegate> _delegate;
}
@property(assign, nonatomic) float brightness;
@property(assign, nonatomic) id<SBDarkeningImageViewDelegate> delegate;
-(id)description;
-(void)setImage:(id)image brightness:(float)brightness;
-(void)setImage:(id)image;
-(id)image;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
