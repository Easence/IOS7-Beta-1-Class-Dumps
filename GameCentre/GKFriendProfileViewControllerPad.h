/* GKFriendProfileViewControllerPad.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "GKPlayerProfileCollectionViewController.h"

@class GKValueWithCaptionBubbleControl;

__attribute__((visibility("hidden")))
@interface GKFriendProfileViewControllerPad : GKPlayerProfileCollectionViewController {
	GKValueWithCaptionBubbleControl* _gamesBubble;
	GKValueWithCaptionBubbleControl* _pointsBubble;
	GKValueWithCaptionBubbleControl* _friendsBubble;
}
@property(retain, nonatomic) GKValueWithCaptionBubbleControl* friendsBubble;
@property(retain, nonatomic) GKValueWithCaptionBubbleControl* pointsBubble;
@property(retain, nonatomic) GKValueWithCaptionBubbleControl* gamesBubble;
-(void)didSelectDifferentSegment:(id)segment;
-(void)didUpdateModel;
-(void)configureViewFactories;
-(void)updateMetrics;
-(void)didTouchActionsButton;
-(void)dealloc;
-(id)init;
-(float)preferredHeaderHeight;
@end
