/* SLTwitterContactUpdater.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSOperationQueue, NSMutableSet, ACAccount, ACAccountStore;
@protocol SLTwitterContactUpdaterDelegate;

@interface SLTwitterContactUpdater : XXUnknownSuperclass {
	void* _addressBook;
	ACAccount* _account;
	ACAccountStore* _accountStore;
	NSMutableDictionary* _personDictionary;
	NSOperationQueue* _operationQueue;
	NSMutableSet* _updatedPeople;
	int _expectedBatchJobs;
	int _completedBatchJobs;
	float _partialBatchJobsCompleted;
	int _expectedPhotoJobs;
	int _completedPhotoJobs;
	BOOL _warnedOfFailure;
	id<SLTwitterContactUpdaterDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<SLTwitterContactUpdaterDelegate> delegate;
-(void).cxx_destruct;
-(void)photoLookupFinished:(id)finished;
-(void)batchLookupFinished:(id)finished;
-(void)batchLookupProgress:(id)progress;
-(void)cancel;
-(void)updatePhotos;
-(void)updateContacts;
-(void)dealloc;
-(id)initWithAccount:(id)account store:(id)store;
@end
