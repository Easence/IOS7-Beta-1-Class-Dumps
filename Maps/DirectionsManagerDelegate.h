/* DirectionsManagerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "NSObject.h"


@protocol DirectionsManagerDelegate <NSObject>
-(void)directionsManagerUpdatedETA:(id)eta;
-(void)directionsManagerDidFailToRecalculateRoute:(id)directionsManager;
-(void)directionsManagerDidFailToReceiveRoute:(id)directionsManager;
-(void)directionsManagerWillRecalculateRoute:(id)directionsManager;
-(void)directionsManagerHasArrived:(id)arrived;
-(void)directionsManagerHideSecondaryStep:(id)step;
-(void)directionsManager:(id)manager didChangeNavigatorState:(int)state;
-(void)directionsManager:(id)manager displaySecondaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)directionsManager:(id)manager displayPrimaryStepManeuverType:(int)type junctionType:(int)type3 junctionElements:(XXStruct_DtYHXC*)elements count:(unsigned long)count instructions:(id)instructions shorterAlternativeInstructions:(id)instructions7 shieldType:(int)type8 shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)directionsManager:(id)manager remainingTime:(double)time remainingDistance:(double)distance distanceUntilManeuver:(double)maneuver timeUntilManeuver:(double)maneuver5;
-(void)directionsManager:(id)manager proceedToRouteDistance:(double)routeDistance displayString:(id)string remainingTime:(double)time remainingDistance:(double)distance signColor:(int)color;
@end