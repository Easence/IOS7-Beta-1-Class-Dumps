/* SourceAttributionCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableAttributedString, SearchResult, UILabel;

__attribute__((visibility("hidden")))
@interface SourceAttributionCell : XXUnknownSuperclass {
	UILabel* _label;
	SearchResult* _searchResult;
	NSMutableAttributedString* _attrString;
}
@property(retain, nonatomic) SearchResult* searchResult;
+(id)reuseIdentifier;
-(void)tintColorDidChange;
-(void)_updateTextColor;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier;
@end
