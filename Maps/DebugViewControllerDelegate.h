/* DebugViewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol DebugViewControllerDelegate <NSObject>
@property(assign, nonatomic) BOOL locationPulseEnabled;
@property(assign, nonatomic) BOOL hasShownWalkingNavModeAdvisory;
@property(assign, nonatomic) BOOL hasShownDrivingNavModeAdvisory;
-(void)debugControllerDidFinish:(id)debugController;
-(void)debugController:(id)controller choseTracePlayer:(id)player startNav:(BOOL)nav;
-(id)visibleWorldViewForDebugController:(id)debugController;
-(id)visibleMapViewForDebugController:(id)debugController;
@end
