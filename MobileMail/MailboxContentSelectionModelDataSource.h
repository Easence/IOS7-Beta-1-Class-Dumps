/* MailboxContentSelectionModelDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MailboxContentSelectionModelDataSource <NSObject>
-(id)sourcesForMessagesAtTableIndexPath:(id)tableIndexPath;
-(id)sources;
-(void)getSourceStateHasUnread:(BOOL*)unread hasUnflagged:(BOOL*)unflagged;
-(void)getConversationStateAtTableIndexPath:(id)tableIndexPath hasUnread:(BOOL*)unread hasUnflagged:(BOOL*)unflagged;
-(id)messagesAtTableIndexPath:(id)tableIndexPath;
-(unsigned)messageCountAtTableIndexPath:(id)tableIndexPath;
@end
