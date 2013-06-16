/* StarkCurrentLocationSignView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UILabel, StarkLocationNameProvider;

__attribute__((visibility("hidden")))
@interface StarkCurrentLocationSignView : XXUnknownSuperclass {
	UILabel* _currentLocationTitleLabel;
	UILabel* _addressLabel;
	StarkLocationNameProvider* _locationNameProvider;
	int _interactionModel;
}
@property(assign, nonatomic) int interactionModel;
-(void)layoutSubviews;
-(void)_setLocationName:(id)name;
-(void)_updateLocationNameProvider;
-(void)setHidden:(BOOL)hidden;
-(void)didMoveToWindow;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
@end
