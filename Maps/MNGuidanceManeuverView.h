/* MNGuidanceManeuverView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIColor, MNJunction;
@protocol MNGuidanceManeuverViewTextureProvider;

__attribute__((visibility("hidden")))
@interface MNGuidanceManeuverView : XXUnknownSuperclass {
	BOOL _disallowMutation;
	BOOL _alerting;
	BOOL _disallowManeuversWithoutArt;
	MNJunction* _junction;
	int _maneuver;
	int _drivingSide;
	id<MNGuidanceManeuverViewTextureProvider> _textureProvider;
	int _framing;
	UIColor* _arrowColor;
	UIColor* _accentColor;
	XXStruct_psi9$D _arrowMetrics;
}
@property(assign, nonatomic) BOOL disallowManeuversWithoutArt;
@property(assign, nonatomic, getter=isAlerting) BOOL alerting;
@property(retain, nonatomic) UIColor* accentColor;
@property(retain, nonatomic) UIColor* arrowColor;
@property(assign, nonatomic) int framing;
@property(assign, nonatomic) XXStruct_psi9$D arrowMetrics;
@property(retain, nonatomic) MNJunction* junction;
@property(assign, nonatomic) int drivingSide;
@property(readonly, assign, nonatomic) int displayManeuver;
@property(assign, nonatomic) int maneuver;
-(void)disallowMutation;
-(void)drawRect:(CGRect)rect;
-(void)getAlertingClipPath:(id*)path strokePath:(id*)path2;
-(void)drawArrow:(id)arrow stroke:(id)stroke withVisibleWidth:(float)visibleWidth intersectionFillPath:(id)path intersectionStrokePath:(id)path5 referenceSize:(CGSize)size;
-(void)drawArrival:(int)arrival referenceSize:(CGSize)size;
-(CGAffineTransform)transformForDrawingPathsWithFrame:(CGRect)frame relativeToReferenceSize:(CGSize)referenceSize;
-(void)drawArrow:(id)arrow stroke:(id)stroke;
-(void)drawIntersectionStroke:(id)stroke forFill:(id)fill;
-(void)drawIntersectionFill:(id)fill;
-(BOOL)_maneuverIsDrawnByDrawRect;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame textureProvider:(id)provider;
-(id)initWithFrame:(CGRect)frame;
@end
