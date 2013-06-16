/* InfoCardBackgroundView.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library
#import "InfoCardCinematics.h"

@class SearchResult;
@protocol InfoCardBackgroundDelegate;

__attribute__((visibility("hidden")))
@interface InfoCardBackgroundView : XXUnknownSuperclass <InfoCardCinematics> {
	int _preparationState;
	SearchResult* _searchResult;
	id<InfoCardBackgroundDelegate> _delegate;
}
@property(readonly, assign) int preparationState;
@property(assign) id<InfoCardBackgroundDelegate> delegate;
@property(retain, nonatomic) SearchResult* searchResult;
@property(readonly, assign) int backgroundType;
+(id)backgroundWithType:(int)type;
-(void)reset;
-(void)present;
-(void)prepareForPresentation;
-(BOOL)canDisplayForSearchResult:(id)searchResult;
-(id)initWithFrame:(CGRect)frame;
@end
