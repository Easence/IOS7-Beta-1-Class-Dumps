/* StocksListTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Stocks-Structs.h"

@class UIView, UILabel, StocksListBoxView, Stock, UIImageView;

__attribute__((visibility("hidden")))
@interface StocksListTableViewCell : XXUnknownSuperclass {
	UILabel* _symbolLabel;
	UILabel* _priceLabel;
	UILabel* _boxLabel;
	StocksListBoxView* _boxView;
	UIImageView* _changeSignView;
	UIImageView* _percentSignView;
	UIView* _rowSeparatorView;
	Stock* _stock;
	int _rowDataType;
}
@property(assign, nonatomic) int rowDataType;
@property(retain, nonatomic) Stock* stock;
-(void).cxx_destruct;
-(CGRect)changeButtonRect;
-(void)layoutSubviews;
-(void)setShowsRowSeparator:(BOOL)separator;
-(void)setSelected:(BOOL)selected animated:(BOOL)animated;
-(void)setBoxValueFromRowDataType;
-(void)updateValues;
-(void)setBoxContentsAlpha:(float)alpha includeChangeSign:(BOOL)sign;
-(void)prepareForReuse;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
-(id)scriptingInfoWithChildren;
@end
