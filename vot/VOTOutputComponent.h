/* VOTOutputComponent.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "vot-Structs.h"


__attribute__((visibility("hidden")))
@interface VOTOutputComponent : XXUnknownSuperclass {
	unsigned long long _currentOutputActionID;
}
-(void)notifyActionComplete:(id)complete;
-(void)notifyRangeWillOutput:(NSRange)notifyRange container:(id)container;
-(void)handleEvent:(id)event;
-(void)preprocessAction:(id)action;
-(void)setCurrentOutputActionID:(unsigned long long)anId;
-(void)performAction:(id)action owner:(id)owner;
@end
