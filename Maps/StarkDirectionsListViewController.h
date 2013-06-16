/* StarkDirectionsListViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "StarkTableViewController.h"
#import "DirectionsManagerObserver.h"

@class UIBarButtonItem;

__attribute__((visibility("hidden")))
@interface StarkDirectionsListViewController : StarkTableViewController <DirectionsManagerObserver> {
	id _completion;
	UIBarButtonItem* _doneBarButtonItem;
}
@property(readonly, assign, nonatomic) UIBarButtonItem* doneBarButtonItem;
-(void)_done;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)directionsManagerDidSwitchToNewRoute:(id)directionsManager route:(id)route;
-(void)directionsManager:(id)manager didReplaceRoute:(id)route withRoute:(id)route3;
-(void)dealloc;
-(id)initWithCompletion:(id)completion;
@end
