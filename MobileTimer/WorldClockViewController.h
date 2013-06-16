/* WorldClockViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import "AddClockViewDelegate.h"
#import "TableViewController.h"
#import "StateManagement.h"

@class UIImageView;

__attribute__((visibility("hidden")))
@interface WorldClockViewController : TableViewController <StateManagement, AddClockViewDelegate> {
	UIImageView* _worldMapView;
	int _clockStyle;
}
-(id)defaultPNGName;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(void)addClockView:(id)view addCity:(id)city;
-(id)addViewController;
-(void)showAddView;
-(void)saveScrollPoint;
-(int)numberOfItems;
-(float)itemsTableRowHeight;
-(CGRect)frameForCenteringNoItemsLabel;
-(id)noItemsText;
-(void)toggleClockMode;
-(void)saveState;
-(void)reloadState;
-(void)viewDidUnload;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)_positionWorldMap;
-(void)dealloc;
-(id)init;
@end
