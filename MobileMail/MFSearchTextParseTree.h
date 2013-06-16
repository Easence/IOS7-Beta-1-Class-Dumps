/* MFSearchTextParseTree.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;
@protocol MFSearchTextParseTreeDelegate;

__attribute__((visibility("hidden")))
@interface MFSearchTextParseTree : XXUnknownSuperclass {
	NSMutableArray* _topNodes;
	id<MFSearchTextParseTreeDelegate> _delegate;
}
@property(assign, nonatomic) id<MFSearchTextParseTreeDelegate> delegate;
-(void)enumerateTopLevelNodes:(id)nodes;
-(id)combineTopLevelNodes:(id)nodes;
-(void)removeToken:(id)token;
-(void)insertToken:(id)token beforeToken:(id)token2;
-(id)nextTopLevelNodeAfterToken:(id)token;
-(id)nextLeafNodeAfterToken:(id)token;
-(id)firstLeafNode;
-(id)firstTopLevelNode;
-(void)_removeTokensInTopNodesAtIndexes:(id)indexes;
-(void)_removeTokenInTopNodesAtIndex:(unsigned)index;
-(void)_insertToken:(id)token inTopNodesAtIndex:(unsigned)index;
-(id)description;
-(void)dealloc;
-(id)init;
@end
