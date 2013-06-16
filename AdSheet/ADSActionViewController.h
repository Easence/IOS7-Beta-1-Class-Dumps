/* ADSActionViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "ADSActionViewController_RPC.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class ADSAdSpaceController;

__attribute__((visibility("hidden")))
@interface ADSActionViewController : XXUnknownSuperclass <ADSActionViewController_RPC> {
	ADSAdSpaceController* _adSpaceController;
}
@property(assign, nonatomic) ADSAdSpaceController* adSpaceController;
+(void)cancelRequestForActionViewControllerForAdSpaceController:(id)adSpaceController;
+(void)requestActionViewControllerForAdSpaceController:(id)adSpaceController;
+(id)_exportedInterface;
-(void)_remote_viewControllerCreatedForAdSpaceControllerWithIdentifier:(id)identifier;
-(void)clientApplicationCancelledAction;
-(void)clientApplicationDidEnterBackground;
-(void)didSetAdSpaceController;
-(void)dealloc;
@end
