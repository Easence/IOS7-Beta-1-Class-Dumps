/* SBWorkspaceLogger.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBFileLogger.h"


__attribute__((visibility("hidden")))
@interface SBWorkspaceLogger : SBFileLogger {
}
+(void)handleSignal;
+(BOOL)saveRecentLogsToTemporaryPath:(id*)temporaryPath;
+(id)recentLogs;
+(BOOL)isWorkspaceLoggingEnabled;
+(int)workspaceLoggingType;
-(void)willBeginLoggingToPath:(id)path;
-(id)fileFormat:(id)format withArguments:(void*)arguments;
-(BOOL)includeConsole;
-(void)reloadFromDefaults;
-(id)name;
-(BOOL)isEnabled;
@end
