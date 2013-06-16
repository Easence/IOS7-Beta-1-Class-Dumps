/* PHStarkMainMenuContainerViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobilePhone-Structs.h"
#import "UITableViewDelegate.h"
#import "UITabBarControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "PHStarkTelephonyStateMonitorDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UIViewController, PHStarkTelephonyStateMonitor, NSArray;

__attribute__((visibility("hidden")))
@interface PHStarkMainMenuContainerViewController : XXUnknownSuperclass <PHStarkTelephonyStateMonitorDelegate, UITabBarControllerDelegate, UITableViewDelegate, UITableViewDataSource> {
	NSArray* _rootViewControllerDictionaries;
	UIView* _centralAreaContainerView;
	UIViewController* _selectedViewController;
	PHStarkTelephonyStateMonitor* _telephonyStateMonitor;
}
@property(retain) PHStarkTelephonyStateMonitor* telephonyStateMonitor;
@property(retain) UIViewController* selectedViewController;
@property(retain) UIView* centralAreaContainerView;
@property(retain) NSArray* rootViewControllerDictionaries;
-(void)telephonyStateDidChangeToState:(int)telephonyState;
-(void)_initializeRootViewControllerDictionaries;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(BOOL)tabBarController:(id)controller shouldSelectViewController:(id)controller2;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
