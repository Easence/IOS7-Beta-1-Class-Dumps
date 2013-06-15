/* SBIconBadgeView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDarkeningImageViewDelegate.h"
#import "SBIconAccessoryView.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "SpringBoard-Structs.h"

@class NSString, SBIconAccessoryImage, SBDarkeningImageView;

__attribute__((visibility("hidden")))
@interface SBIconBadgeView : XXUnknownSuperclass <SBDarkeningImageViewDelegate, SBIconAccessoryView> {
	NSString* _text;
	SBDarkeningImageView* _incomingTextView;
	BOOL _animating;
	id _queuedAnimation;
	BOOL _displayingAccessory;
	SBIconAccessoryImage* _backgroundImage;
	SBDarkeningImageView* _backgroundView;
	SBIconAccessoryImage* _textImage;
	SBDarkeningImageView* _textView;
}
+(id)_createImageForText:(id)text highlighted:(BOOL)highlighted;
+(id)_checkoutImageForText:(id)text highlighted:(BOOL)highlighted;
+(id)_checkoutBackgroundImage;
+(id)checkoutAccessoryImagesForIcon:(id)icon location:(int)location;
-(void)_resizeForTextImage:(id)textImage;
-(void)_clearText;
-(void)_zoomOutWithPreparation:(id)preparation animation:(id)animation completion:(id)completion;
-(void)_zoomInWithTextImage:(id)textImage preparation:(id)preparation animation:(id)animation completion:(id)completion;
-(void)_crossfadeToTextImage:(id)textImage withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
-(void)_configureAnimatedForText:(id)text highlighted:(BOOL)highlighted withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
-(id)darkeningImageView:(id)view settableImageForImage:(id)image;
-(void)setAccessoryBrightness:(float)brightness;
-(CGPoint)accessoryOriginForIconBounds:(CGRect)iconBounds;
-(void)prepareForReuse;
-(BOOL)displayingAccessory;
-(void)configureForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted;
-(void)configureAnimatedForIcon:(id)icon location:(int)location highlighted:(BOOL)highlighted withPreparation:(id)preparation animation:(id)animation completion:(id)completion;
-(void)layoutSubviews;
-(void)dealloc;
-(id)init;
@end
