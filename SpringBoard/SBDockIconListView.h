/* SBDockIconListView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBRootIconListView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBDockIconListView : SBRootIconListView {
}
+(unsigned)iconRowsForInterfaceOrientation:(int)interfaceOrientation;
+(unsigned)iconColumnsForInterfaceOrientation:(int)interfaceOrientation;
+(float)defaultHeight;
-(unsigned)columnAtPoint:(CGPoint)point;
-(CGPoint)originForIconAtCoordinate:(SBIconCoordinate)coordinate;
-(float)_additionalSideInsetToCenterIcons;
-(unsigned)rowAtPoint:(CGPoint)point;
-(id)iconAtPoint:(CGPoint)point index:(unsigned*)index proposedOrder:(int*)order grabbedIcon:(id)icon;
-(float)topIconInset;
-(unsigned)iconsInRowForSpacingCalculation;
-(BOOL)_shouldAnimatePropertyWithKey:(id)key;
-(int)iconLocation;
-(id)initWithModel:(id)model orientation:(int)orientation viewMap:(id)map;
@end
