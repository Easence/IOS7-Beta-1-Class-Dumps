/* DebugTableSection.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSMutableArray, DebugValuesViewController, NSString;

__attribute__((visibility("hidden")))
@interface DebugTableSection : XXUnknownSuperclass {
	DebugValuesViewController* _displayingViewController;
	NSString* _title;
	NSString* _footer;
	NSArray* _rows;
	NSMutableArray* _mutableRows;
}
@property(readonly, assign, nonatomic) NSArray* rows;
@property(copy, nonatomic) NSString* footer;
@property(copy, nonatomic) NSString* title;
@property(assign, nonatomic) DebugValuesViewController* displayingViewController;
-(id)addCheckmarkRowsGroupWithContent:(id)content defaultsKey:(id)key changeHandler:(id)handler;
-(id)addCheckmarkRowsGroupWithContent:(id)content defaultsKey:(id)key checkedRowValueIfUnset:(id)unset changeHandler:(id)handler;
-(id)addCheckmarkRowsGroupWithContent:(id)content get:(id)get set:(id)set;
-(id)addEmptySectionBannerRowWithTitle:(id)title;
-(id)addButtonRowWithTitle:(id)title action:(id)action;
-(id)addTextFieldRowWithTitle:(id)title placeholderText:(id)text inputType:(int)type defaultsKey:(id)key;
-(id)addTextFieldRowWithTitle:(id)title placeholderText:(id)text inputType:(int)type get:(id)get set:(id)set;
-(id)addSliderRowWithTitle:(id)title subtitleStringFormat:(id)format min:(float)min max:(float)max defaultsKey:(id)key sliderValueIfUnset:(float)unset changeHandler:(id)handler;
-(id)addSliderRowWithTitle:(id)title subtitleStringFormat:(id)format min:(float)min max:(float)max get:(id)get set:(id)set;
-(id)addSwitchRowWithTitle:(id)title get:(id)get set:(id)set;
-(id)addSwitchRowWithTitle:(id)title defaultsKey:(id)key switchOnStateIfUnset:(BOOL)unset changeHandler:(id)handler;
-(id)addSwitchRowWithTitle:(id)title defaultsKey:(id)key;
-(id)addNavigationRowWithTitle:(id)title viewControllerContent:(id)content;
-(id)addNavigationRowForViewControllerClass:(Class)viewControllerClass;
-(id)addNavigationRowWithTitle:(id)title action:(id)action;
-(void)commit;
-(void)addRow:(id)row;
-(void)dealloc;
-(id)addCheckmarkRowsGroupWithContent:(id)content object:(id)object key:(id)key;
-(id)addSwitchRowWithTitle:(id)title vectorKitDebugKey:(id)key map:(id)map;
-(id)addSwitchRowWithTitle:(id)title object:(id)object key:(id)key;
@end
