/* BuddyRegistrationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "BuddyTableViewController.h"
#import "BuddyController.h"

@class UISwitch, NSURLConnection, NSArray;
@protocol BuddyControllerDelegate;

__attribute__((visibility("hidden")))
@interface BuddyRegistrationController : BuddyTableViewController <BuddyController> {
	id<BuddyControllerDelegate> _delegate;
	UISwitch* _registrationSwitch;
	NSArray* _rowTitles;
	NSArray* _sectionSwitches;
	NSArray* _sectionFooters;
	NSURLConnection* _registrationConnection;
	BOOL _registrationSuccessful;
}
+(BOOL)controllerNeedsToRun;
+(BOOL)showRegistrationOptIn;
+(id)URLForRegistration;
+(id)DSIDForRegistration;
+(void)initialize;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(id)tableView:(id)view willSelectRowAtIndexPath:(id)indexPath;
-(void)controllerDone;
-(void)viewDidAppear:(BOOL)view;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)_registrationFinished;
-(void)registerDevice;
-(void)_stopSpinning;
-(void)_startSpinning;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
@end
