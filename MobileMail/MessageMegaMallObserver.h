/* MessageMegaMallObserver.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MessageMegaMallObserver <NSObject>
-(void)megaMallDidFinishSearch:(id)megaMall;
-(void)megaMallGrowingMailboxesChanged:(id)changed;
-(void)megaMallDidLoadMessages:(id)megaMall;
-(void)megaMallCurrentMessageRemoved:(id)removed;
-(void)megaMallStartFetch:(id)fetch;
-(void)megaMallMessageAtIndexChanged:(id)indexChanged;
-(void)megaMallMessageCountChanged:(id)changed;
@end