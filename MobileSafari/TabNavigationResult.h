/* TabNavigationResult.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LSApplicationProxy, NSURL;

__attribute__((visibility("hidden")))
@interface TabNavigationResult : XXUnknownSuperclass {
	int _type;
	NSURL* _URL;
	LSApplicationProxy* _externalApplication;
}
@property(readonly, assign, nonatomic) LSApplicationProxy* externalApplication;
@property(readonly, assign, nonatomic) NSURL* URL;
@property(readonly, assign, nonatomic) int type;
+(id)resultWithRedirectToExternalURL:(id)externalURL;
+(id)resultOfType:(int)type withURL:(id)url;
-(id)_initWithType:(int)type URL:(id)url externalApplication:(id)application;
-(void)dealloc;
@end
