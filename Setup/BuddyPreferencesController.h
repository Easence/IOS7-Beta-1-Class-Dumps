/* BuddyPreferencesController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface BuddyPreferencesController : XXUnknownSuperclass {
	NSMutableDictionary* _preferences;
}
+(id)buddyPreferences;
-(void)persist;
-(void)reset;
-(void)removeObjectForKey:(id)key;
-(void)setBool:(BOOL)aBool forKey:(id)key;
-(void)setObject:(id)object forKey:(id)key;
-(id)dictionaryForKey:(id)key;
-(BOOL)boolForKey:(id)key;
-(id)objectForKey:(id)key;
-(id)init;
@end
