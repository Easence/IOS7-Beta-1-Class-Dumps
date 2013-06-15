/* SBTodayTableDateHeader.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBTodayTableDateHeader : XXUnknownSuperclass {
	BOOL _shouldSuperscriptOrdinal;
	NSString* _dateString;
	NSRange _ordinalRange;
}
@property(readonly, assign) BOOL shouldSuperscriptOrdinal;
@property(readonly, assign) NSRange ordinalRange;
@property(readonly, assign) NSString* dateString;
+(id)dateHeaderWithDate:(id)date locale:(id)locale;
-(void)dealloc;
-(id)initWithDateString:(id)dateString ordinalRange:(NSRange)range shouldSuperscriptOrdinal:(BOOL)ordinal;
@end
