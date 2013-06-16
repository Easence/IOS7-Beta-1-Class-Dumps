/* PHRecentMultiCall.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "PHRecentCall.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface PHRecentMultiCall : PHRecentCall {
	NSMutableArray* _callOccurrences;
	NSMutableArray* _underlyingCTCalls;
}
+(id)callByCoalescing:(id)coalescing withPreviousCall:(id)previousCall;
-(id)_callOccurrencesTestDataLongSingle;
-(id)_callOccurrencesTestDataIncomingAndOutgoing;
-(id)_callOccurrencesTestDataIncomingOnly;
-(id)_callOccurrencesTestDataComplex;
-(BOOL)representsCallAtDate:(id)date;
-(void)deleteUnderlyingCTCall;
-(id)callOccurrences;
-(id)occurrenceAtIndex:(int)index;
-(int)numberOfOccurrences;
-(void)addOccurrencesFromArray:(id)array;
-(void)addOccurrence:(id)occurrence type:(int)type category:(int)category duration:(double)duration bytesOfDataUsed:(double)dataUsed;
-(void)addUnderlyingCTCalls:(id)calls;
-(id)underlyingCTCalls;
-(void)dealloc;
@end
