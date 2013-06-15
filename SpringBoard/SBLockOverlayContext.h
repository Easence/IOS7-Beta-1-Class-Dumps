/* SBLockOverlayContext.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class UIViewController;
@protocol SBLockOverlayViewController;

__attribute__((visibility("hidden")))
@interface SBLockOverlayContext : XXUnknownSuperclass {
	UIViewController<SBLockOverlayViewController>* _viewController;
	unsigned _priority;
	id _activationBlock;
	id _deactivationBlock;
}
@property(copy, nonatomic) id deactivationBlock;
@property(copy, nonatomic) id activationBlock;
@property(readonly, assign, nonatomic) unsigned priority;
@property(readonly, assign, nonatomic) UIViewController<SBLockOverlayViewController>* viewController;
-(void)dealloc;
-(id)initWithOverlayViewController:(id)overlayViewController priority:(unsigned)priority;
@end
