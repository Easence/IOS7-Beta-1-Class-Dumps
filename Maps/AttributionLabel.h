/* AttributionLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIImage;

__attribute__((visibility("hidden")))
@interface AttributionLabel : XXUnknownSuperclass {
	UIImage* image;
	float textBaselineOffset;
	float imageBaselineOffset;
	NSString* imagePlaceholder;
}
@property(retain) NSString* imagePlaceholder;
@property(assign) float imageBaselineOffset;
@property(assign) float textBaselineOffset;
@property(retain) UIImage* image;
-(void)dealloc;
-(id)attributionWithString:(id)string;
@end
