/* ADReminderComposerJSO_Bindings.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "JSExport.h"

@class JSValue;

@protocol ADReminderComposerJSO_Bindings <JSExport>
@property(retain, nonatomic) JSValue* listener;
-(void)presentComposerForReminder:(id)reminder fromRect:(id)rect;
@optional
-(void)presentComposerForReminder:(id)reminder fromRect:(id)rect __JS_EXPORT_AS__presentComposerForReminder:(id)reminder3;
@end
