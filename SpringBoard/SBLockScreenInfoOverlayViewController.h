/* SBLockScreenInfoOverlayViewController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBLockOverlayViewDelegate.h"
#import "SBLockOverlayViewController.h"

@class NSString, SBLockScreenInfoOverlayView;
@protocol SBLockScreenInfoOverlayDelegate;

__attribute__((visibility("hidden")))
@interface SBLockScreenInfoOverlayViewController : XXUnknownSuperclass <SBLockOverlayViewDelegate, SBLockOverlayViewController> {
	SBLockScreenInfoOverlayView* _overlayView;
	NSString* _title;
	id<SBLockScreenInfoOverlayDelegate> _delegate;
}
@property(assign, nonatomic) id<SBLockScreenInfoOverlayDelegate> delegate;
-(void)handleTapGestureFromView:(id)view;
-(id)overlayView;
-(void)loadView;
-(void)dealloc;
-(id)initWithTitle:(id)title;
@end
