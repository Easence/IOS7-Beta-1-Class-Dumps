/* ASApplePackHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AppStore-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIButton, UILabel, UIControl, NSString, UIView, UIColor;

__attribute__((visibility("hidden")))
@interface ASApplePackHeaderView : XXUnknownSuperclass {
	UIView* _backgroundView;
	float _bottomInset;
	UIView* _dividerView;
	UIButton* _downloadAllButton;
	UILabel* _explanationLabel;
	UIView* _separatorView;
}
@property(retain, nonatomic) UIColor* headerColor;
@property(copy, nonatomic) NSString* explanationText;
@property(copy, nonatomic) NSString* downloadAllText;
@property(readonly, assign, nonatomic) UIControl* downloadAllButton;
@property(assign, nonatomic) float bottomInset;
-(void).cxx_destruct;
-(CGSize)sizeThatFits:(CGSize)fits;
-(void)setBackgroundColor:(id)color;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end