/* RegulatoryPane.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Preferences-Structs.h"

@class UIScrollView, UIImageView;

__attribute__((visibility("hidden")))
@interface RegulatoryPane : XXUnknownSuperclass {
	UIScrollView* _scrollView;
	UIImageView* _primaryImageView;
	UIImageView* _secondaryImageView;
}
-(void)dealloc;
-(void)viewDidBecomeVisible;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
-(BOOL)handlesDoneButton;
@end
