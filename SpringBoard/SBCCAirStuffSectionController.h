/* SBCCAirStuffSectionController.h Was Dumped By @greensnow_tweak on Saturday, 15 June 2013 at 10:00:01 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "UIPopoverControllerDelegate.h"
#import "SFAirDropDiscoveryControllerDelegate.h"
#import "SFAirDropDiscoveryActionSheetDelegate.h"
#import "SpringBoard-Structs.h"
#import "SBControlCenterSectionViewController.h"
#import "MPAudioVideoRoutingViewControllerDelegate.h"

@class SBCCButtonLikeSectionView, MPAudioVideoRoutingActionSheet, MPAudioVideoRoutingViewController, MPAudioVideoRoutingPopoverController, SFAirDropDiscoveryController, BKSTimer;

__attribute__((visibility("hidden")))
@interface SBCCAirStuffSectionController : SBControlCenterSectionViewController <MPAudioVideoRoutingViewControllerDelegate, UIPopoverControllerDelegate, SFAirDropDiscoveryControllerDelegate, SFAirDropDiscoveryActionSheetDelegate> {
	SBCCButtonLikeSectionView* _airPlaySection;
	SBCCButtonLikeSectionView* _airDropSection;
	MPAudioVideoRoutingActionSheet* _airPlayActionSheet;
	MPAudioVideoRoutingViewController* _airPlayViewController;
	MPAudioVideoRoutingPopoverController* _airPlayPopoverController;
	SFAirDropDiscoveryController* _airDropDiscoveryController;
	BOOL _isVisible;
	BOOL _airPlayWasPreviouslyEnabled;
	BKSTimer* _resetTimer;
	BOOL _airPlayEnabled;
	BOOL _airDropEnabled;
}
@property(assign, nonatomic) BOOL airDropEnabled;
@property(assign, nonatomic) BOOL airPlayEnabled;
+(Class)viewClass;
-(void)popoverControllerDidDismissPopover:(id)popoverController;
-(void)discoveryController:(id)controller actionSheetDidDismiss:(id)actionSheet;
-(void)discoveryController:(id)controller actionSheetWillDismiss:(id)actionSheet;
-(void)discoveryControllerSettingsDidChange:(id)discoveryControllerSettings;
-(void)viewControllerRequestsDismissal:(id)dismissal;
-(void)_dismissAirplayControllerAnimated:(BOOL)animated;
-(void)_debugAirplaneStateDidChangeNotification:(id)_debugAirplaneState;
-(void)_debugWifiStateDidChangeNotification:(id)_debugWifiState;
-(void)_availableRoutesDidChangeNotification:(id)_availableRoutes;
-(void)_updateAirDropControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirDropStateChange;
-(void)_updateAirPlayControlAsEnabled:(BOOL)enabled;
-(void)_updateForAirPlayStateChange;
-(void)_airDropTapped:(id)tapped;
-(void)_airPlayTapped:(id)tapped;
-(void)_showAirPlayView;
-(void)_noteSectionEnabledStateDidChange;
-(void)_updateSubsectionVisibilityAnimated:(BOOL)animated;
-(void)noteControlCenterDidDismiss;
-(void)noteControlCenterWillPresent;
-(void)viewDidLoad;
-(id)view;
-(BOOL)enabledForOrientation:(int)orientation;
-(CGSize)contentSizeForOrientation:(int)orientation;
-(id)sectionIdentifier;
-(void)dealloc;
-(id)init;
@end
