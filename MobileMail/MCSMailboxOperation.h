/* MCSMailboxOperation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MCSOperation.h"


__attribute__((visibility("hidden")))
@interface MCSMailboxOperation : MCSOperation {
}
-(id)localizedErrorTitle;
-(id)localizedErrorDescription;
-(id)accountForErrorHandling;
-(id)mailboxParentForMove;
-(id)mailboxToMoveOrRename;
-(id)modifiedMailboxName;
-(id)mailboxToRemove;
-(BOOL)revert;
-(BOOL)commit;
-(id)applyPendingChangeToObjects:(id)objects;
@end