/* SearchManagerObserver.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SearchManagerObserver <NSObject>
@optional
-(void)searchManagerDidClearSearchResults:(id)searchManager;
-(void)searchManagerSearchCanceled:(id)canceled;
-(void)searchManagerSearchFailed:(id)failed withError:(id)error;
-(void)searchManager:(id)manager didReceiveRefinementResults:(id)results;
-(void)searchManager:(id)manager didReceiveSpellingSuggestion:(id)suggestion scrollToResults:(BOOL)results;
-(void)searchManager:(id)manager didReceiveResults:(id)results scrollToResults:(BOOL)results3;
-(void)searchManager:(id)manager willPerformSearchForQuery:(id)query;
@end
