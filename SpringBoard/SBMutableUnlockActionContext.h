/* SBMutableUnlockActionContext.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnlockActionContext.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBMutableUnlockActionContext : SBUnlockActionContext {
}
@property(assign, nonatomic) BOOL canBypassPinLock;
@property(assign, nonatomic) BOOL deactivateAwayController;
@property(assign, nonatomic) BOOL requiresUnlock;
@property(assign, nonatomic) float lockLabelFontSize;
@property(copy, nonatomic) id unlockAction;
@property(retain, nonatomic) NSString* shortLockLabel;
@property(retain, nonatomic) NSString* lockLabel;
@property(retain, nonatomic) NSString* identifier;
@end
