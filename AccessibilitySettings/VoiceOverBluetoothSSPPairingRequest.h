/* VoiceOverBluetoothSSPPairingRequest.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class PSSpecifier, VoiceOverBluetoothDevice, UIAlertView;

__attribute__((visibility("hidden")))
@interface VoiceOverBluetoothSSPPairingRequest : XXUnknownSuperclass {
@private
	VoiceOverBluetoothDevice* _device;
	PSSpecifier* _specifier;
	UIAlertView* _alert;
	id _delegate;
	int _pairingStyle;
}
-(void)hidPairingResult:(id)result;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dismiss;
-(void)show;
-(void)setPairingStyle:(int)style andPasskey:(id)passkey;
-(int)pairingStyle;
-(id)_sanitizeNameForAlert:(id)alert;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(id)initWithDevice:(id)device andSpecifier:(id)specifier;
@end
