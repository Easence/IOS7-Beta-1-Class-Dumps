/* MPPlaybackControlsDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPPlaybackControlsDelegate <NSObject>
@optional
-(void)controlsOverlay:(id)overlay didTapTrackInfoButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didTapRadioShareButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didTapRadioHistoryButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didTapRadioButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideRadioButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisableMailPodcastLinkButtonForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldHideMailPodcastLinkButtonForItem:(id)item;
-(void)controlsOverlay:(id)overlay didClickMailPodcastLinkButtonForItem:(id)item;
-(void)controlsOverlayDetailSliderInstructionOverlayWillHide:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderInstructionOverlayWillShow:(id)controlsOverlayDetailSliderInstructionOverlay;
-(void)controlsOverlayDetailSliderTrackingDidEnd:(id)controlsOverlayDetailSliderTracking;
-(void)controlsOverlayDetailSliderTrackingDidBegin:(id)controlsOverlayDetailSliderTracking;
-(BOOL)controlsOverlay:(id)overlay shouldUseDetailScrubberForItem:(id)item;
-(unsigned)controlsOverlay:(id)overlay playbackSpeedForItem:(id)item;
-(BOOL)controlsOverlay:(id)overlay shouldDisablePlaybackSpeedButtonForItem:(id)item;
-(void)controlsOverlayDidClickPlaybackSpeedButton:(id)controlsOverlay;
-(BOOL)controlsOverlay:(id)overlay shouldDisableFastFowardAndRewindButtonForItem:(id)item;
-(void)controlsOverlayDidClickFastForwardButton:(id)controlsOverlay;
-(void)controlsOverlayDidClickRewindButton:(id)controlsOverlay;
-(unsigned)shuffleTypeForPlaybackControls:(id)playbackControls;
-(unsigned)repeatTypeForPlaybackControls:(id)playbackControls;
-(BOOL)hideGeniusButtonForPlaybackControls:(id)playbackControls;
-(BOOL)playbackControlsScrubberShouldDisplaySingleChapters:(id)playbackControlsScrubber;
-(BOOL)playbackControlsDidTapGeniusButton:(id)playbackControls;
-(BOOL)playbackControls:(id)controls changedShuffleType:(unsigned)type;
-(BOOL)playbackControls:(id)controls changedRepeatType:(unsigned)type;
@end
