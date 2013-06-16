/* WEPSignInController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PSSpecifier, ACAccount;

@interface WEPSignInController : XXUnknownSuperclass {
	PSSpecifier* _createNewAccountGroupSpecifier;
	PSSpecifier* _signInButtonSpecifier;
	ACAccount* _account;
}
-(void).cxx_destruct;
-(id)tableView:(id)view titleForHeaderInSection:(int)section;
-(float)tableView:(id)view heightForHeaderInSection:(int)section;
-(void)_createNewAccountButtonTapped:(id)tapped;
-(void)_updateSignInButton;
-(void)_textFieldValueDidChange:(id)_textFieldValue;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_handleSaveCompletionWithSuccess:(BOOL)success error:(id)error;
-(void)_authenticateAccount;
-(void)_signInButtonTapped:(id)buttonTapped;
-(void)returnPressedAtEnd;
-(void)setPassword:(id)password;
-(void)setAccountId:(id)anId;
-(id)_passwordWithSpecifier:(id)specifier;
-(void)_setPassword:(id)password withSpecifier:(id)specifier;
-(id)_usernameWithSpecifier:(id)specifier;
-(void)_setUsername:(id)username withSpecifier:(id)specifier;
-(id)_createNewAccountButtonSpecifier;
-(id)_loginSpecifiers;
-(id)specifiers;
-(void)viewWillAppear:(BOOL)view;
-(id)init;
@end
