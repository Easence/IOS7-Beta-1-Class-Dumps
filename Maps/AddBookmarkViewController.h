/* AddBookmarkViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class _AddBookmarkViewController, NSString, SearchResult;
@protocol AddBookmarkViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface AddBookmarkViewController : XXUnknownSuperclass {
	_AddBookmarkViewController* _controller;
	SearchResult* _bookmark;
	NSString* _bookmarkTitle;
}
@property(retain, nonatomic) id controller;
@property(copy, nonatomic) NSString* bookmarkTitle;
@property(retain, nonatomic) SearchResult* bookmark;
@property(assign, nonatomic) id<AddBookmarkViewControllerDelegate> addBookmarkDelegate;
-(void)dealloc;
-(id)initWithNibName:(id)nibName bundle:(id)bundle;
@end
