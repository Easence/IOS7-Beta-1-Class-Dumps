/* SBBouncingItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIDynamicItem.h"


__attribute__((visibility("hidden")))
@interface SBBouncingItem : XXUnknownSuperclass <UIDynamicItem> {
	CGRect _bounds;
	CGPoint _center;
	float _multiplier;
	id _translateBlock;
}
@property(assign, nonatomic) CGAffineTransform transform;
@property(readonly, assign, nonatomic) CGRect bounds;
@property(assign, nonatomic) CGPoint center;
@property(copy) id translateBlock;
@property(assign) float multiplier;
-(void)setBounds:(CGRect)bounds;
-(void)dealloc;
@end
