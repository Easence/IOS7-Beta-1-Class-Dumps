/* SBAwayBulletinListController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBAwayBulletinListViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "SpringBoard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SBVolumePressBandit.h"
#import "BBObserverDelegate.h"

@class SBAwayBulletinCell, UIView, NSArray, SBUnlockActionContext, BBObserver, NSMutableArray, SBAwayBulletinListView;

__attribute__((visibility("hidden")))
@interface SBAwayBulletinListController : XXUnknownSuperclass <SBVolumePressBandit, BBObserverDelegate, UITableViewDataSource, UITableViewDelegate, SBAwayBulletinListViewDelegate> {
	BBObserver* _observer;
	NSMutableArray* _listItems;
	NSMutableArray* _realertTimers;
	SBAwayBulletinCell* _unlockingCell;
	BOOL _lockBarIsTracking;
	NSMutableArray* _trackingCells;
	SBAwayBulletinListView* _view;
	CGRect _viewRect;
	float _contentHeight;
	BOOL _dimmed;
	BOOL _presentingNewBulletin;
	BOOL _dimmingForLockButtonPress;
	BOOL _hibernating;
	BOOL _quietModeEnabled;
	BOOL _autoHidesNotifications;
	BOOL _autoHideTimerActive;
	BOOL _hasManuallyShownNotifications;
	CGAffineTransform _pinnedViewTransform;
	SBUnlockActionContext* _actionContext;
	NSMutableArray* _pendingSystemAlerts;
	id _itemToBlink;
	id _itemToFloat;
}
@property(readonly, assign, nonatomic) BOOL quietModeEnabled;
@property(assign, nonatomic) BOOL autoHidesNotifications;
@property(readonly, assign, nonatomic) BOOL presentingNewBulletin;
@property(readonly, assign, nonatomic) NSArray* listItems;
@property(readonly, assign, nonatomic) BOOL lockBarIsTracking;
@property(assign, nonatomic) CGRect viewRect;
@property(assign, nonatomic) BOOL dimmed;
@property(readonly, assign, nonatomic) UIView* view;
-(void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;
-(void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(void)willRotateToInterfaceOrientation:(int)interfaceOrientation duration:(double)duration;
-(float)_rowHeightForItem:(id)item floating:(BOOL)floating;
-(void)_configureAndPositionView;
-(void)setPinnedViewTransform:(CGAffineTransform)transform;
-(void)setViewHiddenForUnlock:(BOOL)unlock force:(BOOL)force;
-(void)setViewHiddenForUnlock:(BOOL)unlock;
-(double)animationDurationForShowPasscodeUI:(BOOL)showPasscodeUI duration:(double)duration;
-(double)animationDelayForShowPasscodeUI:(BOOL)showPasscodeUI duration:(double)duration;
-(void)tableView:(id)view willDisplayCell:(id)cell forRowAtIndexPath:(id)indexPath;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewDidEndDragging:(id)scrollView willDecelerate:(BOOL)decelerate;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(BOOL)tableView:(id)view canEditRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)_setContentForTableCell:(id)tableCell withItem:(id)item floating:(BOOL)floating;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)pendOrDeactivateAlertItems:(BOOL)items;
-(void)deactivateAlertItem:(id)item;
-(void)activateAlertItem:(id)item didUndimScreen:(BOOL)screen;
-(void)updateCardItem:(id)item;
-(void)deactivateCardItem:(id)item;
-(void)activateCardItem:(id)item animated:(BOOL)animated;
-(void)activateOrUpdateCardItem:(id)item animated:(BOOL)animated;
-(void)observer:(id)observer noteServerConnectionStateChanged:(BOOL)changed;
-(void)observer:(id)observer noteInvalidatedBulletinIDs:(id)ids;
-(void)observer:(id)observer noteAlertBehaviorOverridesChanged:(unsigned)changed;
-(id)observer:(id)observer composedAttachmentImageForType:(int)type thumbnailData:(id)data key:(id)key;
-(id)observer:(id)observer multipleThumbnailSizeConstraintsForAttachmentType:(int)attachmentType;
-(BOOL)observerShouldFetchAttachmentImageBeforeBulletinDelivery:(id)observer;
-(void)observer:(id)observer removeBulletin:(id)bulletin;
-(void)observer:(id)observer modifyBulletin:(id)bulletin;
-(void)observer:(id)observer addBulletin:(id)bulletin forFeed:(unsigned)feed;
-(id)_floatingItemToUseForNewItem:(id)newItem;
-(void)_updateModelAndTableViewForRemoval:(id)removal originalHeight:(float)height;
-(void)_updateModelAndTableViewForReplacingItem:(id)replacingItem withNewItem:(id)newItem;
-(void)_updateModelAndTableViewForModification:(id)modification originalHeight:(float)height;
-(void)_updateModelAndTableViewForAddition:(id)addition;
-(void)_updateModelAndTableViewForAddition:(id)addition animated:(BOOL)animated;
-(int)_rowAnimationForDelete;
-(int)_rowAnimationForInsert;
-(void)_hardwareButtonPressed:(id)pressed;
-(void)_scheduleRealerts:(id)realerts;
-(void)_killRealerts:(id)realerts;
-(void)_realertTimerFired:(id)fired;
-(void)_alertForBulletin:(id)bulletin;
-(BOOL)_shouldTreatBulletinAsInert:(id)inert;
-(void)_forceTopBarShadowVisibilityUpdate;
-(BOOL)wantsToHideTopBarShadow;
-(void)resetLockBarIfUnlocking;
-(void)resetLockBarsIfTracking;
-(void)lockBarStoppedTrackingForCell:(id)cell;
-(void)lockBarStartedTrackingForCell:(id)cell;
-(BOOL)setUnlockingTableViewCell:(id)cell;
-(void)_awayControllerRelocked:(id)relocked;
-(BOOL)usesFloatingPanelAndBlinkingItems;
-(void)_autoDismissTimerElapsed;
-(void)_startOrEndAutoDismissTimerIfNecessary;
-(void)_cancelAutoDismissTimer;
-(void)sliderGrabDidEnd;
-(void)sliderGrabWillEnd:(BOOL)sliderGrab;
-(void)willSetViewStyle:(int)style;
-(BOOL)hasShownNotificationsManually;
-(BOOL)shouldAutoHideNotifications;
-(void)handleVolumeIncrease;
-(void)handleVolumeDecrease;
-(void)_reloadVolumePressBanditPreference;
-(void)removeBulletinsFromObserver;
-(void)setTableItemToFloat:(id)aFloat;
-(void)setTableItemToFloat:(id)aFloat force:(BOOL)force;
-(void)_animateResetConfigurationAndPositioning:(BOOL)positioning clearingUnlockContext:(BOOL)context clearsFloatingItem:(BOOL)item;
-(void)_animateResetConfigurationAndPositioning:(BOOL)positioning clearingUnlockContext:(BOOL)context;
-(void)_animateResetConfigurationAndPositioning:(BOOL)positioning;
-(void)setTableItemToBlink:(id)blink;
-(id)unlockActionContext;
-(id)visibleActionContext;
-(void)_sortListItems;
-(id)_systemAlertItem;
-(id)_listItemContainingCardItem:(id)item;
-(id)_listItemContainingBulletinID:(id)anId;
-(id)_listItemForNewBulletin:(id)newBulletin;
-(void)showTestBulletin;
-(void)setUnlockActionContext:(id)context;
-(void)_autoHideNotificationsChanged;
-(BOOL)isHibernating;
-(void)rebuildViewsAndStopHibernating;
-(int)defaultStyle;
-(void)clearViewsAndHibernate;
-(void)dealloc;
-(id)init;
@end
