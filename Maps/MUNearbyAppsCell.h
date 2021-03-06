/* MUNearbyAppsCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import "UICollectionViewDelegateFlowLayout.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "UICollectionViewDataSource.h"

@class UICollectionView, NSArray, _MUNearbyAppsFlowLayout, UILabel;
@protocol MUNearbyAppsCellDelegate;

__attribute__((visibility("hidden")))
@interface MUNearbyAppsCell : XXUnknownSuperclass <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {
	UILabel* _headerLabel;
	UICollectionView* _collectionView;
	_MUNearbyAppsFlowLayout* _flowLayout;
	NSArray* _storeItems;
	id<MUNearbyAppsCellDelegate> _delegate;
}
@property(retain, nonatomic) NSArray* storeItems;
@property(assign, nonatomic) id<MUNearbyAppsCellDelegate> delegate;
+(id)reuseIdentifier;
+(BOOL)requiresConstraintBasedLayout;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)tintColorDidChange;
-(void)updateConstraints;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
