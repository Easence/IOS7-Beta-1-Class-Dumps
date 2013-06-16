/* LocationServicesCell.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class LocationUsageMixin, NSURL;

__attribute__((visibility("hidden")))
@interface LocationServicesCell : XXUnknownSuperclass {
	LocationUsageMixin* _location;
	NSURL* _bundleURL;
	BOOL _isWebApp;
}
@property(readonly, assign, nonatomic) LocationUsageMixin* location;
-(void)refreshCellContentsWithSpecifier:(id)specifier;
-(id)getLazyIcon;
-(id)getLazyIconID;
-(void)layoutSubviews;
-(void)dealloc;
-(id)initWithStyle:(int)style reuseIdentifier:(id)identifier specifier:(id)specifier;
@end
