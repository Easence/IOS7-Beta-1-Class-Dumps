/* SLFacebookUpdateContactsFooterView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "PSHeaderFooterView.h"

@class UIActivityIndicatorView, UIProgressView, UILabel;

@interface SLFacebookUpdateContactsFooterView : XXUnknownSuperclass <PSHeaderFooterView> {
	UIActivityIndicatorView* _activityIndicator;
	UILabel* _footerLabel;
	UIProgressView* _progressIndicator;
	int _mode;
}
@property(readonly, assign, nonatomic) UILabel* footerLabel;
@property(readonly, assign, nonatomic) UIProgressView* progressIndicator;
@property(readonly, assign, nonatomic) UIActivityIndicatorView* activityIndicator;
@property(assign, nonatomic) int mode;
-(void).cxx_destruct;
-(float)preferredHeightForWidth:(float)width;
-(void)layoutSubviews;
-(id)initWithSpecifier:(id)specifier;
@end
