/* SBPolygon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBPolygon : XXUnknownSuperclass {
	int m_pointCount;
	CGPoint m_points[5];
	unsigned m_pathIDs[5];
	float m_weights[5];
	CGPoint m_centroid;
	CGPoint m_weightedCentroid;
	unsigned m_baseLeftVertex;
	unsigned m_bottomRightVertex;
}
@property(assign, nonatomic) CGPoint weightedCentroid;
@property(assign, nonatomic) CGPoint centroid;
@property(readonly, assign, nonatomic) BOOL isLeftHanded;
@property(readonly, assign, nonatomic) int pointCount;
+(BOOL)candidate:(id)candidate matchesTemplate:(id)aTemplate transforms:(int)transforms acceptFactor:(float)factor;
-(float)meanRadius;
-(float)meanFingertipRowAngle;
-(float)baseOrientation;
-(CGPoint)calculateWeightedCentroid;
-(CGPoint)calculateCentroid;
-(float)findLongestOutsideEdge;
-(void)sortAlongOutsideEdge;
-(void)flipHorizontally;
-(void)scale:(float)scale;
-(void)rotate:(float)rotate;
-(unsigned)thumbIndex;
-(float)height;
-(float)width;
-(float)weightAtIndex:(int)index;
-(void)endPointUpdate;
-(void)addPoint:(CGPoint)point pathIndex:(unsigned)index;
-(void)addPoint:(CGPoint)point;
-(void)beginPointUpdate;
-(void)clear;
-(void)makeLike:(id)like;
-(void)commonInit;
@end
