/* AlarmScheduleLayoutAttributes.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface AlarmScheduleLayoutAttributes : XXUnknownSuperclass {
	NSString* _alarmId;
	int _day;
	BOOL _active;
	BOOL _showsTitle;
	NSString* _title;
	int _lineColor;
	int _titlePosition;
}
@property(assign, nonatomic) int titlePosition;
@property(assign, nonatomic) int lineColor;
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic) BOOL showsTitle;
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) int day;
@property(retain, nonatomic) NSString* alarmId;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isEqual:(id)equal;
@end
