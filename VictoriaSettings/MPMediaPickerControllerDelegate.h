/* MPMediaPickerControllerDelegate.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PreferenceBundles/VictoriaSettings.bundle/VictoriaSettings
 */

#import "NSObject.h"


@protocol MPMediaPickerControllerDelegate <NSObject>
@optional
-(void)mediaPickerDidCancel:(id)mediaPicker;
-(void)mediaPicker:(id)picker didPickMediaItems:(id)items;
@end