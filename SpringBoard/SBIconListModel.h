/* SBIconListModel.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBIconIndexNode.h"
#import "SBIconIndexMutableListObserver.h"
#import "NSFastEnumeration.h"

@class NSHashTable, SBFolder, SBIconIndexMutableList;

__attribute__((visibility("hidden")))
@interface SBIconListModel : XXUnknownSuperclass <SBIconIndexNode, SBIconIndexMutableListObserver, NSFastEnumeration> {
	SBIconIndexMutableList* _icons;
	NSHashTable* _nodeObservers;
	NSHashTable* _listObservers;
	BOOL _iconStateIsDirty;
	SBFolder* _folder;
}
+(unsigned)maxIcons;
+(Class)viewClass;
-(unsigned)countByEnumeratingWithState:(XXStruct_kFm5bA*)state objects:(id*)objects count:(unsigned)count;
-(void)list:(id)list didRemoveContainedNodeIdentifiers:(id)identifiers;
-(void)list:(id)list didAddContainedNodeIdentifiers:(id)identifiers;
-(id)nodeDescriptionWithPrefix:(id)prefix;
-(void)removeNodeObserver:(id)observer;
-(void)addNodeObserver:(id)observer;
-(id)nodesAlongIndexPath:(id)path consumedIndexes:(unsigned)indexes;
-(id)indexPathsForContainedNodeIdentifier:(id)containedNodeIdentifier prefixPath:(id)path;
-(id)containedNodeIdentifiers;
-(BOOL)containsNodeIdentifier:(id)identifier;
-(id)nodeIdentifier;
-(void)_notifyListObservers:(id)observers;
-(void)removeListObserver:(id)observer;
-(void)addListObserver:(id)observer;
-(void)warmUpIconImages;
-(id)description;
-(BOOL)matchesRepresentation:(id)representation;
-(id)representation;
-(BOOL)resetWithRepresentation:(id)representation model:(id)model overflowNodes:(id)nodes leafIdentifiersAdded:(id)added;
-(void)markIconStateClean;
-(BOOL)isIconStateDirty;
-(id)iconsOfClass:(Class)aClass;
-(unsigned)compactIcons;
-(BOOL)needsCompacting;
-(BOOL)isFull;
-(BOOL)isEmpty;
-(unsigned)firstFreeSlotIndexForType:(int)type;
-(unsigned)firstFreeSlotIndex;
-(void)removeIcon:(id)icon;
-(void)removeIconAtIndex:(unsigned)index;
-(id)insertIcon:(id)icon atIndex:(unsigned*)index;
-(id)placeIcon:(id)icon atIndex:(unsigned*)index;
-(BOOL)addIcon:(id)icon asDirty:(BOOL)dirty;
-(BOOL)addIcon:(id)icon;
-(BOOL)allowsAddingIcon:(id)icon;
-(BOOL)containsLeafIconWithIdentifier:(id)identifier;
-(BOOL)containsIcon:(id)icon;
-(unsigned)indexForLeafIconWithIdentifier:(id)identifier;
-(unsigned)indexForIcon:(id)icon;
-(id)iconAtIndex:(unsigned)index;
-(id)icons;
-(unsigned)numberOfIcons;
-(id)folder;
-(void)dealloc;
-(id)initWithFolder:(id)folder;
@end
