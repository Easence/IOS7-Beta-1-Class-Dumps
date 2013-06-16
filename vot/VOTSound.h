/* VOTSound.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "vot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class VOTOutputAction;

__attribute__((visibility("hidden")))
@interface VOTSound : XXUnknownSuperclass {
	VOTOutputAction* _action;
	OpaqueAudioFileID* _audioFileID;
	OpaqueAudioComponentInstance* _audioUnit;
	unsigned long _soundID;
	id _delegate;
	id _owner;
	id _completionBlock;
	BOOL _soundCompletionInstalled;
}
@property(copy, nonatomic) id completionBlock;
-(void)play;
-(void)_finishedPlaying;
-(id)action;
-(void)setAction:(id)action;
-(id)owner;
-(void)setOwner:(id)owner;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(void)setVolume:(float)volume;
-(id)initWithSoundPath:(id)soundPath;
@end
