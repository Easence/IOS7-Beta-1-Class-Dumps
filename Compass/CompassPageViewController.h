/* CompassPageViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "CompassPage.h"
#import "Compass-Structs.h"

@class CrosshairLevelView, CrosshairView, UIButton, CLLocation, UILabel, CMMotionManager, CalibrationViewController, CompassView;

__attribute__((visibility("hidden")))
@interface CompassPageViewController : XXUnknownSuperclass <CompassPage> {
	CompassView* _compassView;
	CrosshairLevelView* _crosshairLevelView;
	CrosshairView* _crosshairView;
	CalibrationViewController* _calibrationController;
	UIButton* _coordinatesButton;
	UILabel* _coordinatesLabel;
	UILabel* _altitudeLabel;
	UILabel* _directionLabel;
	UILabel* _degreesLabel;
	UILabel* _primaryPlaceLabel;
	UILabel* _secondaryPlaceLabel;
	CLLocation* _userLocation;
	double _currentCompassAngle;
	BOOL _recentlyCalibrated;
	BOOL _dismissingCalibrationController;
	BOOL _shouldGeocode;
	CMMotionManager* _manager;
	int _currentDisplayHeading;
	float _headingFilter;
	BOOL _showCalibration;
	BOOL _timeoutDisabled;
	BOOL _calibrationDisabled;
	BOOL _shouldCompleteTics;
}
@property(readonly, assign, nonatomic) BOOL isShowingCalibration;
@property(retain, nonatomic) CLLocation* userLocation;
+(void)initialize;
-(void)hideCalibrationViewIfNecessary;
-(void)displayCalibrationViewIfNecessary;
-(void)dismissCalibration;
-(void)showCalibration;
-(void)_openMaps;
-(void)_updatePlaceLabels;
-(void)_updateDirectionLabel;
-(void)_updateDegreesLabel;
-(void)_updateCoordinateLabel;
-(void)_updateHeadingLabels;
-(void)setCrosshairLevelForData:(Vec3Imp<double>)data;
-(void)setCompassToAngle:(double)angle;
-(void)updateDisplay:(id)display;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)userDefaultsChanged:(id)changed;
-(void)startMotionManager;
-(void)dealloc;
-(id)calibrationController;
-(id)init;
@end
