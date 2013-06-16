/* MFVIPSendersLibrary.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MFMailMessageLibraryDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MFMailMessageLibrary, MFEmailSet, NSMutableDictionary, NSUbiquitousKeyValueStore, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MFVIPSendersLibrary : XXUnknownSuperclass <MFMailMessageLibraryDelegate> {
	NSObject<OS_dispatch_queue>* _addressBookQueue;
	void* _addressBook;
	int _addressBookResetCount;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _vipSendersByReference;
	MFEmailSet* _vipSenderAddresses;
	NSUbiquitousKeyValueStore* _cloudStore;
	MFMailMessageLibrary* _library;
	NSObject<OS_dispatch_queue>* _pendingAddressQueue;
	MFEmailSet* _pendingAdds;
	MFEmailSet* _pendingRemoves;
}
+(id)defaultMessageLibrary;
+(id)defaultInstance;
-(void)_syncVIPSender:(id)sender withStore:(id)store;
-(BOOL)_mergeRemoteChanges:(id)changes fromStore:(id)store;
-(id)_referenceForVIPWithSubsetOfAddresses:(id)addresses;
-(void)_storeChangedExternally:(id)externally;
-(BOOL)_synchronize;
-(id)senderForEmails:(id)emails andDisplayNames:(id)names;
-(BOOL)deleteVIPSendersWithUniqueIdentifiers:(id)uniqueIdentifiers error:(id*)error;
-(BOOL)saveVIPSenders:(id)senders error:(id*)error;
-(id)allVIPEmailAddressesCriterion;
-(id)allVIPEmailAddresses;
-(id)allVIPSenders;
-(BOOL)hasVIPSenders;
-(void)_postNotificationsForInserts:(id)inserts updates:(id)updates deletes:(id)deletes;
-(id)_copyAllVIPEmailAddresses;
-(id)_copyAllVIPSenders;
-(void)_enumerateVIPSenders:(id)senders;
-(id)_copyVIPSenderWithUniqueReference:(id)uniqueReference;
-(void)_deleteVIPSenderWithReferences:(id)references;
-(unsigned)_saveVIPSender:(id)sender;
-(void)_updateVIPSender:(id)sender;
-(void)_insertVIPSender:(id)sender;
-(void)_saveRawVIPSenderRepresentations:(id)representations;
-(id)_readRawVIPSenderRepresentations;
-(id)_copyVIPSenderFromRepresentation:(id)representation withReference:(id)reference;
-(id)_copyRepresentationForVIPSender:(id)vipsender reference:(id*)reference;
-(BOOL)_setVIPSenderFlagForSenders:(id)senders retryFailedSenders:(BOOL)senders2;
-(BOOL)_clearVIPSenderFlagForSenders:(id)senders retryFailedSenders:(BOOL)senders2;
-(id)_messagesForSenders:(id)senders success:(BOOL*)success;
-(id)_copyCriterionForSenders:(id)senders;
-(void)_libraryDidFinishReconciliation:(id)_library;
-(void)_removePendingVIPChanges;
-(void)_savePendingVIPChanges_nts;
-(id)_pendingVIPChangesPath;
-(id)library:(id)library willAddMessage:(id)message;
-(void)_checkForAddressBookChangesNeedingRevert:(BOOL)addressBookChangesNeedingRevert;
-(void)checkForAddressBookChanges;
-(void)_handleAddressBookNotification;
-(void)dealloc;
-(id)initWithLibrary:(id)library;
@end
