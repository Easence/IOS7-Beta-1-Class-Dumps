/* Application.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "UIApplicationDelegate.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "PageLoadTestRunnerDelegate.h"

@class NSTimer, UIWindow, NSString, BrowserController;

__attribute__((visibility("hidden")))
@interface Application : XXUnknownSuperclass <PageLoadTestRunnerDelegate, UIApplicationDelegate> {
	BrowserController* _controller;
	BOOL _finishedLaunching;
	BOOL _isHidingBrowserPanelForSuspend;
	BOOL _isHandlingMemoryWarning;
	NSTimer* _memoryWarningTimer;
	double _memoryWarningSleepInterval;
	int _memoryWarningState;
	BOOL _isReadingDefaults;
	BOOL _shouldReadDefaultsOnResume;
	NSString* _defaultPNGName;
	BOOL _isRunningShowBookmarksTest;
	BOOL _startedBookmarksTest;
	BOOL _isRunningCanvasTest;
}
@property(retain, nonatomic) UIWindow* window;
+(id)sharedTestRunner;
+(void)commandLineTestOption:(int)option arg:(const char*)arg;
-(BOOL)finishedLaunching;
-(BOOL)isHidingBrowserPanelForSuspend;
-(void)finishedTest:(id)test extraResults:(id)results;
-(void)applicationWillTerminate;
-(void)applicationDidFinishLaunching:(id)application;
-(void)_setHandlingURL:(BOOL)url url:(id)url2;
-(void)userDefaultsDidChange:(id)userDefaults;
-(void)applicationOpenURL:(id)url;
-(void)_saveNSURLCacheToDiskInBackground:(BOOL)background;
-(void)applicationDidEnterBackground:(id)application;
-(void)applicationWillEnterForeground:(id)application;
-(void)clearReaderViewsExceptMultiplePageReader:(BOOL)reader;
-(void)applicationDidBecomeActive:(id)application;
-(void)applicationWillResignActive:(id)application;
-(void)applicationResume:(GSEventRef)resume;
-(BOOL)applicationSuspend:(GSEventRef)suspend settings:(id)settings;
-(void)_applicationWillSuspend;
-(void)_resumeForEventsOnly:(BOOL)eventsOnly;
-(void)_readDefaults;
-(BOOL)_suspendForEventsOnly:(BOOL)eventsOnly;
-(id)nameOfDefaultImageToUpdateAtSuspension;
-(void)dealloc;
-(id)lastPageLoadTime;
-(id)lastPageVisualLayoutTime;
-(id)linksOnActivePage;
-(id)activeURL;
-(id)setNotifyPageLoadDidFinish:(id)finish;
-(id)loadURLInNewWindow:(id)newWindow;
-(id)loadURL:(id)url;
-(void)stopLoading;
-(void)scrollDocumentDown;
-(id)isAtEndOfPage;
-(id)isLoading;
-(void)_dumpMemoryStatistics:(BOOL)statistics;
-(void)reduceMemoryOnApplicationSuspendIfNeeded;
-(void)didReceiveMemoryWarning;
-(void)_handleMemoryWarningLevel;
-(void)_stopMemoryWarningTimer;
-(void)_startMemoryWarningTimer;
-(BOOL)_isStillUnderMemoryPressure;
-(void)_handleMemoryWarningBackground;
-(void)_handleMemoryWarningCriticalPriority;
-(BOOL)_handleMemoryWarningHighPriority:(id)priority;
-(BOOL)_handleMemoryWarningMediumPriority:(id)priority;
-(void)_hibernateOneDocumentFrom:(id)from;
-(void)_handleMemoryWarningLowPriority;
-(void)_incrementMemoryWarningState;
-(void)categorizeInMemoryImportantDocuments:(id)memoryImportantDocuments unimportantDocuments:(id)documents;
-(void)initMemoryJetsamInfo;
-(void)setHandlingMemoryWarning:(BOOL)warning;
-(BOOL)isHandlingMemoryWarning;
-(BOOL)didStartBookmarksTest;
-(BOOL)isRunningCanvasTest;
-(BOOL)isRunningShowBookmarksTest;
-(void)finishedBookmarksTest;
-(void)startBookmarksTest;
-(BOOL)prepareBookmarksTest;
-(void)finishedCanvasTestWithURL:(id)url forTabDocument:(id)tabDocument;
-(BOOL)startCanvasTest:(id)test;
-(void)notifyTestTabDocument:(id)document webView:(id)view didFinishLoadForFrame:(id)frame withError:(id)error;
-(void)notifyTestTabDocument:(id)document decidedPolicyForAction:(id)action navigationResult:(id)result;
-(void)notifyTestTabDocument:(id)document redirectFrom:(id)from to:(id)to;
-(void)notifyTestTabDocument:(id)document willLoadRequest:(id)request;
-(void)finishedPurpleTest:(id)test;
-(void)startedPurpleTest;
-(BOOL)runTest:(id)test options:(id)options;
-(id)_numberOption:(id)option;
-(BOOL)disableRestoreTabState;
-(void)startCommandLineTest;
-(void)pageLoadTestRunnerFinished:(id)finished;
@end
