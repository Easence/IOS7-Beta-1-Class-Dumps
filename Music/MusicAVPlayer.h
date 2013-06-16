/* MusicAVPlayer.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class RadioStation;

__attribute__((visibility("hidden")))
@interface MusicAVPlayer : XXUnknownSuperclass {
}
@property(readonly, assign, nonatomic) RadioStation* currentStation;
+(id)sharedAVPlayer;
-(void)_endPlaybackIfNeededForCurrentNetwork;
-(void)reloadWithPlaybackContext:(id)playbackContext keepPlayingCurrentItemIfPossible:(BOOL)possible;
-(void)beginOrTogglePlayback;
-(void)beginPlayback;
-(void)_previewSessionDidStopNotification:(id)_previewSession;
-(void)_networkTypeDidChangeNotification:(id)_networkType;
-(void)_musicPlayer_defaultsDidChangeNotification;
-(void)_matchCellularRestrictedDidChangeNotification:(id)_matchCellularRestricted;
-(void)_downloadCancelledNotification:(id)notification;
-(void)dealloc;
-(id)init;
@end