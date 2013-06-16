/* GKLeaderboardSetListViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class GKLeaderboardSet, GKGameRecord, GKPlayer;

__attribute__((visibility("hidden")))
@interface GKLeaderboardSetListViewController : XXUnknownSuperclass {
	GKLeaderboardSet* _leaderboardSet;
	GKGameRecord* _game;
	GKPlayer* _player;
}
@property(retain, nonatomic) GKPlayer* player;
@property(retain, nonatomic) GKGameRecord* game;
@property(retain, nonatomic) GKLeaderboardSet* leaderboardSet;
-(void)showLeaderboardList:(id)list;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)configureDataSource;
-(void)dealloc;
-(id)initWithGame:(id)game player:(id)player;
@end
