/* SBRingerHUDView.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBHUDView.h"
#import "SpringBoard-Structs.h"


__attribute__((visibility("hidden")))
@interface SBRingerHUDView : SBHUDView {
	BOOL _silent;
}
@property(assign, nonatomic, getter=isSilent) BOOL silent;
-(id)init;
-(void)_updateSilentImage;
@end
