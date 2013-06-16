/* LegacyInCallLCDView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class TPLegacyLCDTextView, NSTimer, UIButton, NSString, UIView, UIImageView;

__attribute__((visibility("hidden")))
@interface LegacyInCallLCDView : XXUnknownSuperclass {
	TPLegacyLCDTextView* _labelView2;
	TPLegacyLCDTextView* _textView2;
	UIView* _activeIndicator;
	int _activePosition;
	int _conferencePosition;
	UIImageView* _oldBkgndView;
	UIImageView* _newBkgndView;
	TPLegacyLCDTextView* _oldLabelView;
	TPLegacyLCDTextView* _oldLabelView2;
	TPLegacyLCDTextView* _oldTextView;
	TPLegacyLCDTextView* _oldTextView2;
	UIView* _oldActiveIndicator;
	UIButton* _conferenceButton;
	NSTimer* _alternatingTimer;
	NSString* _originalLabel;
	NSString* _originalLabel2;
	NSString* _alternateLabel;
	NSString* _alternateLabel2;
	id _delegate;
	unsigned _ignoreLayout : 1;
	unsigned _animating : 1;
	unsigned _progress : 1;
	unsigned _dimmedText : 2;
	unsigned _canTruncateLabel : 2;
	unsigned _enableFade : 1;
	unsigned _changingForAlternate : 1;
	BOOL _callerIsAmbiguous;
}
@property(assign, nonatomic) BOOL callerIsAmbiguous;
-(void)_alternate:(id)alternate;
-(void)_stopAlternating;
-(void)_startAlternating;
-(void)animateLabel;
-(void)popText;
-(void)animateCallMergeWithDuration:(float)duration;
-(int)conferencePosition;
-(void)setConferencePosition:(int)position;
-(void)_conferenceButtonClicked:(id)clicked;
-(void)_positionConferenceButton;
-(void)touchesEnded:(id)ended withEvent:(id)event;
-(void)setActiveIndicatorShowsProgress:(BOOL)progress;
-(void)animateToActivePosition:(int)activePosition label:(id)label label2:(id)a2;
-(void)setActivePosition:(int)position;
-(void)_updateForActivePosition;
-(id)_backgroundForPosition:(int)position;
-(void)_removeAnimationViews;
-(void)_positionActiveCallIndicator;
-(void)setSubImage:(id)image;
-(id)originalLabel2;
-(void)setAlternateLabel2:(id)a2;
-(id)originalLabel;
-(void)setAlternateLabel:(id)label;
-(void)setCanTruncateLabel2:(BOOL)a2;
-(id)label2;
-(void)setLabel2:(id)a2;
-(void)setLabel2:(id)a2 alternateLabel:(id)label;
-(id)text2;
-(void)setText2:(id)a2 animating:(BOOL)animating;
-(void)setText2Dimmed:(BOOL)dimmed;
-(void)setText2:(id)a2;
-(void)setCanTruncateLabel:(BOOL)label;
-(void)setLabelVisible:(BOOL)visible;
-(void)setLabel:(id)label;
-(void)setLabel:(id)label alternateLabel:(id)label2;
-(void)setTextDimmed:(BOOL)dimmed;
-(void)setText:(id)text animating:(BOOL)animating;
-(void)setText:(id)text;
-(void)setTextChangeFadingEnabled:(BOOL)enabled;
-(void)setTextScrolls:(BOOL)scrolls;
-(void)lcdTextViewCompletedScroll:(id)scroll;
-(void)performTextFadeWithDuration:(float)duration delay:(float)delay forView:(id*)view newText:(id)text setter:(SEL)setter position:(int)position;
-(void)_enableScrollingForTextView:(id)textView start:(BOOL)start;
-(void)_cancelScrollingForTextView:(id)textView;
-(void)_updateTextAttributes;
-(void)removeFromSuperview;
-(void)layoutSubviews;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
@end
