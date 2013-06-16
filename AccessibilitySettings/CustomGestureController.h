/* CustomGestureController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "AccessibilityListController.h"

@class NSMutableArray, NSString, ASTGestureRecorderMainViewController, NSArray, NSIndexPath;

__attribute__((visibility("hidden")))
@interface CustomGestureController : AccessibilityListController {
@private
	NSMutableArray* _hiddenSpecifiers;
	NSMutableArray* _customGestures;
	BOOL _ignoreCustomGestureUpdate;
	ASTGestureRecorderMainViewController* _gestureRecorderMainViewController;
	NSIndexPath* _indexOfFirstGesture;
}
@property(retain, nonatomic) NSIndexPath* indexOfFirstGesture;
@property(readonly, assign, nonatomic) unsigned maximumNumberOfCustomGestures;
@property(readonly, assign, nonatomic) NSString* customGesturesExplanatoryText;
@property(readonly, assign, nonatomic) NSString* customGesturesTitle;
@property(readonly, assign, nonatomic) SEL customGesturesSetter;
@property(readonly, assign, nonatomic) SEL customGesturesGetter;
@property(readonly, assign, nonatomic) NSArray* customGestureSpecifiers;
-(id)tableView:(id)view targetIndexPathForMoveFromRowAtIndexPath:(id)indexPath toProposedIndexPath:(id)proposedIndexPath;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view moveRowAtIndexPath:(id)indexPath toIndexPath:(id)indexPath3;
-(void)tableView:(id)view commitEditingStyle:(int)style forRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canMoveRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(void)setEditing:(BOOL)editing animated:(BOOL)animated;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)willResignActive;
-(void)willBecomeActive;
-(void)createCustomGesture;
-(id)specifiers;
-(void)_resetGestureList;
-(void)_manageHiddenSpecifiers:(BOOL)specifiers;
-(void)_setCustomGestureName:(id)name specifier:(id)specifier;
-(id)_customGestureName:(id)name;
-(void)_resetCustomGestureOrdering;
-(void)saveItems;
-(void)_donePressed;
-(void)_editPressed;
-(void)_addEditButton;
-(void)_toggleCreateNewGestureButton:(BOOL)button;
-(BOOL)_shouldDisableCreateNewGestureButton;
-(id)specifierForKey:(id)key withSpecifiers:(id)specifiers;
-(void)dealloc;
-(id)init;
@end
