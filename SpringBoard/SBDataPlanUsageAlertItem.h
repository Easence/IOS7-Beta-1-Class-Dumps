/* SBDataPlanUsageAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDataPlanAccountAlertItem.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface SBDataPlanUsageAlertItem : SBDataPlanAccountAlertItem {
	NSNumber* _remainingPortion;
}
@property(retain, nonatomic) NSNumber* remainingPortion;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)dealloc;
-(id)initWithAccountURL:(id)accountURL usage:(id)usage;
@end
