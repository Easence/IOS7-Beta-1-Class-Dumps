/* StarkSearchGuidanceView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, StarkSearchInputModeController;

__attribute__((visibility("hidden")))
@interface StarkSearchGuidanceView : XXUnknownSuperclass {
	UILabel* _suggestionLabel1;
	UILabel* _suggestionLabel2;
	UILabel* _suggestionLabel3;
	StarkSearchInputModeController* _controller;
	BOOL _animating;
}
@property(readonly, assign, nonatomic) BOOL animating;
@property(assign, nonatomic) StarkSearchInputModeController* controller;
@property(retain, nonatomic) UILabel* suggestionLabel3;
@property(retain, nonatomic) UILabel* suggestionLabel2;
@property(retain, nonatomic) UILabel* suggestionLabel1;
-(void)touchesBegan:(id)began withEvent:(id)event;
-(void)finishEarly;
-(void)finishedAnimating;
-(void)startAnimatingOut;
-(void)startAnimatingSuggestion3;
-(void)startAnimatingSuggestion2;
-(void)startAnimating;
-(void)sizeToFit;
-(id)initWithFrame:(CGRect)frame controller:(id)controller;
@end
