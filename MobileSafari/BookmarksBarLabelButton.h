/* BookmarksBarLabelButton.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "BookmarksBarButton.h"

@class WebBookmark, UIImageView, BookmarksBarLabel;

__attribute__((visibility("hidden")))
@interface BookmarksBarLabelButton : BookmarksBarButton {
	WebBookmark* _bookmark;
	BookmarksBarLabel* _gradientLabel;
	UIImageView* _folderArrowImageView;
}
+(id)_highlightedPrivateBrowsingImage;
+(id)_highlightedGradientImage;
+(CGGradientRef)_highlightedTextColorGradient;
+(id)_privateBrowsingImage;
+(id)_textColorImage;
+(id)_newGradientImage:(CGGradientRef)image;
+(id)fontForBookmarksBarLabelButton;
+(CGSize)sizeOfBookmarkFolderArrow;
-(void)dealloc;
-(void)setUsesPrivateBrowsingStyle:(BOOL)style;
-(id)bookmark;
-(void)layoutSubviews;
-(void)setBookmark:(id)bookmark;
-(void)setUsesHighlightedStyle:(BOOL)style;
-(id)initWithFrame:(CGRect)frame;
@end
