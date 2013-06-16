/* WADayForecastView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface WADayForecastView : XXUnknownSuperclass {
	unsigned _weekdayIndex;
	BOOL _isDataCelsius;
	UIImageView* _dayNameImage;
	UIImageView* _highTempImage;
	UIImageView* _lowTempImage;
	UIImageView* _conditionImage;
	float _rightColumnWidth;
	CGPoint _conditionImageOffset;
}
@property(assign, nonatomic) float rightColumnWidth;
@property(assign, nonatomic) CGPoint conditionImageOffset;
@property(retain, nonatomic) UIImageView* conditionImage;
@property(retain, nonatomic) UIImageView* lowTempImage;
@property(retain, nonatomic) UIImageView* highTempImage;
@property(retain, nonatomic) UIImageView* dayNameImage;
@property(assign, nonatomic, setter=setDataIsCelsius:) BOOL isDataCelsius;
-(void)setDayForecast:(id)forecast;
-(float)desiredRightColumnWidth;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
