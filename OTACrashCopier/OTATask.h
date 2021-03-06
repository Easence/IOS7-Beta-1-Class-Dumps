/* OTATask.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSMutableString, NSData, OTATaskingAgentConnection, NSArray;

__attribute__((visibility("hidden")))
@interface OTATask : XXUnknownSuperclass {
	int _taskType;
	NSString* _taskId;
	NSMutableString* _taskDigest;
	NSData* _rawBlob;
	NSArray* _verifiedTask;
	OTATaskingAgentConnection* _taskingAgent;
	BOOL _isValid;
}
@property(readonly, assign, nonatomic) BOOL isValid;
@property(readonly, assign, nonatomic) NSData* rawBlob;
@property(readonly, assign, nonatomic) NSString* taskId;
@property(readonly, assign, nonatomic) int taskType;
+(BOOL)_uninstallTaskOfType:(int)type;
+(id)taskIdForInstalledTaskOfType:(int)type;
+(id)taskIdPathForTaskType:(int)taskType;
+(id)getTaskPathForType:(int)type;
+(BOOL)_taskConfigStructureIsValid:(id)valid;
+(id)descriptionForTaskType:(int)taskType;
-(void)dealloc;
-(id)initWithBlobData:(id)blobData taskId:(id)anId type:(int)type;
-(BOOL)defer;
-(BOOL)install;
-(BOOL)_writeTaskingId;
-(BOOL)_verifySignedBlob;
-(BOOL)_taskPlistStructureIsValid:(id)valid;
-(id)_findFirstMatchingConfig:(id)config;
-(BOOL)_matchSelector:(id)selector withValue:(id)value ofConfig:(id)config;
@end
