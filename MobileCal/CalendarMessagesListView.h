/* CalendarMessagesListView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileCal-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface CalendarMessagesListView : XXUnknownSuperclass {
	UILabel* _noInvitesView;
	NSString* _noContentViewString;
}
@property(retain, nonatomic) NSString* noContentViewString;
+(float)defaultRowHeight;
-(void).cxx_destruct;
-(void)setFrame:(CGRect)frame;
-(void)setShowNoInvitesView:(BOOL)view;
-(void)_adjustNoInvitesView;
-(id)initWithFrame:(CGRect)frame style:(int)style;
@end
