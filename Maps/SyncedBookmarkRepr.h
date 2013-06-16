/* SyncedBookmarkRepr.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SyncedBookmarkRepr : XXUnknownSuperclass {
	unsigned long long _businessID;
	double _latitude;
	double _longitude;
	double _regionLatitude;
	double _regionLatitudeDelta;
	double _regionLongitude;
	double _regionLongitudeDelta;
	NSString* _contactIdentifier;
	int _directionsMode;
	NSMutableArray* _places;
	unsigned _providerID;
	NSString* _singleLineAddress;
	NSString* _title;
	int _type;
	struct {
		unsigned businessID : 1;
		unsigned latitude : 1;
		unsigned longitude : 1;
		unsigned regionLatitude : 1;
		unsigned regionLatitudeDelta : 1;
		unsigned regionLongitude : 1;
		unsigned regionLongitudeDelta : 1;
		unsigned directionsMode : 1;
		unsigned providerID : 1;
	} _has;
}
@property(retain, nonatomic) NSMutableArray* places;
@property(assign, nonatomic) int directionsMode;
@property(assign, nonatomic) BOOL hasDirectionsMode;
@property(retain, nonatomic) NSString* contactIdentifier;
@property(readonly, assign, nonatomic) BOOL hasContactIdentifier;
@property(assign, nonatomic) unsigned long long businessID;
@property(assign, nonatomic) BOOL hasBusinessID;
@property(assign, nonatomic) unsigned providerID;
@property(assign, nonatomic) BOOL hasProviderID;
@property(assign, nonatomic) double regionLongitudeDelta;
@property(assign, nonatomic) BOOL hasRegionLongitudeDelta;
@property(assign, nonatomic) double regionLatitudeDelta;
@property(assign, nonatomic) BOOL hasRegionLatitudeDelta;
@property(assign, nonatomic) double regionLongitude;
@property(assign, nonatomic) BOOL hasRegionLongitude;
@property(assign, nonatomic) double regionLatitude;
@property(assign, nonatomic) BOOL hasRegionLatitude;
@property(assign, nonatomic) double longitude;
@property(assign, nonatomic) BOOL hasLongitude;
@property(assign, nonatomic) double latitude;
@property(assign, nonatomic) BOOL hasLatitude;
@property(retain, nonatomic) NSString* singleLineAddress;
@property(readonly, assign, nonatomic) BOOL hasSingleLineAddress;
@property(retain, nonatomic) NSString* title;
@property(readonly, assign, nonatomic) BOOL hasTitle;
@property(assign, nonatomic) int type;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)placesAtIndex:(unsigned)index;
-(unsigned)placesCount;
-(void)addPlaces:(id)places;
-(void)clearPlaces;
-(void)dealloc;
@end
