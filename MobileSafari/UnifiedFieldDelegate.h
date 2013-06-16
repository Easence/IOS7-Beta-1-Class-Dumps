/* UnifiedFieldDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "UITextFieldDelegate.h"


@protocol UnifiedFieldDelegate <UITextFieldDelegate>
-(id)unifiedField:(id)field topHitForText:(id)text;
-(BOOL)unifiedField:(id)field shouldWaitForTopHitForText:(id)text;
-(void)unifiedField:(id)field didEndEditingWithSearch:(id)search;
-(void)unifiedField:(id)field didEndEditingWithAddress:(id)address;
@end
