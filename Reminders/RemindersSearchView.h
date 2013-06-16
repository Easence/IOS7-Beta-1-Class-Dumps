/* RemindersSearchView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "Reminders-Structs.h"

@class RemindersSearchBar, UIView, UIButton;

__attribute__((visibility("hidden")))
@interface RemindersSearchView : XXUnknownSuperclass {
	RemindersSearchBar* _searchBar;
	UIButton* _cancelButton;
	UIView* _searchResultsView;
}
@property(retain) UIView* searchResultsView;
@property(readonly, assign, nonatomic) UIButton* cancelButton;
@property(readonly, assign, nonatomic) RemindersSearchBar* searchBar;
-(void).cxx_destruct;
-(void)deactivateSearchBar;
-(void)activateSearchBar;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)frame;
@end
