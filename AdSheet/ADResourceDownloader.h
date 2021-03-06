/* ADResourceDownloader.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ADResourceDownloader : XXUnknownSuperclass {
	BOOL _allowsConcurrentDownloads;
	NSMutableArray* _activeJobs;
	NSMutableArray* _downloadQueue;
}
@property(retain, nonatomic) NSMutableArray* downloadQueue;
@property(retain, nonatomic) NSMutableArray* activeJobs;
@property(assign, nonatomic) BOOL allowsConcurrentDownloads;
-(void)cancelRequest:(id)request;
-(void)cancelAllRequests;
-(void)cancelRequestForURL:(id)url;
-(void)insertJobBarrier:(id)barrier;
-(void)downloadRequestJob:(id)job;
-(id)connection:(id)connection willCacheResponse:(id)response;
-(void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;
-(void)connection:(id)connection didFailWithError:(id)error;
-(void)connectionDidFinishLoading:(id)connection;
-(void)connection:(id)connection didReceiveData:(id)data;
-(void)connection:(id)connection didReceiveResponse:(id)response;
-(id)jobForConnection:(id)connection;
-(void)_processNextJob;
-(id)init;
-(void)dealloc;
@end
