/* AlarmScheduleCollectionView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileTimer-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class AlarmScheduleGridView, UIView, AlarmScheduleLayout, UILabel;

__attribute__((visibility("hidden")))
@interface AlarmScheduleCollectionView : XXUnknownSuperclass {
	UIView* _noAlarmsBackground;
	UILabel* _noAlarmsLabel;
	AlarmScheduleGridView* _gridView;
}
@property(assign, nonatomic, getter=isShowingNoAlarms) BOOL showingNoAlarms;
@property(readonly, assign, nonatomic) AlarmScheduleGridView* gridView;
@property(retain, nonatomic) AlarmScheduleLayout* collectionViewLayout;
-(id)frontmostVisibleCellWithAlarmBodyContainingPoint:(CGPoint)alarmBodyContainingPoint;
-(void)updateGridLayout;
-(void)setContentOffset:(CGPoint)offset;
-(void)setContentSize:(CGSize)size;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame collectionViewLayout:(id)layout;
@end
