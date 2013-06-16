/* SettingsTopBar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MapsChromeTopBarContent.h"

@class UINavigationBar, MainChromeViewController;
@protocol SettingsTopBarDelegate;

__attribute__((visibility("hidden")))
@interface SettingsTopBar : XXUnknownSuperclass <MapsChromeTopBarContent> {
	id<SettingsTopBarDelegate> _delegate;
	UINavigationBar* _navBar;
}
@property(assign, nonatomic) MainChromeViewController* chromeViewController;
@property(assign, nonatomic) CGRect frame;
@property(assign, nonatomic) id<SettingsTopBarDelegate> delegate;
-(void)_dismissSettings:(id)settings;
-(id)_navBar;
-(id)customTopBarViewForIdiom:(int)idiom;
-(void)dealloc;
@end
