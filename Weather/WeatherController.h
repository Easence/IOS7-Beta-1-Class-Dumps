/* WeatherController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "TabControllerDelegate.h"
#import "WeatherUpdaterDelegate.h"
#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, TabController, UIView;

__attribute__((visibility("hidden")))
@interface WeatherController : XXUnknownSuperclass <TabControllerDelegate, WeatherUpdaterDelegate> {
	TabController* _tabController;
	NSTimer* _updateTimer;
	UIView* _contentView;
}
@property(retain, nonatomic) UIView* contentView;
-(void)failedUpdate:(id)update;
-(void)refreshForLocaleChange;
-(void)resume;
-(void)suspend;
-(void)didUpdateWeather;
-(void)_startUpdateTimer;
-(void)_updateWeatherData;
-(void)saveStateToDisk;
-(void)tabControllerWillScroll:(id)tabController;
-(id)tabController;
-(void)dealloc;
-(void)_stopUpdateTimer;
-(id)init;
-(void)_reachabilityChanged:(id)changed;
-(CGRect)_contentLayerRect;
@end
