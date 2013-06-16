/* XMLRPCDefaultEncoder.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "XMLRPCEncoder.h"
#import "AppleIDAuthAgent-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface XMLRPCDefaultEncoder : XXUnknownSuperclass <XMLRPCEncoder> {
@private
	NSString* myMethod;
	NSArray* myParameters;
}
-(void)dealloc;
-(id)parameters;
-(id)method;
-(void)setMethod:(id)method withParameters:(id)parameters;
-(id)encode;
-(id)init;
-(id)encodeData:(id)data;
-(id)encodeDate:(id)date;
-(id)encodeString:(id)string omitTag:(BOOL)tag;
-(id)encodeNumber:(id)number;
-(id)encodeBoolean:(CFBooleanRef)boolean;
-(id)encodeDictionary:(id)dictionary;
-(id)encodeArray:(id)array;
-(id)encodeObject:(id)object;
-(id)replaceTarget:(id)target withValue:(id)value inString:(id)string;
-(id)valueTag:(id)tag value:(id)value;
@end
