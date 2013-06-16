/* GKCollectionLeaderboardListCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GameCentre-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface GKCollectionLeaderboardListCell : XXUnknownSuperclass {
	UIImageView* _iconView;
	UILabel* _nameLabel;
	UILabel* _ranksLabel;
}
@property(retain, nonatomic) UILabel* ranksLabel;
@property(retain, nonatomic) UILabel* nameLabel;
@property(retain, nonatomic) UIImageView* iconView;
+(float)defaultRowHeight;
-(void)prepareForReuse;
-(void)setupForLeaderboard:(id)leaderboard;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
