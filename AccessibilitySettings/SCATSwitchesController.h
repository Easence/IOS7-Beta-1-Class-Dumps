/* SCATSwitchesController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilitySettings-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SCATSwitchesController : XXUnknownSuperclass {
}
-(BOOL)tableView:(id)view shouldIndentWhileEditingRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(id)nameStringWithSpecifier:(id)specifier;
-(id)_switchSpecifiersWithType:(NSString*)type;
-(BOOL)_shouldAllowEditing;
-(void)viewWillAppear:(BOOL)view;
-(id)specifiers;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
@end
