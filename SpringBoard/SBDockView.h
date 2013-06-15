/* SBDockView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBWallpaperColorObserver.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"

@class _UIBackdropView, SBDockIconListView, UIView, SBHighlightView, SBDockSettings;

__attribute__((visibility("hidden")))
@interface SBDockView : XXUnknownSuperclass <_UISettingsKeyObserver, SBWallpaperColorObserver> {
	SBDockIconListView* _iconListView;
	SBHighlightView* _highlightView;
	_UIBackdropView* _backdropView;
	UIView* _alternativeBackgroundView;
	SBDockSettings* _dockSettings;
}
+(float)defaultHeight;
-(void)_configureBackground;
-(void)wallpaperColorDidChange:(id)wallpaperColor;
-(void)didAnimate;
-(void)willAnimate;
-(void)setVerticalBackgroundStretch:(float)stretch;
-(void)setBackgroundAlpha:(float)alpha;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(float)heightForOrientation:(int)orientation;
-(void)layoutSubviews;
-(id)dockListView;
-(void)dealloc;
-(id)initWithDockListView:(id)dockListView;
@end
