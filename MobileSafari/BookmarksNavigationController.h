/* BookmarksNavigationController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIActionSheetDelegate.h"
#import "UINavigationBarDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "CatalogCategoryViewController.h"
#import "BrowserPanel.h"
#import "BookmarkInfoViewControllerDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "BookmarkFavoritesViewControllerDelegate.h"
#import "BookmarksTableViewControllerDelegate.h"
#import "HistoryTableViewControllerDelegate.h"
#import "ReadingListViewControllerDelegate.h"
#import "SocialLinksViewControllerDelegate.h"

@class NSTimer, SocialLinksViewController, NSArray, WebBookmarkCollection, NSString, UIButton, UIActionSheet, UIBarButtonItem, UISegmentedControl, NSMutableDictionary, _UINavigationControllerPalette;
@protocol BookmarksNavigationControllerDelegate;

__attribute__((visibility("hidden")))
@interface BookmarksNavigationController : XXUnknownSuperclass <BookmarkInfoViewControllerDelegate, BookmarkFavoritesViewControllerDelegate, BookmarksTableViewControllerDelegate, HistoryTableViewControllerDelegate, ReadingListViewControllerDelegate, SocialLinksViewControllerDelegate, UIActionSheetDelegate, UINavigationBarDelegate, UINavigationControllerDelegate, BrowserPanel, CatalogCategoryViewController> {
	WebBookmarkCollection* _bookmarkCollection;
	NSTimer* _bookmarkSyncTimer;
	BOOL _isVisible;
	UIActionSheet* _clearHistoryAlertSheet;
	BOOL _allowsEditing;
	BOOL _isEditing;
	UIBarButtonItem* _createFolderButtonItem;
	UIBarButtonItem* _editButtonItem;
	UIBarButtonItem* _editingDoneButtonItem;
	UIBarButtonItem* _flexibleSpaceItem;
	BOOL _showCollections;
	UISegmentedControl* _collectionSegmentedControl;
	BOOL _showOnlyFavorites;
	NSArray* _collectionsParentedInBookmarks;
	NSArray* _topLevelCollections;
	NSString* _currentCollection;
	NSMutableDictionary* _savedCollectionState;
	_UINavigationControllerPalette* _palette;
	UIBarButtonItem* _doneButtonItem;
	SocialLinksViewController* _socialLinksViewController;
	BOOL _doneButtonHidden;
	UIButton* navigationBarButton;
	id<BookmarksNavigationControllerDelegate> _bookmarksNavigationControllerDelegate;
}
@property(readonly, assign, nonatomic) UIButton* navigationBarButton;
@property(assign, nonatomic) BOOL doneButtonHidden;
@property(assign, nonatomic) id<BookmarksNavigationControllerDelegate> bookmarksNavigationControllerDelegate;
@property(assign, nonatomic) BOOL allowsEditing;
-(void)socialLinksViewController:(id)controller didSelectNavigationDestination:(id)destination;
-(void)readingListViewController:(id)controller didSelectNavigationDestination:(id)destination;
-(void)historyTableViewController:(id)controller didSelectNavigationDestination:(id)destination;
-(void)bookmarksTableViewController:(id)controller didSelectNavigationDestination:(id)destination;
-(void)bookmarkFavoritesViewController:(id)controller didSelectFolder:(id)folder;
-(void)bookmarkFavoritesViewController:(id)controller didSelectNavigationDestination:(id)destination;
-(void)dealloc;
-(void)_clearBookmarkSyncTimer;
-(void)_bookmarkSyncTimerDidFire:(id)_bookmarkSyncTimer;
-(BOOL)shouldHideOnSuspend;
-(BOOL)shouldResumePanel;
-(void)panelWillSuspend;
-(BOOL)ignoresPrivateBrowsingStyle;
-(int)pausesPages;
-(int)panelType;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)_updateDoneButtonItemForViewController:(id)viewController;
-(void)navigationController:(id)controller willShowViewController:(id)controller2 animated:(BOOL)animated;
-(void)bookmarkInfoViewController:(id)controller didFinishWithResult:(BOOL)result;
-(void)_restoreCurrentCollectionState;
-(void)_restorePanelState;
-(void)_savePanelState;
-(void)_loadSavedPanelState;
-(void)setCurrentCollection:(id)collection;
-(id)newRootViewControllerForCollection:(id)collection;
-(id)newBookmarksTableViewControllerWithFolder:(id)folder skipOffset:(unsigned)offset;
-(void)_selectedCollectionChanged:(id)changed;
-(id)localizedTitleForCollection:(id)collection;
-(id)_socialLinksViewController;
-(void)_doneButtonPressed;
-(void)_setupCollectionSegmentedControl;
-(void)_setupCollections;
-(id)collectionsParentedInBookmarks;
-(BOOL)rebaseOnAncestorBookmark:(id)bookmark skipOffset:(unsigned)offset;
-(BOOL)rebaseOnDescendentBookmark:(id)bookmark;
-(void)reloadBookmarksForFolder:(id)folder;
-(void)_didPressNewFolderButton;
-(void)_didPressEditButton;
-(void)_didPressEditingDoneButton;
-(void)_setEditingFromToolbarButton:(BOOL)toolbarButton;
-(void)updateToolbarItemsAnimated:(BOOL)animated;
-(void)_updateToolbarItemsForViewController:(id)viewController animated:(BOOL)animated;
-(id)_toolbarItemsForViewController:(id)viewController;
-(void)_createToolbarItemsIfNecessary;
-(void)updatePanelForTabDocument:(id)tabDocument;
-(void)bookmarkSourceContentsChanged:(id)changed;
-(void)_updateClearHistoryButton;
-(void)showLockedBookmarksDatabaseAlertForBookmarkAddition:(BOOL)bookmarkAddition;
-(void)removeAllHistoryItems;
-(void)reloadViewControllers;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(void)viewDidAppear:(BOOL)view;
-(void)viewWillAppear:(BOOL)view;
-(void)viewWillLayoutSubviews;
-(void)setRootBookmark:(id)bookmark skipOffset:(unsigned)offset;
-(id)rootBookmark;
-(id)topmostStateRestoringViewController;
-(id)topReadingListViewController;
-(id)topmostBookmarksTableViewController;
-(id)topBookmarksTableViewController;
-(id)topHistoryTableViewController;
-(id)_initWithBookmarksDelegate:(id)bookmarksDelegate topBookmark:(id)bookmark skipOffset:(unsigned)offset showOnlyFavorites:(BOOL)favorites;
-(id)initWithBookmarksDelegate:(id)bookmarksDelegate topBookmark:(id)bookmark skipOffset:(unsigned)offset;
-(id)initWithBookmarksDelegate:(id)bookmarksDelegate;
-(id)initShowingOnlyFavoritesWithBookmarksDelegate:(id)bookmarksDelegate;
@end
