/* SBCCQuickLaunchSectionController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUIControlCenterButtonDelegate.h"
#import "SBControlCenterSectionViewController.h"

@class SBControlCenterButton, NSObject, AVFlashlight, NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface SBCCQuickLaunchSectionController : SBControlCenterSectionViewController <SBUIControlCenterButtonDelegate> {
	SBControlCenterButton* _torchButton;
	SBControlCenterButton* _clockButton;
	SBControlCenterButton* _calculatorButton;
	SBControlCenterButton* _cameraButton;
	NSMutableArray* _buttons;
	AVFlashlight* _flashlight;
	BOOL _ccVisible;
	NSObject<OS_dispatch_queue>* _flashlightQueue;
	BOOL _flashlightOn;
}
@property(assign, nonatomic, getter=isFlashlightOn) BOOL flashlightOn;
+(Class)viewClass;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)_updateTorchButtonState;
-(void)_enableTorch:(BOOL)torch;
-(void)buttonTapped:(id)tapped;
-(id)_bundleIDForButton:(id)button;
-(void)viewWillAppear:(BOOL)view;
-(void)noteControlCenterDidDismiss;
-(void)noteControlCenterWillPresent;
-(void)_updateFlashlightPowerState;
-(void)viewDidLoad;
-(void)noteSettingsDidUpdate:(id)noteSettings;
-(id)view;
-(CGSize)contentSizeForOrientation:(int)orientation;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end
