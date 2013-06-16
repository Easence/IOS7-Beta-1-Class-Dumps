/* MNWalkGuidanceManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "MNGuidanceManager.h"


__attribute__((visibility("hidden")))
@interface MNWalkGuidanceManager : MNGuidanceManager {
}
-(BOOL)_updateConsiderExecuteAnnouncement:(id)announcement location:(id)location;
-(void)_updatePrepareForNextStep;
-(id)_combinedGuidanceForStep:(id)step withType:(int)type;
-(double)_adjustedDistanceToRoute:(id)route;
-(double)_adjustedVehicleSpeed:(id)speed;
@end
