/* AlarmScheduleLayoutData.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface AlarmScheduleLayoutData : XXUnknownSuperclass {
	NSString* _alarmId;
	int _hour;
	int _minute;
	unsigned _daySetting;
	BOOL _active;
	BOOL _snoozed;
	NSString* _title;
	float _timePositionForItems;
	int _daysForItems[7];
	int _cellLayoutForItems[7];
}
@property(retain, nonatomic) NSString* title;
@property(assign, nonatomic, getter=isSnoozed) BOOL snoozed;
@property(assign, nonatomic, getter=isActive) BOOL active;
@property(assign, nonatomic) unsigned daySetting;
@property(readonly, assign, nonatomic) int minute;
@property(readonly, assign, nonatomic) int hour;
@property(retain, nonatomic) NSString* alarmId;
+(BOOL)doesTimePosition:(float)position overlapWithTimePosition:(float)timePosition overlapPercent:(float)percent;
-(id)debugDescription;
-(id)description;
-(int)visualFirstItemWithLayout:(id)layout;
-(id)layout:(id)layout itemsInDayRange:(XXStruct_K5nmsA)dayRange;
-(int)layout:(id)layout itemForDay:(int)day;
-(CGRect)layout:(id)layout frameForItem:(int)item;
-(BOOL)doesOverlapWithLayoutData:(id)layoutData fullOverlapOnly:(BOOL)only;
-(int)layout:(id)layout dayForItem:(int)item;
-(id)allDaysForLayout:(id)layout;
-(void)setCellLayout:(int)layout forDay:(int)day;
-(int)cellLayoutForDay:(int)day;
-(int)compareToHour:(int)hour minute:(int)minute;
-(int)compareToTime:(id)time;
-(void)setHour:(int)hour minute:(int)minute;
-(void)reset;
-(void)dealloc;
-(id)init;
@end
