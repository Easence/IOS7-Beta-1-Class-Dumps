/* SBBulletinSoundController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBBulletinBusyClient.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "BBObserverDelegate.h"

@class BBObserver, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface SBBulletinSoundController : XXUnknownSuperclass <BBObserverDelegate, SBBulletinBusyClient> {
	BBObserver* _observer;
	NSMutableArray* _blockQueue;
	NSMutableDictionary* _playingSounds;
	BOOL _deviceIsLocked;
	BOOL _quietModeEnabled;
}
+(id)sharedInstanceIfExists;
+(id)sharedInstance;
+(id)_sharedInstanceCreateIfNecessary:(BOOL)necessary;
-(void)bulletinWindowStoppedBeingBusy;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(void)_enqueueBlock:(id)block forBulletin:(id)bulletin;
-(BOOL)_shouldHonorPlaySoundRequestForBulletin:(id)bulletin;
-(void)_hardwareButtonPressed:(id)pressed;
-(BOOL)quietModeEnabled;
-(void)killSounds;
-(void)killSoundForBulletin:(id)bulletin;
-(BOOL)playSoundForBulletin:(id)bulletin;
-(void)dealloc;
-(id)init;
@end
