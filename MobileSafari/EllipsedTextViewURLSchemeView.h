/* EllipsedTextViewURLSchemeView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, EllipsedTextView;

__attribute__((visibility("hidden")))
@interface EllipsedTextViewURLSchemeView : XXUnknownSuperclass {
	EllipsedTextView* _parentEllipsedTextView;
	NSString* _URLString;
}
-(void)drawRect:(CGRect)rect;
-(void)setTextFromURLString:(id)urlstring;
-(void)dealloc;
-(void)setParentEllipsedTextView:(id)view;
@end
