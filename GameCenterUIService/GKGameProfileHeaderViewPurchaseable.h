/* GKGameProfileHeaderViewPurchaseable.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCenterUIService-Structs.h"
#import "GKGameProfileHeaderView.h"

@class GKLabel, GKRatingView;

__attribute__((visibility("hidden")))
@interface GKGameProfileHeaderViewPurchaseable : GKGameProfileHeaderView {
	GKRatingView* _ratingView;
	GKLabel* _nameLabel;
	GKLabel* _developerLabel;
}
@property(retain, nonatomic) GKLabel* developerLabel;
@property(retain, nonatomic) GKLabel* nameLabel;
@property(retain, nonatomic) GKRatingView* ratingView;
-(void)didUpdateModel;
-(void)updateRating;
-(void)applyConstraints;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
