/* ADSMessageCoordinator.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSXPCListenerDelegate.h"

@class NSTimer, NSMutableDictionary, NSMapTable, NSXPCListener;

__attribute__((visibility("hidden")))
@interface ADSMessageCoordinator : XXUnknownSuperclass <NSXPCListenerDelegate> {
	NSMapTable* _webviewRemoteTestingRegistry;
	BOOL _iBooksInstalled;
	NSMutableDictionary* _clientRecords;
	NSTimer* _loggingTimer;
	NSXPCListener* _xpcListener;
	double _startTime;
}
@property(retain, nonatomic) NSXPCListener* xpcListener;
@property(assign, nonatomic) double startTime;
@property(retain, nonatomic) NSTimer* loggingTimer;
@property(readonly, assign, nonatomic) NSMutableDictionary* clientRecords;
@property(readonly, assign, nonatomic) BOOL iBooksInstalled;
+(id)sharedInstance;
-(void)unregisterWebViewForRemoteTesting:(id)remoteTesting;
-(void)registerWebViewForRemoteTesting:(id)remoteTesting withIdentifier:(id)identifier;
-(id)_test_closeUnassignedBannerControllers:(id)controllers;
-(id)_test_runJavaScriptInWebView:(id)webView;
-(id)_test_resetDSIDToiAdIDMap:(id)map;
-(id)_test_reportiBooksInstalled:(id)installed;
-(void)_test_reportStatusBarVisibility:(id)visibility;
-(void)_test_createMemoryNotification:(id)notification;
-(void)_test_checkActiveAssertions:(id)assertions;
-(void)_test_tickleAssertions:(id)assertions;
-(id)_test_clearLocationPermissionCache:(id)cache;
-(id)_test_resetServerAccessCoordinator:(id)coordinator;
-(id)_test_clearAdCaches:(id)caches;
-(id)_test_clearResourceCache:(id)cache;
-(void)_test_clearURLCache:(id)cache;
-(void)_test_abort:(id)abort;
-(void)_test_terminate:(id)terminate;
-(void)sessionDidClose:(id)session;
-(void)_logClients:(id)clients;
-(BOOL)listener:(id)listener shouldAcceptNewConnection:(id)connection;
-(void)_handleAppStateChanged:(id)changed;
-(id)sessionForBundleID:(id)bundleID;
-(id)init;
@end
