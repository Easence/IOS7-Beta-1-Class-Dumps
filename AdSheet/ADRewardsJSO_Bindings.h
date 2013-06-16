/* ADRewardsJSO_Bindings.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "JSExport.h"

@class JSValue, NSArray;

@protocol ADRewardsJSO_Bindings <JSExport>
@property(readonly, assign, nonatomic) NSArray* rewardTokens;
@property(retain, nonatomic) JSValue* listener;
-(void)reportRedeemFailureForReward:(id)reward withErrorMessage:(id)errorMessage;
-(void)userRedeemedReward:(id)reward;
-(void)lookupReward:(id)reward;
@optional
-(void)reportRedeemFailureForReward:(id)reward withErrorMessage:(id)errorMessage __JS_EXPORT_AS__reportRedeemFailure:(id)failure;
@end
