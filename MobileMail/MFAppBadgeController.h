/* MFAppBadgeController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "BBObserverDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, BBObserver, NSObject;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MFAppBadgeController : XXUnknownSuperclass <BBObserverDelegate> {
	int _oldBadgeCount;
	NSObject<OS_dispatch_queue>* _queue;
	int _waitingCalculateRequests;
	NSMutableDictionary* _subsectionInfoByID;
	BBObserver* _observer;
}
-(void)setBadgeCount:(int)count;
-(void)_nts_calculateBadgeCount;
-(void)_nts_getAccountsExcludedFromUnreadCount:(out id*)unreadCount includeUnreadVIPs:(out BOOL*)vips;
-(void)_mailboxUserInfoDidChange:(id)_mailboxUserInfo;
-(void)observer:(id)observer updateSectionInfo:(id)info;
-(void)requestObserverState;
-(void)_updateSubsections:(id)subsections;
-(void)dealloc;
-(id)init;
@end
