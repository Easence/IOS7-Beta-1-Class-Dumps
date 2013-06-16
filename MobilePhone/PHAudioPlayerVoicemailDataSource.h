/* PHAudioPlayerVoicemailDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PHAudioPlayerDataSource.h"

@class NSObject, VMVoicemail, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PHAudioPlayerVoicemailDataSource : XXUnknownSuperclass <PHAudioPlayerDataSource> {
	VMVoicemail* _voicemail;
	NSObject<OS_dispatch_queue>* _modifyingFileSizeQueue;
	unsigned long long _expectedTotalBytes;
	unsigned long long _availableBytes;
}
@property(readonly, assign) unsigned long long expectedTotalBytes;
@property(readonly, assign) unsigned long long availableBytes;
@property(readonly, assign) double duration;
@property(readonly, assign) BOOL fullFileAvailable;
@property(readonly, assign) NSString* audioFilePath;
@property(readonly, assign) VMVoicemail* voicemail;
-(void)_handleDataAvailable:(id)available;
-(void)_handlePlayableDurationChanged:(id)changed;
-(void)_deregisterForVoicemailNotifications;
-(void)_registerForVoicemailNotifications;
-(void)dealloc;
-(id)initWithVoicemail:(id)voicemail;
@end
