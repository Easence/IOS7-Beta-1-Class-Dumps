/* GKBubbleLocation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GKBubbleLocation : XXUnknownSuperclass {
	float _z;
	CGPoint _point;
}
@property(assign, nonatomic) float z;
@property(assign, nonatomic) CGPoint point;
+(id)locationAtPoint:(CGPoint)point z:(float)z;
@end
