/* PHRecentsPersonHeaderView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "MobilePhone-Structs.h"

@class PHRecentCall, NSArray;

__attribute__((visibility("hidden")))
@interface PHRecentsPersonHeaderView : XXUnknownSuperclass {
	PHRecentCall* _recentCall;
	NSArray* _dateLabels;
	NSArray* _summaries;
	float _intrinsicContentHeight;
}
@property(assign) float intrinsicContentHeight;
@property(retain) NSArray* summaries;
@property(retain) NSArray* dateLabels;
@property(readonly, assign) PHRecentCall* recentCall;
+(id)headerViewWithFrame:(CGRect)frame recentCall:(id)call;
-(CGSize)sizeThatFits:(CGSize)fits;
-(CGSize)intrinsicContentSize;
-(void)_buildView;
-(void)dealloc;
-(id)_initWithFrame:(CGRect)frame recentCall:(id)call;
-(id)init;
-(id)initWithFrame:(CGRect)frame;
-(id)newSummaryViewForRecentCall:(id)recentCall occurrenceDate:(id)date type:(int)type duration:(double)duration category:(int)category dataUsage:(double)usage;
@end
