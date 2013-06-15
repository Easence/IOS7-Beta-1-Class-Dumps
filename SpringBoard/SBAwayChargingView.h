/* SBAwayChargingView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class SBBatteryChargingView, UIImageView;

__attribute__((visibility("hidden")))
@interface SBAwayChargingView : XXUnknownSuperclass {
	SBBatteryChargingView* _chargingView;
	SBBatteryChargingView* _headsetChargingView;
	UIImageView* _backgroundView;
	unsigned _animatingBatteries : 1;
	unsigned _updateAfterAnimation : 1;
	unsigned _showingDeviceBattery : 1;
	unsigned _showingHeadsetBattery : 1;
}
+(BOOL)shouldShowHeadsetBattery;
+(BOOL)shouldShowDeviceBattery;
+(CGSize)defaultSize;
+(id)backgroundImage;
-(void)_test:(id)test;
-(void)_batteryAnimationFinished:(id)finished;
-(void)_finishedHideForHideToSlide:(id)slide finished:(BOOL)finished context:(id)context;
-(void)_finishedSlideForSlideToReveal:(id)reveal finished:(BOOL)finished context:(id)context;
-(void)_finishedFadeForSwitch:(id)aSwitch finished:(BOOL)finished context:(id)context;
-(void)_slideBattery:(id)battery toHideBattery:(id)hideBattery animate:(BOOL)animate;
-(void)_slideBattery:(id)battery toShowBattery:(id)showBattery animate:(BOOL)animate;
-(void)_switchFromBattery:(id)battery toView:(id)view animate:(BOOL)animate;
-(CGPoint)_singleBatteryPositionForBattery:(id)battery;
-(CGPoint)_dualBatteryPositionForBattery:(id)battery;
-(void)hideHeadsetChargingView;
-(void)addHeadsetChargingView;
-(id)headsetChargingView;
-(void)hideChargingView;
-(void)addChargingView;
-(id)chargingView;
-(void)updateInterface:(BOOL)interface;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame awayView:(id)view;
@end
