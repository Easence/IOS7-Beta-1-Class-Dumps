/* MTTimerPhoneControlsView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "TimerControlsView.h"
#import "MobileTimer-Structs.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MTTimerPickerView, MTTimerButtonsView, NSString, UITableViewCell, UITableView;
@protocol TimerControlsTarget;

__attribute__((visibility("hidden")))
@interface MTTimerPhoneControlsView : TimerControlsView <UITableViewDataSource, UITableViewDelegate> {
	UITableView* _tableView;
	MTTimerPickerView* _pickerView;
	UITableViewCell* _toneChooserCell;
	MTTimerButtonsView* _buttonsView;
	NSString* _toneName;
	id<TimerControlsTarget> _target;
	BOOL _isInInitialState;
}
-(BOOL)tableView:(id)view shouldHighlightRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)setState:(int)state;
-(void)layoutSubviews;
-(void)setTimerToneName:(id)name;
-(void)dealloc;
-(id)initWithTarget:(id)target;
@end
