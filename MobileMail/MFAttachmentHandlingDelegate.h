/* MFAttachmentHandlingDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MFAttachmentHandlingDelegate <NSObject>
-(void)showSelectedAttachment:(id)attachment;
-(void)showMenuForSelectedAttachment:(id)selectedAttachment;
-(void)saveAllAttachments;
-(id)localizedTitleForSaveAllAttachmentsAction;
-(BOOL)canSaveAllAttachmentsInContext:(int)context;
@end
