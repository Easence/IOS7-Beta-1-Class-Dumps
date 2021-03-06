/* FieldTestModel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FieldTest-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, FieldTestModelNode, NSMutableDictionary, NSDictionary, LogGenerator;

__attribute__((visibility("hidden")))
@interface FieldTestModel : XXUnknownSuperclass {
	CFMessagePortRef _recvPort;
	CFMessagePortRef _sendPort;
@private
	NSTimer* _displayUpdateTimer;
	BOOL _updated;
@protected
	LogGenerator* _logGenerator;
	NSMutableDictionary* _state;
	FieldTestModelNode* _nodes;
	NSDictionary* _nodesByPath;
}
-(id)getSaveContents;
-(void)updateWithData:(id)data;
-(id)nodeAtPath:(id)path;
-(void)refresh:(id)refresh;
-(void)refresh;
-(id)topLevelNodes;
-(void)startMonitor;
-(void)restartMonitor;
-(void)configureGenerator;
-(void)dealloc;
-(id)init;
-(void)destroyPorts;
-(unsigned char)createPorts;
-(BOOL)isConnected;
@end
