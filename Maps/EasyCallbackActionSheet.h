/* EasyCallbackActionSheet.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface EasyCallbackActionSheet : XXUnknownSuperclass <UIActionSheetDelegate> {
	id _willPresentCallback;
	id _didPresentCallback;
	id _willDismissCallback;
	id _didDismissCallback;
}
@property(copy, nonatomic) id didDismissCallback;
@property(copy, nonatomic) id willDismissCallback;
@property(copy, nonatomic) id didPresentCallback;
@property(copy, nonatomic) id willPresentCallback;
+(id)actionSheet;
-(void)actionSheet:(id)sheet didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet willDismissWithButtonIndex:(int)buttonIndex;
-(void)didPresentActionSheet:(id)sheet;
-(void)willPresentActionSheet:(id)sheet;
-(void)dealloc;
@end
