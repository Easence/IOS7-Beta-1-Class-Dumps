/* ASIPhonePurchasedViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SKUIItemListTableDelegate.h"
#import "UIViewControllerRestoration.h"
#import "ASPurchasedAppViewController.h"

@class UISearchBar, SKUISegmentedTableHeaderView, SUSegmentedControl, SKUIItemListTableViewController;

__attribute__((visibility("hidden")))
@interface ASIPhonePurchasedViewController : ASPurchasedAppViewController <SKUIItemListTableDelegate, UIViewControllerRestoration> {
	SKUISegmentedTableHeaderView* _headerView;
	UISearchBar* _searchBar;
	SUSegmentedControl* _segmentedControl;
	SKUIItemListTableViewController* _tableViewController;
}
+(id)viewControllerWithRestorationIdentifierPath:(id)restorationIdentifierPath coder:(id)coder;
-(void).cxx_destruct;
-(id)_segmentedControl;
-(id)_searchBar;
-(void)_reloadWithItemList:(id)itemList;
-(id)_headerView;
-(id)_currentItemList;
-(void)_segmentedControlAction:(id)action;
-(void)_searchStringDidChange:(id)_searchString;
-(void)_currentItemsDidChange;
-(void)itemListWillBeginDragging:(id)itemList;
-(void)itemList:(id)list didSelectItem:(id)item atIndexPath:(id)indexPath;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
