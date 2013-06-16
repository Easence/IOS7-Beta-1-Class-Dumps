/* GKPlayerProfileCollectionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GKFriendActions.h"
#import "GKFriendRequestComposeViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UIViewControllerRestoration.h"

@class GKCollectionViewAggregateDataSource, GKSegmentedSectionDataSource, GKReportProblemRemoteUIController, GKSupplementaryViewMetrics, GKPlayerProfileHeaderView, GKPlayer, GKGamesDataSource, GKGamesCompareOverviewDataSource;

__attribute__((visibility("hidden")))
@interface GKPlayerProfileCollectionViewController : XXUnknownSuperclass <GKFriendRequestComposeViewControllerDelegate, UIViewControllerRestoration, GKFriendActions> {
	GKPlayer* _player;
	GKPlayerProfileHeaderView* _headerView;
	GKGamesCompareOverviewDataSource* _gameListDataSource;
	GKGamesDataSource* _pointsListDataSource;
	GKCollectionViewAggregateDataSource* _friendsDataSource;
	GKSegmentedSectionDataSource* _segmentedDataSource;
	GKReportProblemRemoteUIController* _remoteUIController;
	GKSupplementaryViewMetrics* _segmentedControlMetrics;
}
@property(retain, nonatomic) GKSupplementaryViewMetrics* segmentedControlMetrics;
@property(retain, nonatomic) GKReportProblemRemoteUIController* remoteUIController;
@property(retain, nonatomic) GKSegmentedSectionDataSource* segmentedDataSource;
@property(retain, nonatomic) GKCollectionViewAggregateDataSource* friendsDataSource;
@property(retain, nonatomic) GKGamesDataSource* pointsListDataSource;
@property(retain, nonatomic) GKGamesCompareOverviewDataSource* gameListDataSource;
@property(retain, nonatomic) GKPlayerProfileHeaderView* headerView;
@property(retain, nonatomic) GKPlayer* player;
+(id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
+(Class)headerViewClass;
+(id)playerViewControllerForPlayer:(id)player;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)friendRequestComposeViewControllerDidFinish:(id)friendRequestComposeViewController;
-(void)segmentedSectionDataSource:(id)source inSection:(unsigned)section didSelectDataSourceWithIndex:(int)index;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(void)didUpdateModel;
-(void)setAccentColor:(id)color;
-(void)updateMetrics;
-(void)configureViewFactories;
-(void)headerViewDidLoad;
-(void)configureDataSource;
-(id)segmentedDataSourceForPlayer:(id)player;
-(void)dealloc;
-(id)init;
-(float)preferredHeaderHeight;
@end
