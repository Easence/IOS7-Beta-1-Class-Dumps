/* SBIconLabelImageParameters.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"
#import "NSCopying.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBIconLabelImageParameters : XXUnknownSuperclass <NSCopying> {
	NSString* _text;
	BOOL _containsNonLatinLikeCharacters;
	BOOL _containsEmoji;
	BOOL _canEllipsize;
	CGSize _maxSize;
	int _legibilityStyle;
}
+(id)parametersWithText:(id)text canEllipsize:(BOOL)ellipsize maxSize:(CGSize)size style:(int)style;
-(int)legibilityStyle;
-(id)textColor;
-(id)font;
-(BOOL)colorspaceIsGrayscale;
-(CGSize)maxSize;
-(BOOL)canEllipsize;
-(id)text;
-(id)copyWithZone:(NSZone*)zone;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)dealloc;
-(id)initWithText:(id)text canEllipsize:(BOOL)ellipsize maxSize:(CGSize)size style:(int)style;
@end
