/* MFVIPSender.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSCopying.h"
#import "MobileMail-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSSet, MFEmailSet, NSString;

__attribute__((visibility("hidden")))
@interface MFVIPSender : XXUnknownSuperclass <NSCopying> {
	MFEmailSet* _emailAddresses;
	void* _existingPerson;
	NSString* _uniqueReference;
	NSString* _displayName;
}
@property(copy, nonatomic) NSSet* emailAddresses;
@property(copy, nonatomic) NSString* displayName;
@property(copy, nonatomic) NSString* uniqueReference;
-(void*)copyUnknownPerson;
-(void*)existingPersonUsingAddressBook:(void*)book;
-(void)addEmailAddresses:(id)addresses;
-(id)description;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)init;
@end
