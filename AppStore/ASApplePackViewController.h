/* ASApplePackViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AppStore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import "SKUIItemCollectionDelegate.h"

@class UICollectionView, SKUIItemCollectionController, ASApplePackPage, ASApplePackHeaderView, UIButton;

__attribute__((visibility("hidden")))
@interface ASApplePackViewController : XXUnknownSuperclass <SKUIItemCollectionDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
	ASApplePackPage* _applePack;
	UICollectionView* _collectionView;
	UIButton* _footerView;
	ASApplePackHeaderView* _headerView;
	BOOL _isIPad;
	SKUIItemCollectionController* _itemCollectionController;
}
@property(readonly, assign, nonatomic) ASApplePackPage* applePackPage;
-(void).cxx_destruct;
-(void)_updateAfterAuthenticationFailure;
-(id)_itemCollectionController;
-(id)_headerView;
-(id)_footerView;
-(void)_dismissAfterDownloadForItems:(id)items;
-(id)_collectionView;
-(void)_legalLinkAction:(id)action;
-(void)_downloadAllAction:(id)action;
-(void)_closeAction:(id)action;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForHeaderInSection:(int)section;
-(CGSize)collectionView:(id)view layout:(id)layout referenceSizeForFooterInSection:(int)section;
-(id)collectionView:(id)view viewForSupplementaryElementOfKind:(id)kind atIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(NSRange)visibleItemRangeForItemCollectionController:(id)itemCollectionController;
-(BOOL)shouldCacheAheadWhenIdleForItemCollectionController:(id)itemCollectionController;
-(NSRange)itemCollectionController:(id)controller itemPageRangeForOffset:(CGPoint)offset;
-(id)itemCollectionController:(id)controller cellLayoutForItemIndex:(int)itemIndex;
-(id)contentScrollView;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(void)setClientContext:(id)context;
-(void)dealloc;
-(id)initWithApplePackPage:(id)applePackPage;
@end
