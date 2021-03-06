/* MUActivityViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class MNRoute, CNContact, SearchResult;
@protocol MUActivityViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface MUActivityViewController : XXUnknownSuperclass {
	id<MUActivityViewControllerDelegate> _activityDelegate;
	CNContact* _contact;
	SearchResult* _searchResult;
	MNRoute* _route;
}
@property(retain, nonatomic) MNRoute* route;
@property(retain, nonatomic) SearchResult* searchResult;
@property(retain, nonatomic) CNContact* contact;
@property(assign, nonatomic) id<MUActivityViewControllerDelegate> activityDelegate;
-(id)_activityHandler;
-(void)_prepareActivity:(id)activity;
-(void)dealloc;
-(id)initWithRoute:(id)route;
-(id)initWithSearchResult:(id)searchResult contact:(id)contact;
-(id)initWithSearchResult:(id)searchResult;
@end
