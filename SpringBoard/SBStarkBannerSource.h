/* SBStarkBannerSource.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SBUIBannerSource.h"
#import "SBUIBannerTargetManagerObserver.h"

@class NSMutableArray;
@protocol SBUIBannerTarget;

__attribute__((visibility("hidden")))
@interface SBStarkBannerSource : XXUnknownSuperclass <SBUIBannerSource, SBUIBannerTargetManagerObserver> {
	id<SBUIBannerTarget> _allowedTarget;
	id<SBUIBannerTarget> _target;
	NSMutableArray* _enqueuedItems;
}
-(void)bannerTargetManager:(id)manager didRemoveTarget:(id)target;
-(void)bannerTargetManager:(id)manager didAddTarget:(id)target;
-(id)newBannerViewForContext:(id)context;
-(id)dequeueNextBannerItemForTarget:(id)target;
-(id)peekNextBannerItemForTarget:(id)target;
-(unsigned)enumerateAllItemsMatchingContext:(id)context withBlock:(id)block;
-(void)removeEnqueuedItemsAtIndexes:(id)indexes;
-(void)dismissCurrentItemFromTarget;
-(void)enqueueItem:(id)item;
-(id)indexesOfEnqueuedItemsMatchingContext:(id)enqueuedItemsMatchingContext;
-(id)currentItemFromTarget;
-(void)dealloc;
-(id)init;
-(id)initWithAllowedTarget:(id)allowedTarget;
@end
