/* MusicSongsDataSource.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MusicQueryDataSource.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MusicSongsDataSource : MusicQueryDataSource {
	unsigned long long _syncAssetTotal;
	int _syncAssetTotalToken;
	BOOL _syncAssetTotalTokenIsValid;
	int _syncCurrentAssetNumberToken;
	BOOL _syncCurrentAssetNumberTokenIsValid;
	unsigned long long _syncCurrentAssetNumber;
	NSString* _syncProgressString;
}
-(void).cxx_destruct;
-(void)_updateSyncProgressString;
-(BOOL)showsIndexBar;
-(BOOL)showsEntityCountFooter;
-(id)entityCountFormat;
-(void)dealloc;
-(id)initWithQuery:(id)query entityType:(int)type;
@end
