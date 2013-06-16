/* GKGamePointsCompareDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import "GKGamesDataSource.h"

@class NSMutableOrderedSet;

__attribute__((visibility("hidden")))
@interface GKGamePointsCompareDataSource : GKGamesDataSource {
	NSMutableOrderedSet* _localGames;
}
@property(retain, nonatomic) NSMutableOrderedSet* localGames;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(Class)headerClass;
-(void)configureCell:(id)cell withGameRecordAtIndex:(unsigned)index;
-(Class)cellClass;
-(void)loadGameDetailsForPlayer:(id)player fromGames:(id)games forPages:(NSRange)pages handler:(id)handler;
-(void)loadGamesListForPlayer:(id)player handler:(id)handler;
-(void)_loadGamesListForPlayer:(id)player handler:(id)handler;
-(id)gameRecordForLocalPlayerAtIndexPath:(id)indexPath;
-(void)dealloc;
@end
