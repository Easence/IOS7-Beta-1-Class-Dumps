/* ADCameraJSO.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AdSheet-Structs.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "ADCameraJSO_Bindings.h"
#import "ADJavaScriptObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ADCameraJSO : ADJavaScriptObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, ADCameraJSO_Bindings> {
	int _cameraDevice;
	NSString* _currentPictureURI;
	NSString* _internalPictureURI;
}
@property(assign, nonatomic) int cameraDevice;
@property(copy, nonatomic) NSString* internalPictureURI;
@property(copy, nonatomic) NSString* currentPictureURI;
+(void)initializeInContext:(id)context;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(void)_finishWithSuccess:(BOOL)success;
-(void)present:(id)present;
-(void)_presentCamera;
-(void)_setCurrentImage:(CGImageRef)image;
-(id)initWithDelegate:(id)delegate impressionController:(id)controller;
-(void)dealloc;
@end