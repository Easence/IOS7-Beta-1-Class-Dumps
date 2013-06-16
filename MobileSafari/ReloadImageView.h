/* ReloadImageView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImage;

__attribute__((visibility("hidden")))
@interface ReloadImageView : XXUnknownSuperclass {
	UIImage* _reloadImage;
	UIImage* _stopImage;
	BOOL _stopShown;
	BOOL _stopDrawn;
	id _delegate;
}
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(void)setCoalescedDisplayIfNeeded;
-(void)setDelegate:(id)delegate;
-(CGSize)defaultSize;
-(void)setStopShown:(BOOL)shown forceUpdate:(BOOL)update;
-(void)updateImage;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
