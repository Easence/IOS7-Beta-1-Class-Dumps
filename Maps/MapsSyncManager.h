/* MapsSyncManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSUbiquitousKeyValueStore, NSArray, NSDictionary, NSMutableArray;
@protocol MapsSyncedClient;

__attribute__((visibility("hidden")))
@interface MapsSyncManager : XXUnknownSuperclass {
	NSUbiquitousKeyValueStore* _kvStore;
	NSMutableDictionary* _items;
	BOOL _initialSetup;
	BOOL _updatingFromKVS;
	NSMutableDictionary* _debugDictionary;
	id<MapsSyncedClient> _client;
}
@property(retain, nonatomic) NSMutableDictionary* debugDictionary;
@property(readonly, assign, nonatomic) NSDictionary* items;
@property(readonly, assign, nonatomic) NSArray* orderedItems;
@property(readonly, assign) BOOL invertedOrdering;
@property(readonly, assign, nonatomic) NSMutableArray* mutableClientSyncedItems;
@property(readonly, assign, nonatomic) NSArray* clientSyncedItems;
@property(readonly, assign, nonatomic) id<MapsSyncedClient> client;
-(void)didRemoveSyncedItemAtIndex:(unsigned)index;
-(void)didAddSyncedItemAtIndex:(unsigned)index;
-(void)didModifySyncedItem:(id)item;
-(void)observeValueForKeyPath:(id)keyPath ofObject:(id)object change:(id)change context:(void*)context;
-(void)kvstoreDidChange:(id)kvstore;
-(void)_clientDidRemoveItemsAtIndexes:(id)_client;
-(void)_clientDidAddItems:(id)_client atIndexes:(id)indexes;
-(void)_clientDidModifyItem:(id)_client;
-(void)_clientRemoveObserversAtIndexes:(id)indexes;
-(void)_clientAddObserversAtIndexes:(id)indexes;
-(id)debugKeyForSyncedItem:(id)syncedItem;
-(void)simulateKVSNotification:(id)notification;
-(void)_syncFromKVSAndMerge:(BOOL)kvsandMerge changedKeys:(id)keys;
-(void)_kvsDidRemoveItems:(id)_kvs;
-(id)_kvsDidAddItems:(id)_kvs;
-(BOOL)_kvsDidModifyItem:(id)_kvs withCloudData:(id)cloudData;
-(id)_kvsDictionaryRepresentation;
-(id)_kvsDictionaryForKey:(id)key;
-(void)_synchronizeItemForKey:(id)key;
-(void)checkConsistency;
-(void)_checkAndDistributeItemsAroundIndex:(unsigned)index;
-(id)_itemIdentifierFromCloudKey:(id)cloudKey;
-(id)_cloudKeyForItemIdentifier:(id)itemIdentifier;
-(BOOL)_isConcernedByCloudKey:(id)key;
-(id)_itemAtIndex:(unsigned)index;
-(id)_itemFromClientItem:(id)clientItem;
-(BOOL)useClientPositionForItem:(id)item;
-(void)_clientUpdateItemsAtIndexes:(id)indexes;
-(void)_clientRemoveItemsAtIndexes:(id)indexes;
-(void)_clientInsertItems:(id)items atIndexes:(id)indexes;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)initWithClient:(id)client;
-(id)initWithClient:(id)client debugDictionary:(id)dictionary;
-(void)_setupStore;
@end
