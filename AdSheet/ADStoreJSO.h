/* ADStoreJSO.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SSPurchaseRequestDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "ADJavaScriptObject.h"
#import "ADStoreJSO_Bindings.h"
#import "SSItemLookupRequestDelegate.h"

@class SSItemOffer, NSNumber, NSTimer, NSMutableArray, NSString, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface ADStoreJSO : ADJavaScriptObject <ADStoreJSO_Bindings, SSItemLookupRequestDelegate, SSPurchaseRequestDelegate, ABPeoplePickerNavigationControllerDelegate> {
	BOOL _currentPurchaseShouldIncludeiBooks;
	BOOL _hasRegisteredItems;
	NSNumber* _currentPurchaseAdamId;
	SSItemOffer* _currentPurchaseOffer;
	NSNumber* _currentPurchaseRingtoneAssigneeIdentifier;
	NSMutableDictionary* _registeredItems;
	NSTimer* _renewalTimer;
	NSMutableDictionary* _expirationTimers;
	NSMutableArray* _storeRequests;
	NSString* _iBooksBuyParameters;
}
@property(assign) BOOL hasRegisteredItems;
@property(copy, nonatomic) NSString* iBooksBuyParameters;
@property(retain, nonatomic) NSMutableArray* storeRequests;
@property(retain, nonatomic) NSMutableDictionary* expirationTimers;
@property(retain, nonatomic) NSTimer* renewalTimer;
@property(retain, nonatomic) NSMutableDictionary* registeredItems;
@property(copy, nonatomic) NSNumber* currentPurchaseRingtoneAssigneeIdentifier;
@property(assign) BOOL currentPurchaseShouldIncludeiBooks;
@property(retain, nonatomic) SSItemOffer* currentPurchaseOffer;
@property(copy, nonatomic) NSNumber* currentPurchaseAdamId;
+(void)initializeInContext:(id)context;
-(void)redeemiTunesGiftCode:(id)code listener:(id)listener;
-(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
-(void)purchaseRequest:(id)request purchaseDidSucceed:(id)purchase;
-(void)purchaseRequest:(id)request purchaseDidFail:(id)purchase withError:(id)error;
-(void)purchaseItemWithID:(id)anId offerIdentifier:(id)identifier listener:(id)listener;
-(void)_cancelPurchase;
-(void)_checkForiBooksApp;
-(void)_getRingtoneAssignee;
-(void)_purchaseCurrentItem;
-(void)requestDidFinish:(id)request;
-(void)_handleFailedAdamId:(id)anId;
-(void)request:(id)request didFailWithError:(id)error;
-(void)itemLookupRequest:(id)request didFindItems:(id)items;
-(void)itemMetadataExpired:(id)expired;
-(void)_validateItemMetadata;
-(void)_updateTimersForItem:(id)item validUntil:(double)until;
-(void)lookupItemWithID:(id)anId listener:(id)listener;
-(void)registerItemsForPurchase:(id)purchase;
-(void)_lookupRegisteredItems;
-(id)initWithDelegate:(id)delegate impressionController:(id)controller;
-(void)adWillDismiss;
-(void)dealloc;
@end
