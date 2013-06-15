/* SBDaemonRequest.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBDaemonRequest : XXUnknownSuperclass {
	id _enabler;
	id _disabler;
}
@property(copy, nonatomic) id disabler;
@property(copy, nonatomic) id enabler;
+(id)requestWithEnabler:(id)enabler disabler:(id)disabler;
-(void)dispatchDisablerOnQueue:(id)queue;
-(void)dispatchEnablerOnQueue:(id)queue;
-(void)dealloc;
@end
