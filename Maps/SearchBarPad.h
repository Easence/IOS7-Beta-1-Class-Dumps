/* SearchBarPad.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "CollectionsTableViewControllerDelegate.h"
#import "RecentsViewControllerDelegate.h"
#import "Maps-Structs.h"
#import "SearchBar.h"
#import "TextFieldAnimationDelegate.h"
#import "UIPopoverControllerDelegate.h"

@class SearchCompletionsTableViewController, UIView, RecentsViewController, NSArray, PopoverRevealViewController, UIBarButtonItem, UIToolbar, UIPopoverController, UINavigationController;

__attribute__((visibility("hidden")))
@interface SearchBarPad : SearchBar <CollectionsTableViewControllerDelegate, RecentsViewControllerDelegate, TextFieldAnimationDelegate, UIPopoverControllerDelegate, UITextFieldDelegate> {
	UIView* _searchView;
	UIBarButtonItem* _searchFieldBarButtonItem;
	UIBarButtonItem* _directionsBarButtonItem;
	UIBarButtonItem* _bookmarksBarButtonItem;
	UIBarButtonItem* _flexibleSpaceBarButtonItem;
	NSArray* _toolbarItems;
	UIToolbar* _toolbar;
	RecentsViewController* _recentsViewController;
	UINavigationController* _recentsAndSuggestionsNavController;
	UIPopoverController* _recentsAndSuggestionsPopoverController;
	UIPopoverController* _directionsPopoverController;
	PopoverRevealViewController* _popoverRevealViewController;
	UINavigationController* _directionsNavController;
	int _viewMode;
	BOOL _shouldSwitchPopoverToSuggestionsOnNewSearchResults;
	SearchCompletionsTableViewController* _searchCompletionsController;
}
@property(assign, nonatomic) SearchCompletionsTableViewController* searchCompletionsController;
@property(readonly, assign, nonatomic) RecentsViewController* recentsViewController;
@property(assign, nonatomic) int viewMode;
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(id)searchString;
-(void)setSearchString:(id)string;
-(void)recentsViewControllerDidDismissClearHistorySheet:(id)recentsViewController;
-(BOOL)recentsViewControllerShouldPresentToOrFromSelectionAlert:(id)recentsViewController;
-(void)recentsViewController:(id)controller choseBookmark:(id)bookmark;
-(void)recentsViewController:(id)controller choseHistoryItem:(id)item;
-(void)_bookmarksButtonTapped:(id)tapped;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)dismissCompletionsPopoverForSearchField;
-(void)presentCompletionsPopoverForSearchField;
-(id)_recentsViewController;
-(void)orientationDidChangeFromInterfaceOrientation:(int)orientation;
-(void)orientationWillChangeToInterfaceOrientation:(int)orientation;
-(void)_updateShadow;
-(int)searchMode;
-(void)_dismissVisblePopovers;
-(void)_searchFieldSubmitted:(id)submitted;
-(BOOL)textFieldShowsRightView:(id)view;
-(void)updatePopoverViewControllerForSearchField;
-(void)showCompletionsTable;
-(void)_keyboardWillChangeFrame:(id)_keyboard;
-(void)dismissDirectionsPopoverAnimated:(BOOL)animated;
-(void)_directionsButtonTapped:(id)tapped;
-(void)presentDirectionsInPopover;
-(void)_restoreSearchStringFromDefaults;
-(id)toolbarItemsForIdiom:(int)idiom toolbar:(id)toolbar;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
