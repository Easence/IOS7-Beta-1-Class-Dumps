/* BuddyAppleIDUpdateController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BuddyController.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class BuddyAppleIDController;

__attribute__((visibility("hidden")))
@interface BuddyAppleIDUpdateController : XXUnknownSuperclass <BuddyController> {
	id _delegate;
	BuddyAppleIDController* _appleIDController;
}
-(id)navControllerForCreateAppleIDPages:(id)createAppleIDPages;
-(void)appleIDControllerFinished:(id)finished success:(BOOL)success;
-(id)viewController;
-(BOOL)shouldAllowStartOver;
-(BOOL)controllerAllowsNavigatingBack;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithAccount:(id)account;
@end
