/* WEPAccountEditController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PSTextFieldSpecifier, ACAccount;

@interface WEPAccountEditController : XXUnknownSuperclass {
	ACAccount* _account;
	PSTextFieldSpecifier* _screennameSpecifier;
	BOOL _isAccountDirty;
	BOOL _didAttemptNameUpdate;
}
-(void).cxx_destruct;
-(void)_updateFullNameIfNecessary;
-(void)confirmationView:(id)view clickedButtonAtIndex:(int)index;
-(void)_confirmDeleteAccount;
-(void)_deleteButtonTapped:(id)tapped;
-(void)_handleSaveCompletionWithSuccess:(BOOL)success error:(id)error wasVerifying:(BOOL)verifying;
-(void)_saveAccountChangesIfNecessary;
-(void)_setPassword:(id)password withSpecifier:(id)specifier;
-(id)_passwordWithSpecifier:(id)specifier;
-(id)_usernameWithSpecifier:(id)specifier;
-(id)_displayNameWithSpecifier:(id)specifier;
-(void)_setDisplayName:(id)name withSpecifier:(id)specifier;
-(id)_screennameWithSpecifier:(id)specifier;
-(id)_deleteButtonSpecifier;
-(id)_descriptionSpecifier;
-(id)_passwordSpecifier;
-(id)_userNameSpecifier;
-(id)_screennameSpecifier;
-(id)specifiers;
-(void)doneButtonTapped:(id)tapped;
-(void)cancelButtonTapped:(id)tapped;
-(void)viewWillAppear:(BOOL)view;
@end
