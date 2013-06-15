/* SBIconIndexMutableList.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexNodeObserver.h"
#import "NSFastEnumeration.h"

@class NSMapTable, NSMutableArray;
@protocol SBIconIndexMutableListObserver;

__attribute__((visibility("hidden")))
@interface SBIconIndexMutableList : XXUnknownSuperclass <SBIconIndexNodeObserver, NSFastEnumeration> {
	NSMutableArray* _nodes;
	NSMapTable* _index;
	id<SBIconIndexMutableListObserver> _observer;
}
@property(assign, nonatomic) id<SBIconIndexMutableListObserver> observer;
-(id)indexDescriptionWithPrefix:(id)prefix;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)node:(id)node didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)node:(id)node didAddContainedNodeIdentifiers:(id)identifiers;
-(void)removeAllNodes;
-(void)removeNodeAtIndex:(unsigned)index;
-(void)removeNode:(id)node;
-(void)replaceNodeAtIndex:(unsigned)index withNode:(id)node;
-(void)addNode:(id)node;
-(void)insertNode:(id)node atIndex:(unsigned)index;
-(id)nodeAtIndex:(unsigned)index;
-(BOOL)containsNode:(id)node;
-(unsigned)indexOfNode:(id)node;
-(unsigned)count;
-(id)nodes;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(void)dealloc;
-(id)init;
@end
