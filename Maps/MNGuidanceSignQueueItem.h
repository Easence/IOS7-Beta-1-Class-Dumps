/* MNGuidanceSignQueueItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MNGuidanceSignView, MNGuidanceSecondarySignView;

__attribute__((visibility("hidden")))
@interface MNGuidanceSignQueueItem : XXUnknownSuperclass {
	MNGuidanceSignView* _primarySignView;
	MNGuidanceSecondarySignView* _secondarySignView;
}
@property(retain, nonatomic) MNGuidanceSecondarySignView* secondarySignView;
@property(retain, nonatomic) MNGuidanceSignView* primarySignView;
-(void)dealloc;
@end
