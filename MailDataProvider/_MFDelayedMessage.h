/* _MFDelayedMessage.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface _MFDelayedMessage : XXUnknownSuperclass {
	id _message;
	NSString* _identifier;
	id _fireBlock;
	double _fireDate;
}
@property(copy, nonatomic) id fireBlock;
@property(assign, nonatomic) double fireDate;
@property(copy, nonatomic) NSString* identifier;
@property(retain, nonatomic) id message;
-(void)dealloc;
-(id)initWithMessage:(id)message identifier:(id)identifier fireDate:(double)date fireBlock:(id)block;
-(id)init;
@end
