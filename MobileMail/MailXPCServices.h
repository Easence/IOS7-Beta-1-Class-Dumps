/* MailXPCServices.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableDictionary, NSMutableArray, NSLock, NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MailXPCServices : XXUnknownSuperclass {
	NSObject<OS_xpc_object>* _listener;
	NSObject<OS_dispatch_queue>* _queue;
	NSMutableDictionary* _services;
	NSMutableArray* _connections;
	NSLock* _connectionsLock;
}
+(id)sharedServer;
-(void)_enumerateServiceClasses:(id)classes;
-(Class)_serviceClassForName:(id)name;
-(void)registerServiceClass:(Class)aClass;
-(void)_dispatchMessage:(id)message onQueue:(id)queue connectionState:(id)state completion:(id)completion;
-(BOOL)_connection:(id)connection hasEntitlement:(id)entitlement;
-(void)_registerConnection:(id)connection;
-(void)stop;
-(void)start;
-(void)dealloc;
-(id)init;
@end
