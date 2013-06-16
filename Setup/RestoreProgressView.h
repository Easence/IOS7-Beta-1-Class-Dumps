/* RestoreProgressView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Setup-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIProgressView, UILabel;

__attribute__((visibility("hidden")))
@interface RestoreProgressView : XXUnknownSuperclass {
	UIProgressView* _restoreProgressBar;
	UILabel* _restoringLabel;
	UILabel* _timeRemainingLabel;
}
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTimeRemainingEstimateString:(id)string;
-(void)setRestorationTaskString:(id)string;
-(void)setProgress:(float)progress;
-(void)willMoveToSuperview:(id)superview;
-(id)initWithFrame:(CGRect)frame;
@end