/* DayTwoPartLabel.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UIFont, UILabel;

__attribute__((visibility("hidden")))
@interface DayTwoPartLabel : XXUnknownSuperclass {
	UILabel* _dayOfWeekLabel;
	UILabel* _dateYearLabel;
	UIFont* _font;
}
@property(retain, nonatomic) NSString* dateYearString;
@property(retain, nonatomic) UIFont* font;
@property(retain, nonatomic) NSString* dayOfWeekString;
-(void).cxx_destruct;
-(void)sizeToFit;
-(void)layoutSubviews;
-(id)init;
@end
