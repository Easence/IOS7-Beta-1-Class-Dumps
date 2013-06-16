/* CompassBearingView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Compass-Structs.h"
#import "CompassRotatingView.h"

@class CAShapeLayer;

__attribute__((visibility("hidden")))
@interface CompassBearingView : CompassRotatingView {
	CAShapeLayer* _bearingDeviationLayer;
	float _bearing;
	float _radius;
	float _innerRadius;
	float _outerRadius;
	float _startAngle;
	float _endAngle;
}
@property(assign, nonatomic) float outerRadius;
@property(assign, nonatomic) float innerRadius;
@property(assign, nonatomic) float bearing;
-(void)setCompassHeading:(double)heading;
-(void)updateLayer;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
