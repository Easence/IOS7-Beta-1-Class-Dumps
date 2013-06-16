/* ServiceComposeReviewViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SKUIComposeReviewDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class SKUIComposeReviewViewController;

__attribute__((visibility("hidden")))
@interface ServiceComposeReviewViewController : XXUnknownSuperclass <SKUIComposeReviewDelegate> {
	SKUIComposeReviewViewController* _underlyingViewController;
}
+(id)_remoteViewControllerInterface;
+(id)_exportedInterface;
-(void)_dismissWithError:(id)error;
-(id)_clientViewControllerProxy;
-(void)loadReviewWithURL:(id)url;
-(void)finishStarRatingPromptWithRating:(id)rating;
-(void)composeReviewViewControllerDidSubmit:(id)composeReviewViewController;
-(BOOL)composeReviewViewController:(id)controller shouldSubmitReview:(id)review;
-(void)composeReviewViewControllerDidCancel:(id)composeReviewViewController;
-(void)_willAppearInRemoteViewController;
-(void)loadView;
-(void)dealloc;
@end
