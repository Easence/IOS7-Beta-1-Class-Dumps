/* SBSheetView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SBProxyRemoteView, SBFakeStatusBarView, SBApplication;

__attribute__((visibility("hidden")))
@interface SBSheetView : XXUnknownSuperclass {
	SBProxyRemoteView* _remoteProxyView;
	SBApplication* _app;
	SBFakeStatusBarView* _fakeStatusBarView;
	BOOL _wasPresentedAnimated;
}
-(void)dealloc;
-(void)noteSheetDidEnd;
-(BOOL)wasPresentedAnimated;
-(id)fakeStatusBarView;
-(id)application;
-(id)remoteViewIdentifier;
-(id)initWithRemoteViewIdentifier:(id)remoteViewIdentifier application:(id)application shouldFakeStatusBar:(BOOL)bar wasPresentedAnimated:(BOOL)animated;
@end
