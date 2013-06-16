/* RemindersLocationPickerModel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Reminders-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "CLLocationManagerDelegate.h"

@class NSArray, NSMutableArray, RemindersLocationItem, CLLocationManager, CLGeocoder;

__attribute__((visibility("hidden")))
@interface RemindersLocationPickerModel : XXUnknownSuperclass <CLLocationManagerDelegate> {
	CLGeocoder* _geocoder;
	CLLocationManager* _locationManager;
	BOOL _needsUpdate;
	BOOL _isReverseGeocoding;
	void* _addressBook;
	NSArray* _locationItemsForMe;
	BOOL _meCardIsSet;
	int _operationCount;
	CFArrayRef _delegates;
	NSMutableArray* _itemsQueuedForGeocoding;
	BOOL _isReverseGeocodingQueued;
	int _selectedMeCardItem;
	int _selectedItemType;
	RemindersLocationItem* _currentLocationItem;
	RemindersLocationItem* _customLocationItem;
	RemindersLocationItem* _itemBeingGeocoded;
}
@property(retain, nonatomic) RemindersLocationItem* itemBeingGeocoded;
@property(retain, nonatomic) RemindersLocationItem* customLocationItem;
@property(readonly, assign, nonatomic) RemindersLocationItem* currentLocationItem;
@property(readonly, assign, nonatomic) void* addressBook;
@property(readonly, assign, nonatomic) BOOL meCardIsSet;
-(void).cxx_destruct;
-(void)locationManager:(id)manager didChangeAuthorizationStatus:(int)status;
-(id)_stringForAuthorizationStatus:(int)authorizationStatus;
-(void)locationManager:(id)manager didFailWithError:(id)error;
-(void)locationManager:(id)manager didUpdateLocations:(id)locations;
-(void)_endUpdatingCurrentLocation;
-(void)selectCustomLocation;
-(void)selectMeCardItem:(int)item;
-(void)selectCurrentLocation;
-(id)meCardItemAtIndex:(int)index;
-(int)numberOfMeCardItems;
-(int)selectedMeCardItem;
-(BOOL)isCustomLocationSelected;
-(BOOL)isCurrentLocationSelected;
-(int)numberOfPossibleLocationItems;
-(id)selectedLocationItem;
-(void)selectLocation:(id)location;
-(void)setCustomLocation:(id)location withAddressDictionary:(id)addressDictionary;
-(void)selectLocation:(id)location withAddressDictionary:(id)addressDictionary;
-(void)startUpdatingLocationItemsIfNecessary;
-(void)_giveUpGettingCurrentLocation;
-(void)_cancelUpdatingCurrentLocation;
-(void)_handleGeocodingAllItems;
-(void)_geocodeItem:(id)item;
-(void)_handleCompletedGeocodeWithPlacemarks:(id)placemarks error:(id)error;
-(void)_reverseGeocodeCurrentLocation;
-(void)_startNextGeocoderOperation;
-(BOOL)_isGeocoding;
-(id)cachedLocationForAddressDictionary:(id)addressDictionary;
-(void)_cacheLocation:(id)location forAddressDictionary:(id)addressDictionary;
-(void)_didEncounterError:(id)error;
-(void)_didUpdateCustomLocationItem;
-(void)_didUpdateMeCardItem:(int)item;
-(void)_didUpdateCurrentLocationItem;
-(void)_didChangeSelection;
-(void)removeDelegate:(id)delegate;
-(void)addDelegate:(id)delegate;
-(void)dealloc;
-(id)init;
-(void)_killTimer;
-(void)reloadMeCardLocationItems;
-(void)_endOperation;
-(void)_beginOperation;
@end
