/* ReaderContext.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class WebView, NSTimer;
@protocol ReaderControllerDelegate;

__attribute__((visibility("hidden")))
@interface ReaderContext : XXUnknownSuperclass {
	int _retainCount;
	ReaderController* _readerController;
	ReaderJSController* _readerJSController;
	WebView* _webView;
	NSTimer* _clearUnusedReaderResourcesTimer;
	id<ReaderControllerDelegate> _delegate;
}
@property(assign, nonatomic) id<ReaderControllerDelegate> delegate;
@property(readonly, assign, nonatomic) ReaderController* readerController;
@property(readonly, assign, nonatomic) WebView* webView;
-(void)createArticleFinder;
-(BOOL)shouldCreateArticleFinder;
-(id)webView:(id)view connectionPropertiesForResource:(id)resource dataSource:(id)source;
-(void)webView:(id)view didFinishLoadForFrame:(id)frame;
-(void)webView:(id)view didClearWindowObject:(id)object forFrame:(id)frame;
-(void)webView:(id)view decidePolicyForNavigationAction:(id)navigationAction request:(id)request frame:(id)frame decisionListener:(id)listener;
-(void)notifyNoArticleInReaderView:(id)readerView;
-(BOOL)networkIsReachable;
-(int)readerOperationMode;
-(void)_clearUnusedReaderResources;
-(void)cancelClearUnusedReaderResourcesTimer;
-(void)clearUnusedReaderResourcesSoon;
-(void)loadNewArticle;
-(void)loadReaderDocument;
-(id)readerURL;
-(void)_clearReaderViewAndController;
-(ReaderJSController*)_readerJSController;
-(void)dealloc;
-(void)initReaderJSController:(id)controller;
-(id)mailingAndPrintingFrame;
-(BOOL)isReaderAvailable;
-(void)stopLoadingNextPage;
-(BOOL)isLoadingNextPage;
-(BOOL)hasMultiplePages;
-(void)clearAvailability;
-(void)clearReaderView;
-(void)createWebViewIfNeeded;
-(BOOL)_isDeallocating;
-(BOOL)_tryRetain;
-(unsigned)retainCount;
-(oneway void)release;
-(id)retain;
-(id)initWithWebView:(id)webView;
@end
