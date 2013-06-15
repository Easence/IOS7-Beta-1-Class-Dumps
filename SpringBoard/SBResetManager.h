/* SBResetManager.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSLock;

__attribute__((visibility("hidden")))
@interface SBResetManager : XXUnknownSuperclass {
	BOOL _threadRunning;
	NSLock* _lock;
	int _mode;
	NSLock* _progressLock;
	float _progress;
}
+(id)sharedInstance;
-(void)_resetFinished;
-(void)_postResetEnded;
-(void)_resetThread;
-(void)_beginReset:(id)reset;
-(void)beginReset;
-(float)progress;
-(void)setProgress:(float)progress;
-(void)setMode:(int)mode;
-(void)dealloc;
-(id)init;
@end
