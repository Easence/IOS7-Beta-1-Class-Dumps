/* MapPluginOverlay.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MapWebKitPlugin-Structs.h"
#import "MKOverlay.h"

@class NSString, MKOverlayPathView;

@protocol MapPluginOverlay <MKOverlay>
@property(readonly, assign, nonatomic) MKOverlayPathView* overlayView;
@property(readonly, assign, nonatomic) NSString* identifier;
@end