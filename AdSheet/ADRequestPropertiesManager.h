/* ADRequestPropertiesManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ADRequestPropertiesManager : XXUnknownSuperclass {
	BOOL _hasDeterminedRoamingStatus;
	BOOL _internationalRoaming;
	NSString* _iTunesStorefront;
	NSString* _hardwareName;
	NSString* _osVersion;
	NSString* _homeCarrierMCC;
	NSString* _homeCarrierMNC;
	NSString* _currentCarrierMCC;
	NSString* _currentCarrierMNC;
}
@property(assign, nonatomic) BOOL internationalRoaming;
@property(copy, nonatomic) NSString* currentCarrierMNC;
@property(copy, nonatomic) NSString* currentCarrierMCC;
@property(copy, nonatomic) NSString* homeCarrierMNC;
@property(copy, nonatomic) NSString* homeCarrierMCC;
@property(readonly, assign, nonatomic) NSString* osVersion;
@property(readonly, assign, nonatomic) NSString* hardwareName;
@property(readonly, assign, nonatomic) NSString* iTunesStorefront;
@property(readonly, assign, nonatomic) BOOL hasDeterminedRoamingStatus;
+(id)sharedManager;
-(id)requestPropertiesForClient:(id)client;
-(id)_contentRestrictions;
-(void)_gatherTelephonyData;
-(void)setITunesStorefront:(id)storefront;
-(void)setHasDeterminedRoamingStatus:(BOOL)status;
-(void)_considerPostingRequiredPropertiesAcquired;
-(BOOL)_hasRequiredProperties;
-(id)init;
@end
