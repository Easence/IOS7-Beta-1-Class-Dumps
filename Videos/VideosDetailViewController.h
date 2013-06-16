/* VideosDetailViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Videos-Structs.h"
#import "VideosDetailHeaderViewDelegate.h"
#import "VideosRelatedCellDelegate.h"
#import "SKStoreProductViewControllerDelegate.h"
#import "MPStoreDownloadManagerObserver.h"
#import "UITableViewDataSource.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"

@class NSMutableArray, VideosDownloadProgress, NSArray, UITableView, MPMediaItem, MPUQueryDataSource, UIImage, VideosDetailHeaderView, UIButton, MPMediaDownloadObserver, UILabel, MPCloudDownloadButton, NSString;

__attribute__((visibility("hidden")))
@interface VideosDetailViewController : XXUnknownSuperclass <VideosDetailHeaderViewDelegate, VideosRelatedCellDelegate, SKStoreProductViewControllerDelegate, MPStoreDownloadManagerObserver, UITableViewDataSource, UITableViewDelegate> {
	UITableView* _tableView;
	VideosDetailHeaderView* _headerView;
	NSMutableArray* _segmentIds;
	MPMediaDownloadObserver* _downloadObserver;
	id _canShowCloudDownloadButtonsObserver;
	BOOL _ignoringNextScrollEvent;
	BOOL _relatedLoading;
	BOOL _relatedLoaded;
	BOOL _relatedCanRetry;
	NSArray* _related;
	MPMediaItem* _mediaItem;
	MPUQueryDataSource* _dataSource;
	UIImage* _posterImage;
	NSArray* _segments;
	UIButton* _playButton;
	MPCloudDownloadButton* _cloudButton;
	VideosDownloadProgress* _progressButton;
}
@property(retain, nonatomic) VideosDownloadProgress* progressButton;
@property(retain, nonatomic) MPCloudDownloadButton* cloudButton;
@property(retain, nonatomic) UIButton* playButton;
@property(readonly, assign, nonatomic) NSString* titleText;
@property(readonly, assign, nonatomic) NSString* styleSheet;
@property(readonly, assign, nonatomic) UILabel* expirationLabel;
@property(readonly, assign, nonatomic) NSString* subtitleText;
@property(readonly, assign, nonatomic) NSArray* segments;
@property(readonly, assign, nonatomic) CGSize posterSize;
@property(readonly, assign, nonatomic) UIImage* posterImage;
@property(readonly, assign, nonatomic) UIEdgeInsets margins;
@property(readonly, assign, nonatomic) NSArray* iconViews;
@property(readonly, assign, nonatomic) int selectedSegmentId;
@property(readonly, assign, nonatomic) UITableView* tableView;
@property(retain, nonatomic) MPUQueryDataSource* dataSource;
@property(retain, nonatomic) MPMediaItem* mediaItem;
+(BOOL)wantsPlayButton;
-(void).cxx_destruct;
-(void)segmentedControlValueChanged:(id)changed;
-(void)playItem:(id)item animated:(BOOL)animated;
-(void)playItem:(id)item;
-(void)playButtonPressed:(id)pressed;
-(void)_loadRelatedForced:(BOOL)forced;
-(void)_loadRelatedIfNeeded;
-(void)_clearDownloadObserver;
-(void)_setupDownloadObserver;
-(BOOL)isDownloadable;
-(void)_cancelDownload:(id)download;
-(void)_download:(id)download;
-(void)_updateDownload;
-(void)_artworkChanged:(id)changed;
-(void)_libraryChanged:(id)changed;
-(void)downloadManager:(id)manager downloadDidFinish:(id)download;
-(void)downloadManager:(id)manager downloadDidProgress:(id)download;
-(void)downloadManager:(id)manager didAddDownloads:(id)downloads removeDownloads:(id)downloads3;
-(void)productViewControllerDidFinish:(id)productViewController;
-(void)relatedCell:(id)cell showStoreForItem:(id)item;
-(void)relatedCellShouldRetry:(id)relatedCell;
-(void)headerDidChangeHeight:(float)header;
-(CGSize)headerPosterSize;
-(void)scrollViewDidScroll:(id)scrollView;
-(id)viewForHeaderInTableView:(id)tableView;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(float)heightForHeaderInTableView:(id)tableView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidLoad;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)dealloc;
-(void)_commonInit;
-(id)initWithDataSource:(id)dataSource;
-(id)initWithMediaItem:(id)mediaItem;
-(id)init;
@end
