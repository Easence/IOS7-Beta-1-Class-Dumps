/* StocksBacksideTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class Stock, UILabel;

__attribute__((visibility("hidden")))
@interface StocksBacksideTableViewCell : XXUnknownSuperclass {
	BOOL _wasDeleted;
	UILabel* _exchangeLabel;
	Stock* _stock;
}
@property(assign, nonatomic) BOOL wasDeleted;
@property(retain, nonatomic) Stock* stock;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
@end
