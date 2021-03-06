/* SBLaunchAlertItem.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, SBApplication;

__attribute__((visibility("hidden")))
@interface SBLaunchAlertItem : XXUnknownSuperclass {
	SBApplication* _associatedDisplay;
	int _type;
	NSString* _bundleID;
	BOOL _isDataAlert;
	BOOL _usesCellNetwork;
}
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(id)alertSheet;
-(id)_customAirplaneModeAlertPrompt;
-(BOOL)dismissOnLock;
-(void)_displayDeactivated:(id)deactivated;
-(void)setAssociatedWithDisplay:(id)display;
-(void)dealloc;
-(id)initWithLaunchAlertType:(int)launchAlertType dataAlert:(BOOL)alert usesCellNetwork:(BOOL)network bundleID:(id)anId;
@end
