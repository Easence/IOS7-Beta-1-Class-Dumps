/* CircleProgressView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CircleProgressView : XXUnknownSuperclass {
	CAShapeLayer* _maskLayer;
	float _progress;
	float _animateNextPathChange;
}
@property(assign, nonatomic) float animateNextPathChange;
@property(assign, nonatomic) float progress;
-(void)layoutSubviews;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)setMaskPath:(CGPathRef)path;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
