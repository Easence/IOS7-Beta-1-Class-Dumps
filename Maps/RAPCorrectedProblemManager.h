/* RAPCorrectedProblemManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@protocol RAPCorrectedProblemManagerDelegate;

__attribute__((visibility("hidden")))
@interface RAPCorrectedProblemManager : XXUnknownSuperclass {
	id<RAPCorrectedProblemManagerDelegate> _delegate;
}
@property(assign, nonatomic) id<RAPCorrectedProblemManagerDelegate> delegate;
+(id)sharedManager;
@end
