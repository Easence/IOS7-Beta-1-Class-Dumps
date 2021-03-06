/* SBModeViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSArray, UISegmentedControl, UIViewController, UIView, SBBulletinObserverViewController;
@protocol SBBulletinActionHandler;

__attribute__((visibility("hidden")))
@interface SBModeViewController : XXUnknownSuperclass {
	id<SBBulletinActionHandler> _delegate;
	SBBulletinObserverViewController* _selectedViewController;
	UIView* _contentView;
	UIView* _headerView;
	UISegmentedControl* _modeControl;
	UIView* _separator;
	struct {
		unsigned isContentLayoutValid : 1;
		unsigned isSegmentLayoutValid : 1;
		unsigned isRequestHandlingEnabled : 1;
	} _modeViewControllerFlags;
}
@property(assign, nonatomic, getter=isRequestHandlingEnabled) BOOL requestHandlingEnabled;
@property(retain, nonatomic) NSArray* viewControllers;
@property(assign, nonatomic) UIViewController* selectedViewController;
@property(assign, nonatomic) id<SBBulletinActionHandler> delegate;
+(id)_buttonTitleFont;
-(void)hostDidDismiss;
-(void)hostWillDismiss;
-(void)hostDidPresent;
-(void)hostWillPresent;
-(void)setWidgetDelegate:(id)delegate;
-(id)widgetDelegate;
-(BOOL)handleActionForBulletin:(id)bulletin;
-(CGRect)rectForBulletin:(id)bulletin;
-(BOOL)_isRequestHandlingEnabled;
-(void)handleModeChange:(id)change;
-(void)_setSelectedBulletinObserverViewController:(id)controller;
-(void)removeViewController:(id)controller;
-(void)addViewController:(id)controller;
-(BOOL)_addBulletinObserverViewController:(id)controller;
-(void)_setSelectedSegmentIndex:(int)index;
-(void)_invalidateSegmentLayout;
-(void)_invalidateContentLayout;
-(id)_viewIfLoaded;
-(void)viewWillLayoutSubviews;
-(void)_layoutSegmentsIfNecessary;
-(void)_layoutContentIfNecessary;
-(void)_layoutHeaderViewIfNecessary;
-(void)viewDidLoad;
-(void)_loadContentView;
-(void)_loadHeaderView;
-(float)_heightForHeaderView;
-(void)dealloc;
@end
