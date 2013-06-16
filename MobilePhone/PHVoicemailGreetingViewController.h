/* PHVoicemailGreetingViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PHAudioRecorderDelegate.h"
#import "PHAudioPlayerDataSource.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "PHAudioPlayerDelegate.h"
#import "MobilePhone-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, UIButton, PHAudioRecorder, NSString, NSLayoutConstraint, NSIndexPath, NSDictionary, PHAudioPlayer, UITableView, UIView;
@protocol PHVoicemailGreetingViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PHVoicemailGreetingViewController : XXUnknownSuperclass <UITableViewDataSource, UITableViewDelegate, PHAudioRecorderDelegate, PHAudioPlayerDelegate, PHAudioPlayerDataSource> {
	UITableView* _tableView;
	UIView* _customView;
	UIButton* _playStopButton;
	UIButton* _recordStopButton;
	PHAudioRecorder* _greetingRecorder;
	PHAudioPlayer* _greetingPlayer;
	NSTimer* _greetingFetchTimeoutTimer;
	NSTimer* _greetingSaveTimeoutTimer;
	NSLayoutConstraint* _customViewButtonsYConstraint;
	NSLayoutConstraint* _customViewHeightConstraint;
	NSLayoutConstraint* _tableViewHeightConstraint;
	BOOL _hasRecordedNewGreeting;
	id<PHVoicemailGreetingViewControllerDelegate> _greetingDelegate;
	NSIndexPath* _selectedIndexPath;
	int _greetingAudioState;
	int _greetingUIState;
	NSDictionary* _previousRoute;
	double _newGreetingDuration;
}
@property(readonly, assign) unsigned long long expectedTotalBytes;
@property(readonly, assign) unsigned long long availableBytes;
@property(readonly, assign) double duration;
@property(readonly, assign) BOOL fullFileAvailable;
@property(readonly, assign) NSString* audioFilePath;
@property(assign) double newGreetingDuration;
@property(assign) BOOL hasRecordedNewGreeting;
@property(retain) NSDictionary* previousRoute;
@property(readonly, assign) PHAudioPlayer* greetingPlayer;
@property(readonly, assign) PHAudioRecorder* greetingRecorder;
@property(assign, nonatomic) int greetingUIState;
@property(assign, nonatomic) int greetingAudioState;
@property(retain, nonatomic) NSIndexPath* selectedIndexPath;
@property(assign) id<PHVoicemailGreetingViewControllerDelegate> greetingDelegate;
-(void)_stopListeningForGreetingSaveNotifications;
-(void)_stopListeningForGreetingFetchNotifications;
-(void)_nukeStoredGreetingFile;
-(id)greetingTempFileLocation;
-(void)_updateForGreetingUIState;
-(void)_updateButtonTitles;
-(void)_updateUI;
-(void)_updateFonts;
-(void)_handleContentSizeDidChange:(id)_handleContentSize;
-(void)_greetingSaveTimedOut;
-(void)_greetingSaveCompleted:(id)completed;
-(void)_greetingFetchTimedOut;
-(void)_greetingFetchContinued:(id)continued;
-(void)_greetingFetchBegan:(id)began;
-(void)_greetingFetchEnded:(id)ended;
-(void)_recordStopButtonTapped:(id)tapped withEvent:(id)event;
-(void)_playStopButtonTapped:(id)tapped withEvent:(id)event;
-(void)_saveButtonTapped;
-(void)_cancelButtonTapped;
-(void)stoppedPlayingWithDataSource:(id)dataSource withError:(id)error;
-(void)updateWithElapsedTime:(double)elapsedTime playableTime:(double)time totalTime:(double)time3 isPlaying:(BOOL)playing isPlayable:(BOOL)playable dataSource:(id)source;
-(void)startedPlayingWithDataSource:(id)dataSource;
-(void)audioRecorderEndedWithFile:(id)file duration:(double)duration error:(id)error;
-(void)audioRecorderStartedWithFile:(id)file;
-(void)setSelectedIndexPath:(id)path animated:(BOOL)animated;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)loadView;
-(void)dealloc;
-(id)init;
@end
