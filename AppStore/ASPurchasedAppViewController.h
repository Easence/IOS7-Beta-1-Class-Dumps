/* ASPurchasedAppViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "UISearchBarDelegate.h"
#import "AppStore-Structs.h"

@class NSString, ASPurchasesDatabase, NSOperationQueue, NSObject, SKUIClientContext, NSArray;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface ASPurchasedAppViewController : XXUnknownSuperclass <UISearchBarDelegate> {
	SKUIClientContext* _clientContext;
	int _currentDeviceType;
	int _currentSortIndex;
	ASPurchasesDatabase* _database;
	BOOL _hideInstalledApps;
	NSOperationQueue* _operationQueue;
	NSOperationQueue* _searchOperationQueue;
	NSString* _searchString;
	NSObject<OS_dispatch_source>* _searchTimer;
}
@property(retain, nonatomic) NSOperationQueue* operationQueue;
@property(readonly, assign, nonatomic) NSArray* titlesForAvailableSortOrders;
@property(assign, nonatomic) int currentDeviceType;
@property(assign, nonatomic) int currentSortIndex;
@property(assign, nonatomic) BOOL hideInstalledApps;
@property(retain, nonatomic) SKUIClientContext* clientContext;
-(void).cxx_destruct;
-(void)_searchTimerFiredWithString:(id)string;
-(id)_removeInstalledAppsFromPurchasedApps:(id)purchasedApps;
-(void)_cancelSearchTimer;
-(void)_databaseDidChangeNotification:(id)_database;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)_searchStringDidChange:(id)_searchString;
-(void)_currentItemsDidChange;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)encodeRestorableStateWithCoder:(id)coder;
-(void)decodeRestorableStateWithCoder:(id)coder;
-(id)currentItems;
-(void)dealloc;
-(id)init;
@end