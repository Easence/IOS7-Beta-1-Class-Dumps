/* MailChangeManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileMail-Structs.h"

@class MailboxHierarchyTree, MCSChange, MFConditionLock, MFInvocationQueue, NSMutableArray, NSUndoManager;

__attribute__((visibility("hidden")))
@interface MailChangeManager : XXUnknownSuperclass {
	MFConditionLock* _processingLock;
	NSMutableArray* _pendingChanges;
	NSMutableArray* _committedChanges;
	MCSChange* _currentChange;
	MFInvocationQueue* _invocationQueue;
	MailboxHierarchyTree* _lastCalculatedMailboxTree;
	NSUndoManager* _undoManager;
	BOOL _isUndoing;
	CFDictionaryRef _mailboxPreChangeUnreadCounts;
	CFDictionaryRef _mailboxPostChangeUnreadCounts;
}
@property(readonly, assign) NSUndoManager* undoManager;
+(id)sharedChangeManager;
-(void)purgeCommittedChanges;
-(BOOL)mailboxHasSubMailboxes:(id)mailboxes;
-(id)displayNameUsingSpecialNamesForMailbox:(id)mailbox;
-(id)displayNameForMailbox:(id)mailbox;
-(int)levelForMailbox:(id)mailbox;
-(id)parentForMailbox:(id)mailbox;
-(id)genericMailboxUidsSortedForAccount:(id)account includingLocals:(BOOL)locals excludingMailbox:(id)mailbox;
-(id)allMailboxUidsSortedWithSpecialsAtTopForAccount:(id)account includingLocals:(BOOL)locals client:(id)client outbox:(id)outbox;
-(void)_modifyMailboxesForMailboxTree:(id)mailboxTree forChange:(id)change;
-(unsigned)unreadCountForMailbox:(id)mailbox;
-(unsigned)unreadCountForSource:(id)source;
-(unsigned)unreadCountForMailbox:(id)mailbox withListener:(id)listener;
-(unsigned)unreadCountForMailbox:(id)mailbox withListener:(id)listener criteria:(id)criteria;
-(unsigned)_unreadCountAfterChangesForMailbox:(id)mailbox withKey:(id)key criteria:(id)criteria;
-(void)_mailMessageStoreMessagesCompacted:(id)compacted;
-(void)_mailboxUserInfoDidChange:(id)_mailboxUserInfo;
-(void)_updateUnreadCountForMailbox:(id)mailbox;
-(void)_invalidateUnreadCountsForKey:(id)key onlyPostChange:(BOOL)change;
-(id)description;
-(void)_revertCommittedChange:(id)change;
-(id)applyPendingChangesToMessageInfos:(id)messageInfos;
-(id)applyPendingChangesToMessages:(id)messages;
-(id)applyPendingChangesToObjects:(id)objects;
-(id)applyCommittedChanges:(id)changes toObjects:(id)objects;
-(void)processPendingChanges;
-(void)addChange:(id)change;
-(void)resume;
-(void)pause;
-(void)dealloc;
-(id)init;
@end
