/* PHHandsetDialerNameLabelView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class UILabel;

__attribute__((visibility("hidden")))
@interface PHHandsetDialerNameLabelView : XXUnknownSuperclass {
	BOOL _isShowingAddToContactsLabel;
	UILabel* _nameAndLabelLabel;
	UILabel* _addToContactsLabel;
}
@property(assign) BOOL isShowingAddToContactsLabel;
@property(retain) UILabel* addToContactsLabel;
@property(retain) UILabel* nameAndLabelLabel;
-(void)showAddToContactsLabel;
-(void)showName:(id)name label:(id)label animated:(BOOL)animated;
-(void)setHighlighted:(BOOL)highlighted;
-(CGSize)intrinsicContentSize;
-(void)dealloc;
-(id)textColorForHighlightedState:(BOOL)highlightedState;
-(id)initWithFrame:(CGRect)frame;
@end
