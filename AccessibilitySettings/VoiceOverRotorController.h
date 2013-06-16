/* VoiceOverRotorController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "AccessibilitySettings-Structs.h"

@class NSMutableArray, UITableView;

__attribute__((visibility("hidden")))
@interface VoiceOverRotorController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
@private
	UITableView* _tableView;
	NSMutableArray* _allItems;
}
-(id)stringForSearchRotorItem:(id)searchRotorItem;
-(void)reloadItems;
-(void)saveItems;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(void)_updateCell:(id)cell forIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)view;
-(void)dealloc;
-(void)viewWillAppear:(BOOL)view;
-(id)init;
@end
