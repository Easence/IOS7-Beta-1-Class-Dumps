/* CalendarsViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PopoverContentView.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class CalendarModel, UINavigationController;

__attribute__((visibility("hidden")))
@interface CalendarsViewController : XXUnknownSuperclass <PopoverContentView> {
	id _doneBlock;
@private
	CalendarModel* _model;
@protected
	UINavigationController* _embeddedNavigationController;
}
@property(retain, nonatomic) UINavigationController* embeddedNavigationController;
@property(retain, nonatomic) CalendarModel* model;
@property(copy, nonatomic) id doneBlock;
-(void).cxx_destruct;
-(BOOL)canDismiss;
-(void)calendarChooserDidFinish:(id)calendarChooser;
-(void)refreshCalendarsButtonPressed;
-(void)_saveFilterAndNotify;
-(void)calendarChooserSelectionDidChange:(id)calendarChooserSelection;
-(void)loadView;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithModel:(id)model;
@end
