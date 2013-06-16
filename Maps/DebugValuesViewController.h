/* DebugValuesViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "DebugViewController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, NSString;
@protocol DebugViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface DebugValuesViewController : XXUnknownSuperclass <DebugViewController> {
	NSMutableArray* _mutableSections;
	NSArray* _sections;
	id _prepareContentBlock;
	id<DebugViewControllerDelegate> _delegate;
	NSString* _navigationDestinationTitle;
}
@property(assign, nonatomic) id<DebugViewControllerDelegate> delegate;
@property(readonly, assign, nonatomic) NSArray* sections;
@property(retain, nonatomic) NSString* navigationDestinationTitle;
@property(copy, nonatomic) id prepareContentBlock;
+(id)navigationDestinationTitle;
-(unsigned)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didEndDisplayingCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)_done;
-(void)willNavigateToSubsequentController:(id)subsequentController;
-(void)addSectionWithTitle:(id)title content:(id)content;
-(void)addSection:(id)section;
-(void)prepareContent;
-(void)dealloc;
-(id)init;
@end
