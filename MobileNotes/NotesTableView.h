/* NotesTableView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileNotes-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView, NotesBackgroundView;

__attribute__((visibility("hidden")))
@interface NotesTableView : XXUnknownSuperclass {
	UIImageView* _background;
	UIImageView* _topEdge;
	UIImageView* _bottomEdge;
	BOOL _isLandscape;
	NotesBackgroundView* _textureScrollingDelegate;
}
@property(assign) __weak NotesBackgroundView* textureScrollingDelegate;
-(void).cxx_destruct;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)offset;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end
