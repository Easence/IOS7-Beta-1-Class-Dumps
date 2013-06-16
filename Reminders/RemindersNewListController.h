/* RemindersNewListController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import "RemindersListController.h"

@class EKSource, EKCalendar;

__attribute__((visibility("hidden")))
@interface RemindersNewListController : RemindersListController {
	int _color;
	BOOL _showsAccountName;
	BOOL _textFieldIsEditing;
	EKSource* _source;
	EKCalendar* _calendar;
}
@property(readonly, assign, nonatomic) EKCalendar* calendar;
@property(retain, nonatomic) EKSource* account;
-(void).cxx_destruct;
-(void)reset;
-(int)displayOrder;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidBeginEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setBeingDisplayed:(BOOL)displayed;
-(void)setStatus:(int)status animated:(BOOL)animated;
-(BOOL)hasNoDataYet;
-(Class)classForListModel;
-(void)setShowsAccountName:(BOOL)name;
-(void)configureHeaderView:(id)view;
-(int)headerViewStyle;
@end
