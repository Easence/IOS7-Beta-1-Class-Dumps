/* SBWindowContextManager.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMapTable, NSString, NSHashTable;
@protocol SBWindowContextManagerDelegate;

__attribute__((visibility("hidden")))
@interface SBWindowContextManager : XXUnknownSuperclass {
	id<SBWindowContextManagerDelegate> _delegate;
	NSString* _identifier;
	NSHashTable* _observers;
	NSMapTable* _screenToOrderedContexts;
}
@property(copy, nonatomic) NSString* identifier;
@property(assign, nonatomic) id<SBWindowContextManagerDelegate> delegate;
-(id)description;
-(id)contextWithIdentifier:(unsigned)identifier screen:(id)screen;
-(id)contextsForScreen:(id)screen;
-(unsigned)numberOfContextsForScreen:(id)screen;
-(id)trackedScreens;
-(void)removeObserver:(id)observer;
-(void)addObserver:(id)observer;
-(void)removeContext:(id)context;
-(void)addContext:(id)context;
-(void)dealloc;
@end
