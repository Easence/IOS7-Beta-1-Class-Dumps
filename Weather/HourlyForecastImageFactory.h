/* HourlyForecastImageFactory.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

__attribute__((visibility("hidden")))
@interface HourlyForecastImageFactory : XXUnknownSuperclass {
	BOOL isDay;
	NSArray* _hourlyForecasts;
	int _sunsetTime;
	int _sunriseTime;
	BOOL _isDay;
	BOOL _isHourlyDataCelsius;
}
@property(assign, nonatomic) int sunriseTime;
@property(assign, nonatomic) int sunsetTime;
@property(assign, nonatomic) BOOL isHourlyDataCelsius;
@property(retain, nonatomic) NSArray* hourlyForecasts;
@property(assign, nonatomic) BOOL isDay;
-(id)forecastImages;
-(void)dealloc;
@end
