/* SearchViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class CalendarModel, UINavigationController;

__attribute__((visibility("hidden")))
@interface SearchViewController : XXUnknownSuperclass {
	id _doneTapped;
	CalendarModel* _model;
	UINavigationController* _embeddedNavigationController;
}
@property(retain, nonatomic) UINavigationController* embeddedNavigationController;
@property(retain, nonatomic) CalendarModel* model;
@property(copy, nonatomic) id doneTapped;
-(void).cxx_destruct;
-(void)loadView;
-(unsigned)supportedInterfaceOrientations;
-(id)initWithModel:(id)model;
@end
