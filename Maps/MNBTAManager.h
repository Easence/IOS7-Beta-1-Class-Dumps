/* MNBTAManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MNBTAManager : XXUnknownSuperclass {
	NSMutableArray* _jobs;
}
+(id)sharedManager;
-(void)_jobEvent:(id)event name:(id)name;
-(void)removeJob:(id)job;
-(void)addJob:(id)job;
-(id)_jobForName:(id)name;
-(void)dealloc;
-(id)init;
@end
