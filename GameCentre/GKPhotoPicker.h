/* GKPhotoPicker.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import "UIImagePickerControllerDelegate.h"
#import "UIActionSheetDelegate.h"
#import "UINavigationControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIPopoverControllerDelegate.h"

@class UIPopoverController, UIView, UIViewController, UIActionSheet, UIAlertView, UIImagePickerController;

__attribute__((visibility("hidden")))
@interface GKPhotoPicker : XXUnknownSuperclass <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, UIActionSheetDelegate> {
	BOOL _cancelled;
	UIViewController* _viewController;
	UIView* _view;
	UIActionSheet* _actionSheet;
	UIPopoverController* _photoPopover;
	UIAlertView* _alert;
	UIImagePickerController* _imagePicker;
	id _completionHandler;
	int _chooseButtonIndex;
	int _takeButtonIndex;
	int _pasteButtonIndex;
	UIEdgeInsets _popoverInsets;
	UIEdgeInsets _actionSheetInsets;
}
@property(assign, nonatomic) int pasteButtonIndex;
@property(assign, nonatomic) int takeButtonIndex;
@property(assign, nonatomic) int chooseButtonIndex;
@property(assign, nonatomic) BOOL cancelled;
@property(retain, nonatomic) UIImagePickerController* imagePicker;
@property(retain, nonatomic) UIAlertView* alert;
@property(retain, nonatomic) UIPopoverController* photoPopover;
@property(retain, nonatomic) UIActionSheet* actionSheet;
@property(copy, nonatomic) id completionHandler;
@property(assign, nonatomic) UIEdgeInsets actionSheetInsets;
@property(assign, nonatomic) UIEdgeInsets popoverInsets;
@property(retain, nonatomic) UIView* view;
@property(retain, nonatomic) UIViewController* viewController;
-(void)didEnterBackground;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)imagePickerControllerDidCancel:(id)imagePickerController;
-(void)imagePickerController:(id)controller didFinishPickingMediaWithInfo:(id)info;
-(id)editedImageFromImage:(id)image cropRect:(CGRect)rect;
-(void)dismissImagePickerAnimated:(BOOL)animated;
-(void)presentImagePickerForSourceType:(int)sourceType;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)pick;
-(void)_pick;
-(void)takePhoto;
-(void)choosePhoto;
-(void)deletePhoto;
-(void)showPopover;
-(void)showActionSheet;
-(void)setPhoto:(id)photo;
-(void)cancel;
-(void)finish;
-(void)dealloc;
-(void)cancelAlertWithoutDelegateCallback;
-(id)initWithViewController:(id)viewController photoView:(id)view;
@end
