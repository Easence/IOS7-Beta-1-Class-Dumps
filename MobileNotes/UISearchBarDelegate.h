/* UISearchBarDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIBarPositioningDelegate.h"
#import "MobileNotes-Structs.h"


@protocol UISearchBarDelegate <UIBarPositioningDelegate>
@optional
-(void)searchBar:(id)bar selectedScopeButtonIndexDidChange:(int)selectedScopeButtonIndex;
-(void)searchBarResultsListButtonClicked:(id)clicked;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarBookmarkButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(BOOL)searchBar:(id)bar shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)searchBarTextDidEndEditing:(id)searchBarText;
-(BOOL)searchBarShouldEndEditing:(id)searchBar;
-(void)searchBarTextDidBeginEditing:(id)searchBarText;
-(BOOL)searchBarShouldBeginEditing:(id)searchBar;
@end
