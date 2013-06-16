/* MNGuidanceSignsDisplay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "MNGuidanceDisplay.h"

@protocol MNGuidanceSignsDisplayDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignsDisplay : XXUnknownSuperclass <MNGuidanceDisplay> {
	BOOL _compact;
	BOOL _showsDimmedSigns;
	id<MNGuidanceSignsDisplayDelegate> _delegate;
	UIEdgeInsets _minimumEdgeInsets;
}
@property(readonly, assign, nonatomic) UIEdgeInsets minimumEdgeInsets;
@property(assign, nonatomic) BOOL compact;
@property(assign, nonatomic) BOOL showsDimmedSigns;
@property(assign, nonatomic) id<MNGuidanceSignsDisplayDelegate> delegate;
+(int)mainScreenSecondaryManeuverShieldSize;
+(int)mainScreenPrimaryManeuverShieldSize;
+(void)getImage:(out id*)image center:(out CGPoint*)center ofSize:(int)size scale:(float)scale fromShieldType:(int)shieldType text:(id)text idiom:(int)idiom;
+(id)signsDisplayWithContainingChromeViewController:(id)containingChromeViewController mode:(id)mode inView:(id)view;
-(void)hideSecondaryManeuver;
-(void)showSecondaryManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)setTimeToManeuver:(double)maneuver distanceToManeuver:(double)maneuver2;
-(void)showManeuverAlertForAnnouncementStage:(int)announcementStage;
-(void)showNewManeuver:(int)maneuver junction:(id)junction instructions:(id)instructions shorterAlternativeInstructions:(id)instructions4 shieldType:(int)type shieldText:(id)text drivingSide:(int)side signColor:(int)color;
-(void)setTotalRemainingTime:(double)time remainingDistance:(double)distance;
-(void)setDestinationDisplayName:(id)name;
-(void)showProceedingToRouteDistance:(double)routeDistance displayString:(id)string signColor:(int)color;
-(void)showRecalculatingWithSignColor:(int)signColor;
-(void)showArrived;
-(void)showNoGuidance;
-(void)layoutForUnobscuredBoundsChange;
-(void)setHidden:(BOOL)hidden animated:(BOOL)animated;
-(void)removeFromContainingViewController;
-(id)starkTopBarForInteractionModel:(int)interactionModel;
-(void)hideAuxiliaryChromeWithAnimation:(id)animation;
-(void)showAuxiliaryChromeWithAnimation:(id)animation;
-(void)setMinimumEdgeInsets:(UIEdgeInsets)insets;
-(void)setShowsDimmedSigns:(BOOL)signs animation:(id)animation;
-(id)initWithContainingChromeViewController:(id)containingChromeViewController mode:(id)mode inView:(id)view;
@end
