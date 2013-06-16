/* EKBBReminderProvider.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "EKBBDataProvider.h"

@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface EKBBReminderProvider : EKBBDataProvider {
	NSMutableDictionary* _closedBulletins;
	BOOL _needsReload;
	NSObject<OS_dispatch_queue>* _loaderQueue;
	NSObject<OS_dispatch_queue>* _closedQueue;
	NSObject<OS_dispatch_queue>* _badgeCountQueue;
}
-(void).cxx_destruct;
-(void)receiveMessageWithName:(id)name userInfo:(id)info;
-(void)_handleDeclineAndRemindMessageWithUserInfo:(id)userInfo;
-(void)bulletinClosed:(id)closed;
-(id)expirationDateForAlertInfo:(id)alertInfo;
-(void)_reload;
-(void)_reloadIfNeeded;
-(void)_updateBadgeCount:(id)count;
-(void)deviceUnlocked;
-(void)databaseChanged:(id)changed;
-(void)alarmsDidFire:(id)alarms;
-(id)entityScheme;
-(id)messageStringForAlert:(id)alert;
-(id)defaultURLForAlertInfo:(id)alertInfo;
-(id)actionButtonTitleForAlertInfo:(id)alertInfo;
-(id)emptyModalTitle;
-(id)modalMessageForAlertInfo:(id)alertInfo;
-(id)modalTitleForAlertInfo:(id)alertInfo;
-(unsigned)allowedEntityTypes;
-(id)sectionIdentifier;
-(id)sortDescriptors;
-(id)clearedInfoForBulletins:(id)bulletins lastClearedInfo:(id)info;
-(void)clearAlerts;
-(id)bulletinsFilteredBy:(unsigned)by count:(unsigned)count lastCleared:(id)cleared;
-(id)defaultSectionInfo;
-(id)sectionParameters;
-(id)_bulletinRequestForReminder:(id)reminder;
-(void)dataProviderDidLoad;
-(id)init;
@end
