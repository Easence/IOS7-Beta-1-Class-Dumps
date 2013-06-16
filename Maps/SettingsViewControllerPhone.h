/* SettingsViewControllerPhone.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SettingsTopBarDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BlurView, UIView, SettingsTopBar, UITableView;
@protocol MapsChromeTopBarContent, SettingsViewControllerPhoneDelegate;

__attribute__((visibility("hidden")))
@interface SettingsViewControllerPhone : XXUnknownSuperclass <SettingsTopBarDelegate> {
	id<SettingsViewControllerPhoneDelegate> _delegate;
	UIView* _dimmingView;
	SettingsTopBar* _settingsTopBar;
	UITableView* _tableView;
	BlurView* _blurView;
}
@property(readonly, assign, nonatomic) id<MapsChromeTopBarContent> topBar;
@property(assign, nonatomic) id<SettingsViewControllerPhoneDelegate> delegate;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)settingsTopBarDidRequestDismissSettings:(id)requestDismissSettings;
-(void)dismissSettingsAnimated:(BOOL)animated completion:(id)completion;
-(void)_dismissSettings:(id)settings;
-(void)presentSettings;
-(id)_dimmingView;
-(void)dealloc;
-(id)initWithTableViewController:(id)tableViewController;
@end
