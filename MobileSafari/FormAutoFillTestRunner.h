/* FormAutoFillTestRunner.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "MobileSafari-Structs.h"
#import "PageLoadTestRunner.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface FormAutoFillTestRunner : PageLoadTestRunner {
	NSString* _testsDirectory;
	NSString* _scratchDirectory;
}
@property(copy, nonatomic) NSString* scratchDirectory;
@property(copy, nonatomic) NSString* testsDirectory;
-(void)finishedTestPage:(id)page;
-(id)_descriptiveNameForPage:(id)page;
-(void)_compareActualContent:(id)content toExpectedContentForPage:(id)page;
-(void)dealloc;
@end
