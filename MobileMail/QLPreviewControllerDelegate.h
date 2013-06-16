/* QLPreviewControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "NSObject.h"


@protocol QLPreviewControllerDelegate <NSObject>
@optional
-(id)previewController:(id)controller transitionImageForPreviewItem:(id)previewItem contentRect:(CGRect*)rect;
-(CGRect)previewController:(id)controller frameForPreviewItem:(id)previewItem inSourceView:(id*)sourceView;
-(BOOL)previewController:(id)controller shouldOpenURL:(id)url forPreviewItem:(id)previewItem;
-(void)previewControllerDidDismiss:(id)previewController;
-(void)previewControllerWillDismiss:(id)previewController;
@end
