/* BuddyUpgradeStoreAccountSignInPage.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import "BuddyAppleIDSignInPage.h"

@class NSString, UIAlertView;

__attribute__((visibility("hidden")))
@interface BuddyUpgradeStoreAccountSignInPage : BuddyAppleIDSignInPage {
	UIAlertView* _skipAlert;
	NSString* _usernameString;
}
@property(copy, nonatomic) NSString* usernameString;
-(void)dealloc;
-(void)_signInToAccount;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)_reallySkip;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)skipPressed:(id)pressed;
-(void)setDelegate:(id)delegate;
-(id)appleIDController;
-(id)newFooter;
-(id)newHeader;
-(void)viewWillAppear:(BOOL)view;
-(id)signInTitle;
@end
