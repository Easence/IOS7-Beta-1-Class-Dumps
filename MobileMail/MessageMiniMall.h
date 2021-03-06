/* MessageMiniMall.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MessageSelectionDataSource.h"
#import "MiniMallSourceBulkOperationsDelegate.h"
#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableSet, MFMessageCriterion, NSMutableArray, MFActivityMonitor, SearchOrderCache, MFMailMessage, NSArray, MessageSelectionStrategy, NSCache;

__attribute__((visibility("hidden")))
@interface MessageMiniMall : XXUnknownSuperclass <MessageSelectionDataSource, MiniMallSourceBulkOperationsDelegate> {
	NSMutableSet* _sources;
	NSMutableSet* _emptiedSources;
	NSMutableArray* _messageInfos;
	CFDictionaryRef _conversations;
	NSCache* _sendersByConversation;
	unsigned _threadedMessageCount;
	MFActivityMonitor* _fetchActivity;
	BOOL _userRefresh;
	MessageSelectionStrategy* _selectionStrategy;
	MFMailMessage* _currentMessage;
	int _lastChangeDirection;
	MFMessageCriterion* _searchCriterion;
	NSArray* _terms;
	SearchOrderCache* _orderValueCache;
	unsigned _searchOptions;
	id _comparator;
}
@property(copy, nonatomic) id comparator;
-(id)_orderValueCache;
-(void)_dumpDiagnosticInformation:(id)information;
-(BOOL)_hasOnlyThreadedSources;
-(BOOL)allSourcesThreadMessages;
-(unsigned)sourceType;
-(BOOL)isInCombinedMailboxOfType:(int)type;
-(BOOL)isInCombinedInbox;
-(BOOL)shouldPopOnZeroMessages;
-(BOOL)archiveByDefaultForMessage:(id)message;
-(BOOL)archivesByDefault;
-(BOOL)supportsArchivingForMessage:(id)message;
-(BOOL)supportsArchiving;
-(BOOL)deleteMovesToTrashForMessage:(id)message;
-(BOOL)deleteMovesToTrash;
-(id)_copySources;
-(void)_filterTaskCompletedWithContext:(id)context;
-(id)_removeMessages:(id)messages;
-(void)_synchronouslyFilterOutMessages:(id)messages fromSource:(id)source;
-(void)_synchronouslyFilterInMessages:(id)messages fromSource:(id)source;
-(BOOL)ensureWeHaveLoadedMessages;
-(void)_protectedDataWasReconciled:(id)reconciled;
-(void)_protectedDataWillBecomeUnavailable:(id)_protectedData;
-(void)_sourceDidFinishSearch:(id)_source;
-(void)_sourceDidReload:(id)_source;
-(void)_conversationHasMerged:(id)merged;
-(void)_messageFlagsChanged:(id)changed;
-(void)_messagesCompacted:(id)compacted;
-(void)_messagesAdded:(id)added;
-(void)_checkServerCount:(id)count;
-(void)flushCaches;
-(void)resume;
-(void)suspend;
-(id)_searchOrderComparator;
-(BOOL)areAnySourcesSearching;
-(void)setSearchCriterion:(id)criterion terms:(id)terms options:(unsigned)options;
-(void)_addChangeSetToManager:(id)manager;
-(void)markAllMessagesAsNotViewed;
-(void)markAllMessagesAsViewed;
-(void)markAllMessagesAsNotFlagged;
-(void)markAllMessagesAsFlagged;
-(void)moveAllMessagesToMailbox:(id)mailbox;
-(void)markAllMessagesAsDeletedOrArchived:(unsigned)archived;
-(void)didDeleteAllMessagesInSource:(id)source;
-(void)markMessages:(id)messages asDeletedOrArchived:(unsigned)archived;
-(void)transferMessages:(id)messages toMailbox:(id)mailbox;
-(id)junkMailboxMessagesInMessages:(id)messages;
-(id)titleWithUnreadCount:(unsigned)unreadCount options:(unsigned)options;
-(unsigned)unreadCountForDisplay;
-(unsigned)serverUnreadCount;
-(unsigned)serverMessageCount;
-(unsigned)localMessageCount;
-(unsigned)messageCount;
-(id)messageForMessageID:(id)messageID;
-(void)setLastViewedMessage:(id)message;
-(id)lastViewedMessage;
-(void)getLastViewedMessage:(id*)message date:(id*)date;
-(id)defaultMessageIncludingUnread:(BOOL)unread;
-(id)messageToSelectFromMessage:(id)message withDirection:(int)direction;
-(id)messageToSelectAfterDeletedMessages:(id)selectAfterDeletedMessages;
-(id)messageToSelectAfterDeletedMessage:(id)selectAfterDeletedMessage;
-(void)_currentMessageRemovedWithMessageToSelect:(id)select;
-(int)lastChangeDirection;
-(void)setLastChangeDirection:(int)direction;
-(unsigned)tableIndexOfCurrentMessage;
-(void)setCurrentMessage:(id)message;
-(id)currentMessage;
-(id)messageAtFlattenedIndex:(unsigned)flattenedIndex;
-(unsigned)tableIndexOfFlattenedCurrentMessage;
-(unsigned)tableIndexOfConversationContainingMessage:(id)conversationContainingMessage;
-(unsigned)tableIndexOfMessageOrConversation:(id)messageOrConversation;
-(unsigned)_tableIndexOfMessageOrConversation:(id)messageOrConversation conversationMustContainMessage:(BOOL)message;
-(unsigned)flattenedIndexOfWhereMessageShouldGo:(id)flattenedIndexOfWhereMessage;
-(unsigned)flattenedIndexOfMessage:(id)message;
-(id)bulletinsContexts;
-(CFDictionaryRef)copySendersByLibraryIDForConversation:(long long)conversation;
-(id)_sourceForMessageInfo:(id)messageInfo;
-(id)_cachedMessageForMessageInfo:(id)messageInfo;
-(id)_messageForMessageInfo:(id)messageInfo cache:(BOOL)cache;
-(id)messageForMessageInfo:(id)messageInfo;
-(id)_copyAllMessageInfos;
-(id)copyAllMessages;
-(id)conversationContainingMessage:(id)message;
-(unsigned)tableIndexOfOldestMessageInSource:(id)source;
-(unsigned)tableIndexOfConversationWithID:(long long)anId;
-(unsigned)tableIndexOfMessage:(id)message;
-(void)getIndex:(unsigned*)index andCount:(unsigned*)count ofMessageInConversation:(id)conversation;
-(unsigned)messageCountForConversationWithMessage:(id)message;
-(unsigned)messageCountAtTableIndex:(unsigned)tableIndex;
-(id)sourcesForMessagesAtTableIndex:(unsigned)tableIndex;
-(id)messagesAtTableIndex:(unsigned)tableIndex;
-(id)messageAtTableIndex:(unsigned)tableIndex;
-(void)getSourceStateHasUnread:(BOOL*)unread hasUnflagged:(BOOL*)unflagged;
-(void)getConversationStateAtTableIndex:(unsigned)tableIndex hasUnread:(BOOL*)unread hasUnflagged:(BOOL*)unflagged;
-(void)_nts_getConversationStateFromNewestMessageInfo:(id)newestMessageInfo shouldThread:(BOOL)thread hasUnread:(BOOL*)unread hasUnflagged:(BOOL*)unflagged;
-(void)updateEntry:(id)entry atTableIndex:(unsigned)tableIndex addressList:(id*)list;
-(void)_purgeCachedMessageInfosWithReason:(id)reason;
-(void)_handleFetchCompleted:(id)completed;
-(void)_fetchCompleted:(id)completed;
-(void)_checkForNewMailAndNotifyOnFailure:(BOOL)newMailAndNotifyOnFailure;
-(void)_checkForNewMailAndNotifyOnFailureBackground:(BOOL)newMailAndNotifyOnFailureBackground userRefresh:(BOOL)refresh foregroundRequest:(BOOL)request sourcesToCheck:(id)check remoteID:(id)anId;
-(id)currentRemoteIDForMailbox:(id)mailbox;
-(void)checkForNewMailAndNotifyOnFailure:(BOOL)newMailAndNotifyOnFailure userRefresh:(BOOL)refresh;
-(void)trackFetchVisibleStoresActivity:(id)activity;
-(id)sourceForMailbox:(id)mailbox;
-(id)sources;
-(void)removeAllSources;
-(void)addSource:(id)source;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(id)initWithObserver:(id)observer;
-(void)dealloc;
-(id)init;
-(id)fetchActivity;
-(unsigned)threadedCount;
@end
