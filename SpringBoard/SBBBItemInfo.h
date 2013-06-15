/* SBBBItemInfo.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface SBBBItemInfo : XXUnknownSuperclass {
	id _representedObject;
}
@property(readonly, assign, nonatomic) NSString* identifier;
@property(readonly, assign, nonatomic) id representedObject;
+(id)infoWithRepresentedObject:(id)representedObject;
-(id)description;
-(unsigned)hash;
-(BOOL)isEqual:(id)equal;
-(void)invalidateCachedLayoutData;
-(float)heightForReusableViewInTableView:(id)tableView;
-(void)populateReusableView:(id)view;
-(Class)reusableViewClass;
-(id)initWithRepresentedObject:(id)representedObject;
@end
