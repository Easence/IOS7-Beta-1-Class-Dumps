/* SBWindow.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBWindow : XXUnknownSuperclass {
	int _jailBehavior;
}
@property(readonly, assign, nonatomic) UIEdgeInsets jailInsets;
+(CGRect)_actualBoundsForScreen:(id)screen withJailBehavior:(int)jailBehavior;
+(UIEdgeInsets)_jailInsetsForScreen:(id)screen;
-(BOOL)_isClippedByScreenJail;
-(BOOL)_isConstrainedByScreenJail;
-(void)setAlpha:(float)alpha;
-(void)setScreen:(id)screen;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithScreen:(id)screen jailBehavior:(int)behavior;
-(void)setAlphaAndObeyBecauseIAmTheWindowManager:(float)manager;
@end
