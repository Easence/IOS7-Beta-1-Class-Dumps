/* ServiceProductView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "StoreKitUIService-Structs.h"

@class UIView;

__attribute__((visibility("hidden")))
@interface ServiceProductView : XXUnknownSuperclass {
	BOOL _adjustsForStatusBar;
	UIView* _containedView;
	CGRect _statusBarFrame;
}
@property(assign, nonatomic) CGRect statusBarFrame;
@property(retain, nonatomic) UIView* containedView;
@property(assign, nonatomic) BOOL adjustsForStatusBar;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
