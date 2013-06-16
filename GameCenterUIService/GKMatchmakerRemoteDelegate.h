/* GKMatchmakerRemoteDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */



@protocol GKMatchmakerRemoteDelegate
-(void)applicationWillEnterForeground;
-(void)setNearbyPlayer:(id)player reachable:(BOOL)reachable;
-(void)inviterCancelled;
-(void)setAutomatchFailedWithError:(id)error;
-(void)setInvitesFailedWithError:(id)error;
-(void)setPlayer:(id)player sentData:(id)data;
-(void)setPlayer:(id)player connected:(BOOL)connected;
-(void)setPlayer:(id)player responded:(int)responded;
-(void)setAutomatchPlayerCount:(int)count;
-(void)setDefaultInvitationMessage:(id)message;
-(void)setExistingPlayers:(id)players;
-(void)setAcceptedInviteInternal:(id)internal;
-(void)setMatchRequestInternal:(id)internal;
-(void)setHosted:(BOOL)hosted;
@end
