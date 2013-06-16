/* OpenWithAppUIActivity.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "LSOpenResourceOperationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, LSApplicationProxy;

__attribute__((visibility("hidden")))
@interface OpenWithAppUIActivity : XXUnknownSuperclass <LSOpenResourceOperationDelegate> {
	LSApplicationProxy* _appProxy;
	NSString* _filePath;
}
-(void)openResourceOperation:(id)operation didFinishCopyingResource:(id)resource;
-(void)performActivity;
-(BOOL)canPerformWithActivityItems:(id)activityItems;
-(id)_activityImage;
-(id)activityTitle;
-(id)activityType;
-(void)dealloc;
-(id)initWithApplicationIdentifier:(id)applicationIdentifier andFilePath:(id)path;
@end
