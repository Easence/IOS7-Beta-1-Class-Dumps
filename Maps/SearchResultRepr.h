/* SearchResultRepr.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Maps-Structs.h"

@class GEOPlace, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface SearchResultRepr : XXUnknownSuperclass {
	XXStruct_t9EeIA _searchSessionGUID;
	long long _obsoleteCid;
	double _timestamp;
	int _addressID;
	int _addressRecordID;
	NSMutableArray* _attributions;
	unsigned _flags;
	NSString* _mapsURL;
	NSMutableArray* _obsoleteAddressLines;
	NSString* _obsoleteCountryCode;
	NSString* _obsoleteCountryName;
	NSString* _obsoleteDependentLocality;
	NSString* _obsoleteFormattedAddress;
	int _obsoleteLatitudeE6Value;
	NSString* _obsoleteLocality;
	int _obsoleteLongitudeE6Value;
	NSString* _obsoleteName;
	NSString* _obsoletePhone;
	NSString* _obsoletePostalCode;
	NSString* _obsoleteReferenceURL;
	NSString* _obsoleteRegion;
	NSString* _obsoleteThoroughfare;
	int _originalType;
	GEOPlace* _place;
	int _resultIndex;
	int _searchSequenceNumber;
	NSString* _syncIdentifier;
	int _type;
	unsigned _unusedMapType;
	unsigned _zoomLevel;
	BOOL _hasIncompleteMetadata;
	BOOL _needsReverseGeocodeForNav;
	BOOL _obsoleteClosedListing;
	BOOL _obsoleteInexactPosition;
	BOOL _obsoleteUnverifiedListing;
	struct {
		unsigned searchSessionGUID : 1;
		unsigned obsoleteCid : 1;
		unsigned timestamp : 1;
		unsigned addressID : 1;
		unsigned addressRecordID : 1;
		unsigned flags : 1;
		unsigned obsoleteLatitudeE6Value : 1;
		unsigned obsoleteLongitudeE6Value : 1;
		unsigned resultIndex : 1;
		unsigned searchSequenceNumber : 1;
		unsigned zoomLevel : 1;
		unsigned hasIncompleteMetadata : 1;
		unsigned needsReverseGeocodeForNav : 1;
		unsigned obsoleteClosedListing : 1;
		unsigned obsoleteInexactPosition : 1;
		unsigned obsoleteUnverifiedListing : 1;
	} _has;
}
@property(assign, nonatomic) int addressID;
@property(assign, nonatomic) BOOL hasAddressID;
@property(assign, nonatomic) int addressRecordID;
@property(assign, nonatomic) BOOL hasAddressRecordID;
@property(retain, nonatomic) NSString* syncIdentifier;
@property(readonly, assign, nonatomic) BOOL hasSyncIdentifier;
@property(assign, nonatomic) int resultIndex;
@property(assign, nonatomic) BOOL hasResultIndex;
@property(assign, nonatomic) double timestamp;
@property(assign, nonatomic) BOOL hasTimestamp;
@property(assign, nonatomic) int searchSequenceNumber;
@property(assign, nonatomic) BOOL hasSearchSequenceNumber;
@property(assign, nonatomic) XXStruct_t9EeIA searchSessionGUID;
@property(assign, nonatomic) BOOL hasSearchSessionGUID;
@property(retain, nonatomic) NSMutableArray* attributions;
@property(assign, nonatomic) BOOL needsReverseGeocodeForNav;
@property(assign, nonatomic) BOOL hasNeedsReverseGeocodeForNav;
@property(assign, nonatomic) BOOL hasIncompleteMetadata;
@property(assign, nonatomic) BOOL hasHasIncompleteMetadata;
@property(retain, nonatomic) GEOPlace* place;
@property(readonly, assign, nonatomic) BOOL hasPlace;
@property(assign, nonatomic) BOOL obsoleteClosedListing;
@property(assign, nonatomic) BOOL hasObsoleteClosedListing;
@property(assign, nonatomic) BOOL obsoleteUnverifiedListing;
@property(assign, nonatomic) BOOL hasObsoleteUnverifiedListing;
@property(retain, nonatomic) NSMutableArray* obsoleteAddressLines;
@property(retain, nonatomic) NSString* obsoleteFormattedAddress;
@property(readonly, assign, nonatomic) BOOL hasObsoleteFormattedAddress;
@property(assign, nonatomic) long long obsoleteCid;
@property(assign, nonatomic) BOOL hasObsoleteCid;
@property(assign, nonatomic) BOOL obsoleteInexactPosition;
@property(assign, nonatomic) BOOL hasObsoleteInexactPosition;
@property(assign, nonatomic) unsigned zoomLevel;
@property(assign, nonatomic) BOOL hasZoomLevel;
@property(assign, nonatomic) int obsoleteLongitudeE6Value;
@property(assign, nonatomic) BOOL hasObsoleteLongitudeE6Value;
@property(assign, nonatomic) int obsoleteLatitudeE6Value;
@property(assign, nonatomic) BOOL hasObsoleteLatitudeE6Value;
@property(retain, nonatomic) NSString* obsoleteThoroughfare;
@property(readonly, assign, nonatomic) BOOL hasObsoleteThoroughfare;
@property(retain, nonatomic) NSString* obsoleteDependentLocality;
@property(readonly, assign, nonatomic) BOOL hasObsoleteDependentLocality;
@property(retain, nonatomic) NSString* mapsURL;
@property(readonly, assign, nonatomic) BOOL hasMapsURL;
@property(retain, nonatomic) NSString* obsoleteReferenceURL;
@property(readonly, assign, nonatomic) BOOL hasObsoleteReferenceURL;
@property(retain, nonatomic) NSString* obsoletePhone;
@property(readonly, assign, nonatomic) BOOL hasObsoletePhone;
@property(retain, nonatomic) NSString* obsoleteCountryName;
@property(readonly, assign, nonatomic) BOOL hasObsoleteCountryName;
@property(retain, nonatomic) NSString* obsoleteCountryCode;
@property(readonly, assign, nonatomic) BOOL hasObsoleteCountryCode;
@property(retain, nonatomic) NSString* obsoletePostalCode;
@property(readonly, assign, nonatomic) BOOL hasObsoletePostalCode;
@property(retain, nonatomic) NSString* obsoleteRegion;
@property(readonly, assign, nonatomic) BOOL hasObsoleteRegion;
@property(retain, nonatomic) NSString* obsoleteLocality;
@property(readonly, assign, nonatomic) BOOL hasObsoleteLocality;
@property(assign, nonatomic) unsigned flags;
@property(assign, nonatomic) BOOL hasFlags;
@property(retain, nonatomic) NSString* obsoleteName;
@property(readonly, assign, nonatomic) BOOL hasObsoleteName;
@property(assign, nonatomic) int originalType;
@property(assign, nonatomic) int type;
@property(assign, nonatomic) unsigned unusedMapType;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)copyTo:(id)to;
-(void)writeTo:(id)to;
-(BOOL)readFrom:(id)from;
-(id)dictionaryRepresentation;
-(id)description;
-(id)attributionsAtIndex:(unsigned)index;
-(unsigned)attributionsCount;
-(void)addAttributions:(id)attributions;
-(void)clearAttributions;
-(id)obsoleteAddressLineAtIndex:(unsigned)index;
-(unsigned)obsoleteAddressLinesCount;
-(void)addObsoleteAddressLine:(id)line;
-(void)clearObsoleteAddressLines;
-(void)dealloc;
@end