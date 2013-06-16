/* NSObject.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Copilot-Structs.h"


@protocol NSObject
-(id)description;
-(unsigned)retainCount;
-(id)autorelease;
-(oneway void)release;
-(id)retain;
-(BOOL)respondsToSelector:(SEL)selector;
-(BOOL)conformsToProtocol:(id)protocol;
-(BOOL)isMemberOfClass:(Class)aClass;
-(BOOL)isKindOfClass:(Class)aClass;
-(BOOL)isProxy;
-(id)performSelector:(SEL)selector withObject:(id)object withObject:(id)object3;
-(id)performSelector:(SEL)selector withObject:(id)object;
-(id)performSelector:(SEL)selector;
-(NSZone*)zone;
-(id)self;
-(Class)class;
-(Class)superclass;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
@optional
-(id)debugDescription;
@end
