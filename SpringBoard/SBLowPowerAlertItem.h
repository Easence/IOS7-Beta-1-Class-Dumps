/* SBLowPowerAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBLowPowerAlertItem : XXUnknownSuperclass {
	unsigned _talkLevel;
}
+(void)setBatteryLevel:(unsigned)level;
+(BOOL)_shouldIgnoreChangeToBatteryLevel:(unsigned)batteryLevel;
+(unsigned)_thresholdForLevel:(unsigned)level;
+(void)initialize;
+(void)saveLowBatteryLogWithCapacity:(int)capacity voltage:(int)voltage;
+(id)systemVersionDescription;
-(BOOL)undimsScreen;
-(BOOL)shouldShowInEmergencyCall;
-(BOOL)shouldShowInLockScreen;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)willPresentAlertView:(id)view;
-(id)initWithLevel:(unsigned)level;
-(id)init;
@end
