/* BusinessPortalController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SKStoreProductViewControllerDelegate.h"

@class NSURL, NSMutableSet, SSLookupRequest, NSString;

__attribute__((visibility("hidden")))
@interface BusinessPortalController : XXUnknownSuperclass <SKStoreProductViewControllerDelegate> {
	BOOL _loading;
	SSLookupRequest* _storeRequest;
	NSMutableSet* _loadingCompletionHandlers;
	NSURL* _storeURL;
}
@property(copy, nonatomic) NSURL* storeURL;
@property(retain, nonatomic) SSLookupRequest* storeRequest;
@property(readonly, assign, nonatomic) NSString* actionText;
@property(readonly, assign, nonatomic) NSString* titleText;
-(void)productViewControllerDidFinish:(id)productViewController;
-(void)presentPortalForAction:(int)action business:(id)business fromViewController:(id)viewController;
-(BOOL)openPortalForAction:(int)action business:(id)business;
-(BOOL)canOpenPortalForAction:(int)action business:(id)business;
-(id)_portalURLForAction:(int)action business:(id)business;
-(void)presentPortalFromViewController:(id)viewController;
-(void)_presentPortalWithURL:(id)url fromViewController:(id)viewController;
-(BOOL)_openPortalWithURL:(id)url;
-(BOOL)openPortal;
-(id)_URLForOpeningPortal;
-(void)fetchPortalAvailabilityWithCompletion:(id)completion;
-(void)_refreshWithCompletionHandler:(id)completionHandler;
-(id)_URLScheme;
-(id)_bundleIdentifier;
-(id)_localizedTextForNetworkDefaultsKey:(id)networkDefaultsKey;
-(BOOL)_networkDefaultsAllowShowing;
-(BOOL)_canOpenAppDirectly;
-(void)dealloc;
@end
