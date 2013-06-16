/* OTADALog.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "OTALog.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OTADALog : OTALog {
	NSMutableDictionary* _logDictionary;
	int _logType;
}
@property(readonly, assign, nonatomic) int logType;
@property(retain) NSMutableDictionary* logDictionary;
+(id)_replaceCrashKeysForLog:(id)log;
+(BOOL)isInternal;
-(id)preferredArchiveFilenamePrefix;
-(id)preferredArchiveFilename;
-(id)encodedRepresentation;
-(id)submissionExtension;
-(void)purgeLogCache;
-(void)dealloc;
-(unsigned)internalExtendedSize;
-(BOOL)isValidForSubmission;
-(id)initWithPath:(id)path;
@end
