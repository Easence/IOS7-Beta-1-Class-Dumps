/* CustomCountryCodeDebugController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UITextFieldDelegate.h"

@class UITextField;

__attribute__((visibility("hidden")))
@interface CustomCountryCodeDebugController : XXUnknownSuperclass <UITextFieldDelegate> {
	UITextField* _textField;
	id _completionHandler;
}
@property(copy, nonatomic) id completionHandler;
-(BOOL)textFieldShouldReturn:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)dealloc;
-(id)initWithStyle:(int)style;
-(id)title;
@end
