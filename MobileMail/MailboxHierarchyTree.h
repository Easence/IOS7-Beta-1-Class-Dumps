/* MailboxHierarchyTree.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MailboxHierarchyNode, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MailboxHierarchyTree : XXUnknownSuperclass {
	MailboxHierarchyNode* _rootMailboxNode;
	NSMutableDictionary* _nodesByMailbox;
	BOOL _mailboxStructureHasBeenCached;
}
-(BOOL)mailboxHasSubMailboxes:(id)mailboxes;
-(id)displayNameForMailbox:(id)mailbox;
-(void)setDisplayName:(id)name forMailbox:(id)mailbox;
-(int)levelForMailbox:(id)mailbox;
-(id)parentForMailbox:(id)mailbox;
-(void)moveMailbox:(id)mailbox toParent:(id)parent;
-(void)removeNodeForMailbox:(id)mailbox;
-(id)flattenedMailboxTreeRepresentation;
-(void)_insertMailboxUidsFlattenedFromMailboxNode:(id)mailboxNode intoArray:(id)array currentLevel:(int)level;
-(void)_addChildNode:(id)node toParentNode:(id)parentNode;
-(id)addChildMailbox:(id)mailbox forMailboxNode:(id)mailboxNode;
-(id)rootMailboxNode;
-(void)dealloc;
-(id)initWithRootMailbox:(id)rootMailbox;
@end
