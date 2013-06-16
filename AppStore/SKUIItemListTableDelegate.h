/* SKUIItemListTableDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SKUIItemListTableDelegate <NSObject>
@optional
-(void)itemListWillBeginDragging:(id)itemList;
-(void)itemList:(id)list willDisplayCellForItem:(id)item atIndexPath:(id)indexPath;
-(void)itemList:(id)list didRemoveItemAtIndexPath:(id)indexPath;
-(id)itemList:(id)list didConfirmItemOfferForItem:(id)item atIndexPath:(id)indexPath;
-(void)itemList:(id)list didDeselectItem:(id)item atIndexPath:(id)indexPath;
-(void)itemList:(id)list didSelectItem:(id)item atIndexPath:(id)indexPath;
@end
