/* EnvironmentTableViewCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIActivityIndicatorView, UIButton;

__attribute__((visibility("hidden")))
@interface EnvironmentTableViewCell : XXUnknownSuperclass {
	UIButton* _errorButton;
	UIActivityIndicatorView* _loadingView;
}
@property(readonly, assign, nonatomic) UIButton* errorButton;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)highlighted animated:(BOOL)animated;
-(void)configureFromEnvironment:(id)environment;
-(void)dealloc;
-(id)initWithReuseIdentifier:(id)reuseIdentifier;
-(void)_configureEnvironmentCell;
@end
