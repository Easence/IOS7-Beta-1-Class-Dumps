/* GKNonFriendProfileViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "GKPlayerProfileCollectionViewController.h"


__attribute__((visibility("hidden")))
@interface GKNonFriendProfileViewController : GKPlayerProfileCollectionViewController <UIActionSheetDelegate> {
	BOOL _isRecommendation;
	BOOL _didFloatInBubbles;
}
@property(assign, nonatomic) BOOL didFloatInBubbles;
@property(assign, nonatomic) BOOL isRecommendation;
+(Class)headerViewClass;
-(void)didTouchAction;
-(void)setPlayer:(id)player;
-(void)alertView:(id)view didDismissWithButtonIndex:(int)buttonIndex;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)sendRequest:(id)request;
-(void)sendRequestTapped:(id)tapped;
-(void)handleActionButton:(int)button;
-(void)animateOutBubbleWithFocus:(int)focus completion:(id)completion;
-(void)viewDidAppear:(BOOL)view;
-(id)init;
-(float)preferredHeaderHeight;
@end
