/* MUNearbyAppCollectionViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSDictionary, UILabel, UIImageView;

__attribute__((visibility("hidden")))
@interface MUNearbyAppCollectionViewCell : XXUnknownSuperclass {
	UILabel* _titleLabel;
	UILabel* _categoryLabel;
	UILabel* _priceLabel;
	UIImageView* _icon;
	NSDictionary* _storeData;
}
@property(retain, nonatomic) NSDictionary* storeData;
+(id)reuseIdentifier;
-(void)setImage:(id)image animated:(BOOL)animated;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)prepareForReuse;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
