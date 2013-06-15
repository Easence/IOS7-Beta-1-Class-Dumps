/* SBApplicationIcon.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBLeafIcon.h"
#import "SpringBoard-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface SBApplicationIcon : SBLeafIcon {
	NSString* _displayIdentifier;
}
-(id)applicationBundleID;
-(id)folderFallbackTitle;
-(id)folderTitleOptions;
-(void)setBadge:(id)badge;
-(id)automationID;
-(id)tags;
-(id)getUnmaskedIconImage:(int)image;
-(id)generateIconImage:(int)image;
-(BOOL)canGenerateImageInBackgroundForFormat:(int)format;
-(void)generateIconImageInBackground:(id)background;
-(id)blockForGeneratingIconImageInBackgroundWithFormat:(int)format;
-(id)_blockForGeneratingIconImageInBackgroundWithFormat:(int)format complete:(id)complete;
-(id)__loadIconImageForDataSource:(id)dataSource format:(int)format;
-(id)application;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)zone;
-(id)initWithApplication:(id)application;
@end
