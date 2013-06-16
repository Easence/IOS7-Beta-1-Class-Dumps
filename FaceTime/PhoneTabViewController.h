/* PhoneTabViewController.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "FaceTime-Structs.h"
#import "PhoneBadgeable.h"
#import "NSObject.h"


@protocol PhoneTabViewController <NSObject, PhoneBadgeable>
+(id)tabBarIconName;
+(id)defaultPNGName;
+(int)tabViewType;
-(void)handleURL:(id)url;
-(void)prepareForSnapshot;
-(BOOL)shouldSnapshot;
@optional
+(BOOL)requiresNavigationControllerContainer;
+(id)tabBarIconImageSelected;
+(id)tabBarIconImage;
+(id)tabBarIconImageName;
+(int)tabBarSystemItem;
-(BOOL)tabBarControllerShouldSelectViewController:(id)tabBarController;
-(void)tabBarDidSelectViewController;
@end
