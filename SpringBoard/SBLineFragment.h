/* SBLineFragment.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBLineFragment : XXUnknownSuperclass {
	unsigned _index;
	float _lineWidth;
	NSRange _range;
}
@property(assign, nonatomic) float lineWidth;
@property(assign, nonatomic) NSRange range;
@property(assign, nonatomic) unsigned index;
+(id)fragmentWithIndex:(unsigned)index length:(unsigned)length lineWidth:(float)width;
-(id)description;
@end
