/* ASFeaturedViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SKUICategoryControllerDelegate.h"

@class SKUICategoryController, NSURL, SKUIStorePageViewController, NSString, ASLaunchNotificationsController;

__attribute__((visibility("hidden")))
@interface ASFeaturedViewController : XXUnknownSuperclass <SKUICategoryControllerDelegate> {
	SKUICategoryController* _categoryController;
	ASLaunchNotificationsController* _launchNotificationsController;
	NSString* _overrideTitle;
	SKUIStorePageViewController* _storePageViewController;
	NSURL* _url;
}
-(void).cxx_destruct;
-(id)_storePageViewController;
-(void)_reloadNavigationItem;
-(void)_finishLoadWithResult:(BOOL)result error:(id)error;
-(id)_categoryController;
-(void)_applicationWillEnterForeground:(id)_application;
-(void)categoryController:(id)controller didSelectCategory:(id)category;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)viewWillAppear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)loadView;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)decodeRestorableStateWithCoder:(id)coder;
-(void)setClientContext:(id)context;
-(void)reloadDataWithDefaultURL;
-(void)reloadData;
-(void)dealloc;
-(id)initWithURL:(id)url;
-(id)init;
@end
