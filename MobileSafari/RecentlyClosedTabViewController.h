/* RecentlyClosedTabViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileSafari-Structs.h"

@class NSMutableArray;
@protocol RecentlyClosedTabViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface RecentlyClosedTabViewController : XXUnknownSuperclass {
	NSMutableArray* _recentlyClosedTabs;
	id<RecentlyClosedTabViewControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<RecentlyClosedTabViewControllerDelegate> delegate;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(CGSize)contentSizeForViewInPopover;
-(void)viewWillAppear:(BOOL)view;
-(void)removeAllRecentlyClosedTabDocuments;
-(void)removeRecentlyClosedTabDocument:(id)document;
-(void)addRecentlyClosedTabDocument:(id)document;
-(void)dealloc;
-(id)initWithStyle:(int)style;
@end
