/* MPStoreDownloadManagerObserver.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MPStoreDownloadManagerObserver <NSObject>
@optional
-(void)downloadManager:(id)manager downloadPurchaseDidFinish:(id)downloadPurchase;
-(void)downloadManager:(id)manager downloadDidProgress:(id)download;
-(void)downloadManager:(id)manager downloadDidFinish:(id)download;
-(void)downloadManager:(id)manager didAddDownloads:(id)downloads removeDownloads:(id)downloads3;
@end
