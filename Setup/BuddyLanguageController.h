/* BuddyLanguageController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "BuddyTableViewController.h"
#import "BuddyController.h"

@class NSMutableArray, NSString, NSDictionary, NSArray;
@protocol BuddyControllerDelegate;

__attribute__((visibility("hidden")))
@interface BuddyLanguageController : BuddyTableViewController <BuddyController> {
	NSDictionary* _languageStrings;
	float _scrollOffset;
	id<BuddyControllerDelegate> _delegate;
	NSMutableArray* _fakeViews;
	NSString* _selectedLanguage;
	BOOL _startedInFakeMode;
	BOOL _builtTable;
	BOOL _willAppearCalled;
	NSArray* _languageCodes;
}
@property(retain, nonatomic) NSArray* languageCodes;
@property(copy, nonatomic) NSString* selectedLanguage;
+(id)languageScreenshotCachePath:(BOOL)path tag:(id)tag;
-(void)dealloc;
-(void)viewDidUnload;
-(void)didReceiveMemoryWarning;
-(BOOL)shouldAllowStartOver;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view willDisplayHeaderView:(id)view2 forSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(int)numberOfSectionsInTableView:(id)tableView;
-(void)takeScreenshots;
-(BOOL)takeScreenshot:(id)screenshot tag:(id)tag;
-(void)switchToRealMode;
-(float)scrollOffset;
-(void)selectLanguage:(id)language;
-(void)setDelegate:(id)delegate;
-(void)viewWillAppear:(BOOL)view;
-(id)initInFakeMode:(BOOL)fakeMode;
-(BOOL)restoreScreenshot:(id)screenshot;
-(void)buildTable;
-(void)startOver;
-(void)readyDisplay;
-(void)reset;
@end
