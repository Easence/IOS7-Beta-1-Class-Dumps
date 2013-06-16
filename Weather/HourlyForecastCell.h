/* HourlyForecastCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Weather-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

__attribute__((visibility("hidden")))
@interface HourlyForecastCell : XXUnknownSuperclass {
	BOOL _showingDay;
	int _conditionCode;
	UIImageView* _timeImageView;
	UIImageView* _detailImageView;
	UIImageView* _percentChanceImageView;
	UIImageView* _conditionImageView;
}
@property(retain, nonatomic) UIImageView* conditionImageView;
@property(retain, nonatomic) UIImageView* percentChanceImageView;
@property(retain, nonatomic) UIImageView* detailImageView;
@property(retain, nonatomic) UIImageView* timeImageView;
@property(assign, nonatomic) int conditionCode;
@property(assign, nonatomic) BOOL showingDay;
+(CGSize)size;
-(void)layoutSubviews;
-(void)setImage:(id)image;
-(void)setTime:(id)time;
-(void)setDetail:(id)detail bold:(BOOL)bold;
-(void)setPrecipitation:(float)precipitation;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)clearCellContent;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
