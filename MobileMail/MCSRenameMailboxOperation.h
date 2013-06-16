/* MCSRenameMailboxOperation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MCSMailboxOperation.h"

@class MFMailboxUid, NSString;

__attribute__((visibility("hidden")))
@interface MCSRenameMailboxOperation : MCSMailboxOperation {
	MFMailboxUid* _mailboxToRename;
	NSString* _pendingName;
	NSString* _reasonForFailure;
}
@property(copy, nonatomic) NSString* reasonForFailure;
-(id)localizedErrorTitle;
-(id)localizedErrorDescription;
-(id)accountForErrorHandling;
-(id)mailboxParentForMove;
-(id)mailboxToMoveOrRename;
-(id)modifiedMailboxName;
-(BOOL)revert;
-(BOOL)commit;
-(void)dealloc;
-(id)initWithMailboxToRename:(id)rename toName:(id)name;
@end