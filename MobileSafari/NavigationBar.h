/* NavigationBar.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "_UIBasicAnimationFactory.h"
#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIView, UILongPressGestureRecognizer, UILabel, NavigationBarBackdrop, NavigationBarURLButton, NavigationBarLabelsContainer, CrossfadingImageView, UITapGestureRecognizer, NavigationBarReaderButton, _UIBackdropViewSettings, FluidProgressView, NSString, UIButton, DimmingButton, UIImageView, UnifiedField;
@protocol NavigationBarDelegate;

__attribute__((visibility("hidden")))
@interface NavigationBar : XXUnknownSuperclass <_UIBasicAnimationFactory> {
	UITapGestureRecognizer* _compressedBarTapRecognizer;
	UIView* _controlsContainer;
	NavigationBarLabelsContainer* _labelsContainer;
	UILabel* _URLLabel;
	UILabel* _expandedURLLabel;
	float _offsetOfURLInExpandedURL;
	UIView* _URLContainer;
	UIImageView* _URLFadeOut;
	UIView* _fakeTextFieldSelectionView;
	CrossfadingImageView* _searchIndicator;
	CrossfadingImageView* _lockView;
	CrossfadingImageView* _activeURLLabelAccessory;
	float _activeURLLabelAccessorySpacing;
	float _activeURLLabelAccessorySquishedSpacing;
	NavigationBarURLButton* _URLOutline;
	FluidProgressView* _progressView;
	NavigationBarBackdrop* _backdrop;
	UIView* _separator;
	BOOL _lockViewNeedsUpdate;
	NSString* _text;
	NSString* _textWhenExpanded;
	NavigationBarReaderButton* _readerButton;
	UIView* _stopReloadContainer;
	DimmingButton* _stopButton;
	DimmingButton* _reloadButton;
	BOOL _showsStopButton;
	UIButton* _cancelButton;
	UIButton* _backButton;
	UIButton* _forwardButton;
	UIView* _backForwardContainer;
	UILongPressGestureRecognizer* _backButtonLongPressRecognizer;
	UILongPressGestureRecognizer* _forwardButtonLongPressRecognizer;
	UIButton* _catalogButton;
	UIButton* _actionButton;
	UIButton* _cloudTabsButton;
	UIButton* _addTabButton;
	BOOL _usingLightControls;
	BOOL _showsLockIcon;
	BOOL _showsSearchIndicator;
	BOOL _showsReaderButton;
	BOOL _showsStopReloadButtons;
	BOOL _controlsHidden;
	BOOL _squishDisabled;
	BOOL _textHasEVCertificateTint;
	BOOL _lockIconHasEVCertificateTint;
	BOOL _backButtonEnabled;
	BOOL _forwardButtonEnabled;
	BOOL _expanded;
	BOOL _usesUnscaledBackdrop;
	unsigned _tintStyle;
	_UIBackdropViewSettings* _customBackdropSettings;
	unsigned _startIndexOfTextInExpandedText;
	UnifiedField* _textField;
	id<NavigationBarDelegate> _delegate;
	float _contentUnderStatusBarHeight;
	float _tabBarHeight;
}
@property(readonly, assign, nonatomic) float visualHeight;
@property(assign, nonatomic) float tabBarHeight;
@property(assign, nonatomic) float contentUnderStatusBarHeight;
@property(assign, nonatomic) id<NavigationBarDelegate> delegate;
@property(assign, nonatomic) BOOL usesUnscaledBackdrop;
@property(assign, nonatomic) BOOL updatesBackdrop;
@property(readonly, assign, nonatomic) CGRect URLOutlineFrameInNavigationBarSpace;
@property(readonly, assign, nonatomic) UnifiedField* textField;
@property(assign, nonatomic, getter=isExpanded) BOOL expanded;
@property(readonly, assign, nonatomic) unsigned startIndexOfTextInExpandedText;
@property(readonly, assign, nonatomic) NSString* textWhenExpanded;
@property(assign, nonatomic, getter=isForwardButtonEnabled) BOOL forwardButtonEnabled;
@property(assign, nonatomic, getter=isBackButtonEnabled) BOOL backButtonEnabled;
@property(assign, nonatomic) BOOL lockIconHasEVCertificateTint;
@property(assign, nonatomic) BOOL textHasEVCertificateTint;
@property(retain, nonatomic) _UIBackdropViewSettings* customBackdropSettings;
@property(assign, nonatomic, getter=isSquishDisabled) BOOL squishDisabled;
@property(assign, nonatomic, getter=areControlsHidden) BOOL controlsHidden;
@property(assign, nonatomic) BOOL showsStopReloadButtons;
@property(assign, nonatomic) BOOL showsReaderButton;
@property(assign, nonatomic) BOOL showsSearchIndicator;
@property(assign, nonatomic) BOOL showsLockIcon;
@property(retain, nonatomic) FluidProgressView* progressView;
@property(readonly, assign, nonatomic) NSString* text;
@property(assign, nonatomic, getter=isUsingLightControls) BOOL usingLightControls;
@property(assign, nonatomic) unsigned tintStyle;
+(float)minimumHeight;
+(float)defaultHeight;
-(id)_timingFunctionForAnimation;
-(id)_basicAnimationForView:(id)view withKeyPath:(id)keyPath;
-(void)_configureStopReloadButtonTintedImages;
-(void)_updateControlTints;
-(void)backdropDidApplySettings:(id)backdrop;
-(id)_lockImageUsingMiniatureVersion:(BOOL)version;
-(id)_lockImageWithTint:(id)tint usingMiniatureVersion:(BOOL)version;
-(id)_untintedLockImageUsingMiniatureVersion:(BOOL)version;
-(id)_EVCertLockAndTextColor;
-(void)_updateURLOutlineColor;
-(void)_updateSeparatorAlpha;
-(void)_updateSearchIndicator;
-(void)_updateTextColor;
-(void)setReaderButtonSelected:(BOOL)selected completion:(id)completion;
-(void)_updateReaderButtonTint;
-(void)_updateReaderButtonVisibility;
-(void)_updateLockViewIfNeeded;
-(void)_updateActiveURLLabelAccessory;
-(void)setText:(id)text textWhenExpanded:(id)expanded startIndex:(unsigned)index;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)layoutSubviews;
-(void)_updateBackdropFrame;
-(void)_updateBackForwardButtons;
-(void)_setShowsStopButton:(BOOL)button;
-(void)_updateStopReloadButtonVisibility;
-(void)_transitionFromButton:(id)button toButton:(id)button2;
-(float)_URLControlsAlpha;
-(float)_squishTransformFactor;
-(void)_updateProgress;
-(void)_cloudTabsButtonPressed;
-(void)_actionButtonPressed;
-(void)_addTabButtonPressed;
-(void)_cancelButtonTapped:(id)tapped;
-(void)_catalogButtonTapped;
-(void)_readerButtonTapped:(id)tapped;
-(void)_URLTapped:(id)tapped;
-(void)_compressedBarTapped;
-(void)_stopButtonPressed;
-(void)_reloadButtonPressed;
-(void)_forwardButtonLongPressed;
-(void)_forwardButtonPressed;
-(void)_backButtonLongPressed;
-(void)_backButtonPressed;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(id)_fadeOutImageWithSize:(CGSize)size opaquePoint:(CGPoint)point transparentPoint:(CGPoint)point3 leftCapWidth:(float)width topCapWidth:(float)width5;
-(id)_dimmingButtonWithAction:(SEL)action;
-(id)_newNavigationButtonWithImage:(id)image insets:(UIEdgeInsets)insets action:(SEL)action;
-(void)_updateBackdropStyle;
-(id)_backdropInputSettings;
@end
