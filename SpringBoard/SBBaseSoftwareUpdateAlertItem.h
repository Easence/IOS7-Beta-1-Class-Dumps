/* SBBaseSoftwareUpdateAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class SUDescriptor;

__attribute__((visibility("hidden")))
@interface SBBaseSoftwareUpdateAlertItem : XXUnknownSuperclass {
	SUDescriptor* _descriptor;
}
@property(readonly, assign, nonatomic) SUDescriptor* descriptor;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)activateDisplayWithURL:(id)url;
-(void)activateSoftwareUpdateSettingsDisplay;
-(id)updateName;
-(void)dealloc;
-(id)initWithDescriptor:(id)descriptor;
@end
