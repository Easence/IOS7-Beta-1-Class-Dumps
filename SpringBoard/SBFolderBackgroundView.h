/* SBFolderBackgroundView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "_UISettingsKeyObserver.h"
#import "SpringBoard-Structs.h"

@class SBFolderSettings, _UIBackdropView;

__attribute__((visibility("hidden")))
@interface SBFolderBackgroundView : XXUnknownSuperclass <_UISettingsKeyObserver> {
	_UIBackdropView* _backdropView;
	SBFolderSettings* _folderSettings;
}
+(CGSize)folderBackgroundSize;
-(void)settings:(id)settings changedValueForKey:(id)key;
-(void)_configureBackground;
-(void)didAnimate;
-(void)willAnimate;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
