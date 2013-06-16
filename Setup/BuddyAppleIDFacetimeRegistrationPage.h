/* BuddyAppleIDFacetimeRegistrationPage.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "BuddyTableViewController.h"
#import "BuddyController.h"

@class UIView, NSIndexPath, NSArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BuddyAppleIDFacetimeRegistrationPage : BuddyTableViewController <BuddyController> {
	id _delegate;
	UIView* _header;
	NSArray* _candidateAliases;
	NSMutableDictionary* _selection;
	NSString* _footerString;
	NSIndexPath* _lastCheckedAlias;
}
@property(copy, nonatomic) NSString* footerString;
+(void)controllerBypassed;
+(BOOL)controllerNeedsToRun;
-(id)tableView:(id)view titleForFooterInSection:(int)section;
-(id)viewForHeaderInTableView:(id)tableView;
-(float)heightForHeaderInTableView:(id)tableView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)controllerDone;
-(void)_updateSelectedAliases;
-(void)stopValidation;
-(void)startValidation;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end
