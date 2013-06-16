/* VOTKeyInfo.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "NSCopying.h"
#import "vot-Structs.h"

@class NSString, AXEventRepresentation;

@interface VOTKeyInfo : XXUnknownSuperclass <NSCopying> {
	AXEventRepresentation* _eventRecord;
	struct {
		unsigned keyDown : 1;
		unsigned keyUp : 1;
		unsigned modifiersChanged : 1;
	} _flags;
	NSString* _characters;
	NSString* _originalCharacters;
	unsigned _changedModifiers;
}
@property(readonly, assign, nonatomic) BOOL isEscapeKey;
@property(readonly, assign, nonatomic) BOOL isBrightnessKey;
@property(readonly, assign, nonatomic) BOOL isAppleVendorKey;
@property(readonly, assign, nonatomic) BOOL isMediaKey;
@property(readonly, assign, nonatomic) BOOL isCapsLockKeyPressed;
@property(readonly, assign, nonatomic) BOOL isControlKeyPressed;
@property(readonly, assign, nonatomic) BOOL isOptionKeyPressed;
@property(readonly, assign, nonatomic) BOOL isCommandKeyPressed;
@property(readonly, assign, nonatomic) BOOL isShiftKeyPressed;
@property(assign, nonatomic) unsigned changedModifiers;
@property(readonly, assign, nonatomic) unsigned modifierState;
@property(assign, nonatomic) BOOL modifiersChanged;
@property(assign, nonatomic) BOOL keyUp;
@property(assign, nonatomic) BOOL keyDown;
@property(assign, nonatomic) unsigned short keyCode;
@property(retain, nonatomic) NSString* originalCharacters;
@property(retain, nonatomic) NSString* characters;
@property(readonly, assign, nonatomic) int mediaKeyCode;
@property(retain, nonatomic) AXEventRepresentation* eventRecord;
-(id)description;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithEventRepresentation:(id)eventRepresentation;
-(void)_setCommandKeyPressed:(BOOL)pressed;
@end
