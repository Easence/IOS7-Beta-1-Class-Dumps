/* EditAlarmSettingViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobileTimer-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class BookmarkTextEntryTableViewCell, Alarm, TKTonePicker, UITableView, EditAlarmViewController;

__attribute__((visibility("hidden")))
@interface EditAlarmSettingViewController : XXUnknownSuperclass <UITableViewDelegate, UITableViewDataSource> {
	EditAlarmViewController* _editController;
	int _setting;
	Alarm* _alarm;
	UITableView* _tableView;
	BookmarkTextEntryTableViewCell* _editingCell;
	TKTonePicker* _ringtonePicker;
	unsigned _repeatMask;
	unsigned _firstWeekday;
}
-(void)textValueChanged:(id)changed;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(unsigned)maskForRow:(unsigned)row;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)ringtonePicker:(id)picker selectedMediaItemWithIdentifier:(id)identifier;
-(void)ringtonePicker:(id)picker selectedRingtoneWithIdentifier:(id)identifier;
-(void)_keyboardWillHide:(id)_keyboard;
-(void)_keyboardWillShow:(id)_keyboard;
-(void)_dismiss;
-(void)viewDidUnload;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)applicationWillSuspend;
-(void)loadView;
-(void)addDefaultSongsIfNeeded;
-(void)dealloc;
-(id)initWithSetting:(int)setting editController:(id)controller;
@end
