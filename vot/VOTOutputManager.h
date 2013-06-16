/* VOTOutputManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "vot-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock, NSMutableArray, AXTimer, VOTOutputRequestRunner, SCRCIndexMap;

@interface VOTOutputManager : XXUnknownSuperclass {
	CFArrayRef _queuedOutputRequests;
	NSMutableArray* _requestRunners;
	SCRCIndexMap* _components;
	NSLock* _queueLock;
	BOOL _lastRequestShouldNotBeInterrupted;
	BOOL _requestIsRunning;
	unsigned long _numberOfRequestSinceLastUninterruptable;
	float _cachedRate;
	BOOL _shutdown;
	VOTOutputRequestRunner* _onHoldRunner;
	AXTimer* _inactivateAudioTimer;
	BOOL _audioSessionActive;
}
+(id)outputManager;
+(id)outputManagerIfExists;
+(CFStringRef)copyUnicodeDescriptionStringForCharacter:(int)character;
-(void)playSoundFast:(id)fast;
-(void)playSoundFast:(id)fast completionBlock:(id)block;
-(void)speakSimpleString:(id)string braille:(BOOL)braille;
-(void)speakSimpleString:(id)string;
-(void)disableAudioSession;
-(void)enableAudioSession;
-(void)resumeCurrentRequest;
-(void)holdCurrentRequest;
-(BOOL)isSpeaking;
-(BOOL)isPaused;
-(id)pauseStringForType:(int)type;
-(void)stopSpeakingAtBoundary:(int)boundary allRequests:(BOOL)requests;
-(void)stopSpeakingAtBoundary:(int)boundary;
-(void)continueSpeaking;
-(void)pauseSpeakingAtBoundary:(int)boundary;
-(void)setRate:(float)rate;
-(float)speechRate;
-(void)resetSpeechRate;
-(float)defaultSpeechRate;
-(void)updateVoice;
-(void)setVolume:(float)volume;
-(void)setUseCompactVoice:(BOOL)voice;
-(void)alterVoiceOverVolume:(BOOL)volume;
-(float)volume;
-(void)updateVolume;
-(BOOL)isSystemMuted;
-(void)toggleSystemMute;
-(void)synchVolumeWithSystem;
-(id)componentForType:(int)type;
-(void)finishedOutputRequest:(id)request;
-(void)_dispatchNextQueuedRequest;
-(void)_handleProcessRequest:(id)request;
-(void)shutdown;
-(void)_handleRequestFinished:(id)finished;
-(void)clearQueue;
-(void)handleEvent:(id)event;
-(void)dealloc;
-(id)init;
@end
