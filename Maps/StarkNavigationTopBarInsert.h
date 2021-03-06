/* StarkNavigationTopBarInsert.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "StarkToolbarTitleView.h"

@class MNGuidanceManeuverView, MNJunction, TwoPartTopBarLabel;

__attribute__((visibility("hidden")))
@interface StarkNavigationTopBarInsert : XXUnknownSuperclass <StarkToolbarTitleView> {
	MNGuidanceManeuverView* _maneuverView;
	TwoPartTopBarLabel* _distanceLabel;
	TwoPartTopBarLabel* _totalDistanceLabel;
	TwoPartTopBarLabel* _remainingTimeLabel;
	TwoPartTopBarLabel* _ETALabel;
	BOOL _showsManeuvers;
	int _displayedLightLevel;
	int _maneuver;
	MNJunction* _junction;
	int _drivingSide;
	double _distanceToNextManeuver;
	double _totalRemainingDistance;
	double _totalRemainingTime;
}
@property(assign, nonatomic) double totalRemainingTime;
@property(assign, nonatomic) double totalRemainingDistance;
@property(assign, nonatomic) double distanceToNextManeuver;
@property(assign, nonatomic) int drivingSide;
@property(retain, nonatomic) MNJunction* junction;
@property(assign, nonatomic) int maneuver;
@property(assign, nonatomic) int displayedLightLevel;
@property(assign, nonatomic) BOOL showsManeuvers;
+(id)_adjustedSecondaryAttributesFromThemeAttributes:(id)themeAttributes;
-(void)layoutSubviews;
-(void)_updateStyleValuesFromTheme;
-(void)_fadeViewIfNeeded:(id)needed forChanges:(id)changes;
-(BOOL)showsOwnBackdrop;
-(void)dealloc;
-(id)_newTwoPartLabelWithWeight:(int)weight;
-(id)initWithFrame:(CGRect)frame;
@end
