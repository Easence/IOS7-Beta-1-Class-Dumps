/* WeatherCityView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UILabel, UIImage, City;

__attribute__((visibility("hidden")))
@interface WeatherCityView : XXUnknownSuperclass {
	UIImage* _smallIcons[6];
	unsigned _smallIconIndexes[6];
	BOOL _isDegreeOnLeft;
	City* _pendingCity;
	UILabel* _cityName;
	UILabel* _lastUpdateLabel;
	NSTimer* _labelUpdateTimer;
	CGPoint _forecastDayNameOrigin;
	CGPoint _backgroundOrigin;
	CGPoint _bigIconOrigin;
	CGPoint _secondaryBigIconOrigin;
	CGPoint _cityNameOrigin;
	CGPoint _forecastIconOrigin;
	CGPoint _forecastHighLowOrigin;
	CGPoint _updateLabelOrigin;
	CGRect _updateLabelRect;
}
@property(assign, nonatomic) CGRect updateLabelRect;
@property(assign, nonatomic) CGPoint updateLabelOrigin;
@property(assign, nonatomic) CGPoint forecastHighLowOrigin;
@property(assign, nonatomic) CGPoint forecastIconOrigin;
@property(assign, nonatomic) CGPoint cityNameOrigin;
@property(assign, nonatomic) CGPoint secondaryBigIconOrigin;
@property(assign, nonatomic) CGPoint bigIconOrigin;
@property(assign, nonatomic) CGPoint backgroundOrigin;
@property(assign, nonatomic) BOOL isDegreeOnLeft;
@property(readonly, assign, nonatomic) CGPoint forecastDayNameOrigin;
@property(retain, nonatomic) NSTimer* labelUpdateTimer;
@property(retain, nonatomic) UILabel* lastUpdateLabel;
@property(retain, nonatomic) City* pendingCity;
@property(retain, nonatomic) UILabel* cityName;
+(void)resetForLocaleChange;
-(void)didReceiveMemoryWarning;
-(void)clearHourly;
-(void)updateForecastAccessory;
-(void)cleanupAndHideHourly;
-(id)backgroundNamespace;
-(id)dayForecasts;
-(CGSize)updateOffset;
-(CGSize)buttonOffset;
-(CGSize)weekdayForecastOffset;
-(CGSize)iconOffset;
-(CGPoint)cityOrigin;
-(float)cityFontSize;
-(void)updateCityNameWithTemperatureWidth:(float)temperatureWidth;
-(void)cityDidStartWeatherUpdate:(id)city;
-(BOOL)updateWeatherDisplayForCity:(id)city;
-(void)startUpdateTimer;
-(void)clearUpdateTimer;
-(id)_accessibilitySmallWeatherIcons;
-(id)_accessibilityBigWeatherIcons;
-(void)redisplayUpdateLabel;
-(void)setupSecondaryBigIconOffset:(int)offset;
-(void)setupBigIconOffset:(int)offset;
-(void)_setSmallIcon:(unsigned)icon forIndex:(unsigned)index;
-(void)refreshUpdateLabel;
-(void)drawForecasts:(BOOL)forecasts;
-(void)drawRect:(CGRect)rect;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
