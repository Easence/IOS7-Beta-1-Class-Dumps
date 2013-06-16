/* MessageListStatusIndicatorManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "MessageStatusIndicatorManager.h"

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface MessageListStatusIndicatorManager : MessageStatusIndicatorManager {
	NSMutableArray* _statusIndicatorViews;
}
@property(readonly, assign, nonatomic) NSArray* statusIndicatorViews;
-(void)layoutStatusIndicatorViewsInRect:(CGRect)rect;
-(id)primaryStatusIndicatorImage;
-(void)hideIndicators;
-(void)dealloc;
@end
