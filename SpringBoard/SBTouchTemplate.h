/* SBTouchTemplate.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SBPolygon;

__attribute__((visibility("hidden")))
@interface SBTouchTemplate : XXUnknownSuperclass {
	SBPolygon* m_template;
	SBPolygon* m_candidate;
	unsigned m_transformType;
	float m_acceptFactor;
}
@property(readonly, assign, nonatomic) unsigned pointCount;
@property(assign, nonatomic) float acceptFactor;
@property(assign, nonatomic) unsigned transformType;
-(BOOL)acceptPolygon:(id)polygon;
-(BOOL)acceptPoints:(CGPoint*)points count:(unsigned)count;
-(void)dealloc;
-(id)initWithPoints:(CGPoint*)points count:(unsigned)count;
@end
