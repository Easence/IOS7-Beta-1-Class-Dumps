/* CameraApplication.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Camera-Structs.h"

@class PUApplicationCameraViewController;

__attribute__((visibility("hidden")))
@interface CameraApplication : XXUnknownSuperclass {
	PUApplicationCameraViewController* __cameraApplicationViewController;
}
@property(readonly, assign, nonatomic) PUApplicationCameraViewController* _cameraApplicationViewController;
-(void)photosPreferencesChanged;
-(void)_updateSharedPhotoStreamProgressDisplay;
-(void)_updatePhotoStreamProgressDisplay;
-(BOOL)shouldAllowSBAlertSupression;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)interfaceOrientation;
-(void)sharedFinishedLaunching:(BOOL)launching;
-(void)prepareForDefaultImageSnapshotForScreen:(id)screen;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)setupAppUI:(BOOL)ui;
-(BOOL)isShowingAppUI;
-(void)applicationWillBeginSuspendAnimation:(id)application;
-(BOOL)isCameraApp;
-(void)takePictureTestFinished;
-(void)runTakeHDRPictureTest:(id)test;
-(void)runTakePictureTest:(id)test;
-(void)_runTakeGenericPictureTest:(id)test withHDREnabled:(BOOL)hdrenabled;
-(void)startSwitchTest;
-(void)_previewStarted;
-(void)finishedTest:(id)test extraResults:(id)results;
-(BOOL)runTest:(id)test options:(id)options;
@end
