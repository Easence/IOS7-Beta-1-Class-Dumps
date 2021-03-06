/* SearchOperation.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray, MFMessageCriterion, SearchManager, NSCondition, MFMailMessageLibrary, NSNumber, NSArray, NSObject, MFWeakReferenceHolder;
@protocol OS_dispatch_queue, OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface SearchOperation : XXUnknownSuperclass {
	MFWeakReferenceHolder* _managerHolder;
	NSObject<OS_dispatch_group>* _group;
	NSObject<OS_dispatch_queue>* _queue;
	NSCondition* _condition;
	int _monitorLock;
	NSMutableArray* _monitors;
	NSNumber* _identifier;
	MFMailMessageLibrary* _library;
	MFMessageCriterion* _criterion;
	MFMessageCriterion* _serverCriterion;
	NSArray* _sources;
}
@property(readonly, assign, nonatomic) NSArray* sources;
@property(readonly, assign, nonatomic) MFMessageCriterion* serverCriterion;
@property(readonly, assign, nonatomic) MFMessageCriterion* criterion;
@property(readonly, assign, nonatomic) MFMailMessageLibrary* library;
@property(retain) NSNumber* identifier;
@property(assign) SearchManager* manager;
-(void)_performRemoteSearchWithSource:(id)source;
-(id)_serverCriterionFromCriterion:(id)criterion;
-(void)cancel;
-(void)signal;
-(void)waitForFinishOrCancel;
-(void)afterDelay:(double)delay perform:(id)perform;
-(void)performAsync:(id)async;
-(void)_monitorWork:(id)work;
-(void)cancelMonitors;
-(void)unregisterMonitor:(id)monitor;
-(void)registerMonitor:(id)monitor;
-(void)dealloc;
-(id)initWithManager:(id)manager library:(id)library sources:(id)sources criterion:(id)criterion;
@end
