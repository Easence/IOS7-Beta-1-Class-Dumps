/* PHStarkGenericTableViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PHStarkGenericViewController.h"
#import "UITableViewDelegate.h"
#import "MobilePhone-Structs.h"
#import "UITableViewDataSource.h"

@class UITableView, PHStarkNoContentBannerView;

__attribute__((visibility("hidden")))
@interface PHStarkGenericTableViewController : PHStarkGenericViewController <UITableViewDataSource, UITableViewDelegate> {
	BOOL _tableViewReloadIsRequiredOnViewWillAppear;
	BOOL _viewIsInAppearedState;
	UITableView* _mainTableView;
	PHStarkNoContentBannerView* _noContentBannerView;
}
@property(retain) PHStarkNoContentBannerView* noContentBannerView;
@property(readonly, assign) BOOL viewIsInAppearedState;
@property(assign) BOOL tableViewReloadIsRequiredOnViewWillAppear;
@property(retain) UITableView* mainTableView;
-(id)subtitleForNoContentBanner;
-(id)titleForNoContentBanner;
-(void)setNoContentBannerShown:(BOOL)shown;
-(void)hardwareControlEventNotification:(id)notification;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)programmaticallySelectRowAtIndexPath:(id)indexPath;
-(BOOL)shouldRespondToHardwareControlEvent;
-(void)dealloc;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
@end
