/* SBGlintyStringSettings.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface SBGlintyStringSettings : XXUnknownSuperclass {
	BOOL _designMode;
	BOOL _debug;
	float _speed;
	float _overlayOpacity;
	float _overlayTint;
	float _animationIntervalDelay;
	float _spotlightOpacity;
	float _spotlightAnimationDuration;
	float _spotlightAnimationDelay;
	float _glintOpacity;
	float _glintAnimationDuration;
	float _leadingGlintAnimationDelay;
	float _trailingGlintAnimationDelay;
}
@property(assign, nonatomic) BOOL debug;
@property(assign, nonatomic) float trailingGlintAnimationDelay;
@property(assign, nonatomic) float leadingGlintAnimationDelay;
@property(assign, nonatomic) float glintAnimationDuration;
@property(assign, nonatomic) float glintOpacity;
@property(assign, nonatomic) float spotlightAnimationDelay;
@property(assign, nonatomic) float spotlightAnimationDuration;
@property(assign, nonatomic) float spotlightOpacity;
@property(assign, nonatomic) float animationIntervalDelay;
@property(assign, nonatomic) float overlayTint;
@property(assign, nonatomic) float overlayOpacity;
@property(assign, nonatomic) float speed;
@property(assign, nonatomic, setter=setDesignMode:) BOOL designMode;
+(id)archivedSettingsGroup;
-(id)settingsHUDConfiguration;
-(void)setDefaultValues;
@end
