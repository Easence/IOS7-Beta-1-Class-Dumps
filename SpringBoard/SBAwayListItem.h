/* SBAwayListItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUIQuietModePlayability.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBAwayListCellButtonHandler.h"

@class NSArray, NSDate, SBUnlockActionContext;

__attribute__((visibility("hidden")))
@interface SBAwayListItem : XXUnknownSuperclass <SBAwayListCellButtonHandler, SBUIQuietModePlayability> {
	NSDate* _timestamp;
	BOOL _isNewItem;
	SBUnlockActionContext* _unlockActionContext;
	NSArray* _buttonLabels;
}
@property(assign, nonatomic) BOOL isNewItem;
@property(retain, nonatomic) NSDate* timestamp;
@property(retain) NSArray* buttonLabels;
-(BOOL)overridesQuietMode;
-(BOOL)isCritical;
-(BOOL)inertWhenLocked;
-(void)dealloc;
-(BOOL)canBeClearedByNotificationCenter;
-(BOOL)wantsHighlightOnInsert;
-(int)snoozeButtonindex;
-(int)cancelButtonIndex;
-(void)buttonPressedAtIndex:(int)index;
@end
