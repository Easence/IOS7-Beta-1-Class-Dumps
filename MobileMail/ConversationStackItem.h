/* ConversationStackItem.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileMail-Structs.h"
#import "NSCopying.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class MFMailMessage;

__attribute__((visibility("hidden")))
@interface ConversationStackItem : XXUnknownSuperclass <NSCopying> {
	MFMailMessage* _message;
	unsigned _index;
	unsigned _total;
}
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(id)copyWithZone:(NSZone*)zone;
-(BOOL)isTopmost;
-(unsigned)total;
-(unsigned)index;
-(id)message;
-(void)dealloc;
-(id)initWithMessage:(id)message index:(unsigned)index total:(unsigned)total;
@end