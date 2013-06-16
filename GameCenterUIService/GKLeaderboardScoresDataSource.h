/* GKLeaderboardScoresDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "GameCenterUIService-Structs.h"

@class GKPlayer, GKGameRecord, GKScoreLeaderboard, GKShowcaseCellView, NSMutableIndexSet;

__attribute__((visibility("hidden")))
@interface GKLeaderboardScoresDataSource : XXUnknownSuperclass {
	GKScoreLeaderboard* _leaderboard;
	GKPlayer* _player;
	SEL _showcaseSelector;
	SEL _showMoreSelector;
	GKShowcaseCellView* _showcaseView;
	GKShowcaseCellView* _compareShowcaseView;
	unsigned _pageSize;
	GKGameRecord* _game;
	NSMutableIndexSet* _loadedPages;
	NSRange _preloadedRange;
}
@property(retain, nonatomic) NSMutableIndexSet* loadedPages;
@property(retain, nonatomic) GKGameRecord* game;
@property(assign, nonatomic) NSRange preloadedRange;
@property(assign, nonatomic) unsigned pageSize;
@property(retain, nonatomic) GKShowcaseCellView* compareShowcaseView;
@property(retain, nonatomic) GKShowcaseCellView* showcaseView;
@property(assign, nonatomic) SEL showMoreSelector;
@property(assign, nonatomic) SEL showcaseSelector;
@property(retain, nonatomic) GKPlayer* player;
@property(retain, nonatomic) GKScoreLeaderboard* leaderboard;
@property(assign, nonatomic) int playerScope;
@property(assign, nonatomic) int timeScope;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(void)configureCollectionView:(id)view;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(void)configureCell:(id)cell withScoreAtIndex:(unsigned)index;
-(id)indexPathsForItem:(id)item;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)loadScoresForPages:(NSRange)pages withCompletionHandler:(id)completionHandler;
-(void)loadNextPageWithCompletionHandler:(id)completionHandler;
-(void)loadDataWithCompletionHandlerAndError:(id)completionHandlerAndError;
-(void)preloadImagesStartingAtIndex:(unsigned)index;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(/*function-pointer*/ void*)sectionTitleFormatter;
-(unsigned)pageForItemIndex:(unsigned)itemIndex;
-(BOOL)needCompareShowcaseCell:(int)cell withMaxRank:(int)maxRank;
-(BOOL)needCompareShowcaseCell:(int)cell;
-(BOOL)needShowcaseCell:(int)cell withMaxRank:(int)maxRank;
-(BOOL)needShowcaseCell:(int)cell;
-(id)bottomShowcaseScore;
-(id)topShowcaseScore;
-(unsigned)initialPageCount;
-(id)itemAtIndexPath:(id)indexPath;
-(void)dealloc;
-(id)initWithLeaderboard:(id)leaderboard game:(id)game player:(id)player;
-(void)replaceLeaderboard:(id)leaderboard;
-(void)markCell:(id)cell;
@end
