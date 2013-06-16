/* MNGuidanceManager.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "Maps-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class GEOStep, MNRoute, NSString, NSData, GEOWaypointSearchResultRequest;
@protocol MNGuidanceManagerDelegate;

__attribute__((visibility("hidden")))
@interface MNGuidanceManager : XXUnknownSuperclass {
	MNRoute* _route;
	int _guidanceState;
	unsigned _currentStepIndex;
	double _distanceWhenFirstAnnouncementAllowed;
	double _distanceWhenInitialAnnounced;
	double _distanceWhenPrepareAnnounced;
	double _distanceWhenExecuteAnnounced;
	double _baselineSpeed;
	double _baselineDistance;
	double _minExecutionDistance;
	double _distanceUntilManeuverEnd;
	double _distanceUntilManeuverStart;
	double _lastUpdateTime;
	double _timeLastAnnouncementStarted;
	double _timeLastAnnouncementEnded;
	double _contentOfInitPrepAnnouncement;
	double _contentOfExecutionAnnouncement;
	double _estimateOfTimeToSpeakExecutionAnnouncement;
	BOOL _didAnnounceManeuverInitial;
	BOOL _didAnnounceManeuverPreparation;
	BOOL _currentDirectionsContinueStraight;
	BOOL _shouldSkipInitialAnnounce;
	BOOL _shouldSkipPrepareAnnounce;
	BOOL _shouldSkipExecuteAnnounce;
	BOOL _didAnnounceManeuverExecution;
	BOOL _didAnnounceSecondaryManeuver;
	BOOL _didAnnounceProceedToRoute;
	BOOL _shouldAnnounceContinueStraight;
	id<MNGuidanceManagerDelegate> _delegate;
	GEOWaypointSearchResultRequest* _destination;
	BOOL _displayMetricDistances;
	BOOL _displayYardsForShorterDistances;
	unsigned _pointIndexForCurrentRoadInfo;
	NSString* _currentRoadName;
	long long _currentShieldType;
	NSString* _currentShieldText;
	XXStruct_3c2M5A _currentInstructionOptions;
}
@property(assign, nonatomic) XXStruct_3c2M5A currentInstructionOptions;
@property(retain, nonatomic) NSString* currentShieldText;
@property(retain, nonatomic) NSString* currentRoadName;
@property(readonly, assign, nonatomic) MNRoute* route;
@property(readonly, assign, nonatomic) GEOStep* maneuverStep;
@property(readonly, assign, nonatomic) BOOL proceedingToRoute;
@property(readonly, assign, nonatomic) int guidanceState;
@property(readonly, assign, nonatomic) NSData* remainingRouteZilchData;
@property(assign, nonatomic) id<MNGuidanceManagerDelegate> delegate;
-(BOOL)repeatLastGuidanceAnnouncement:(id)announcement;
-(void)_notifyDisplayManeuverForSecondaryStep:(id)secondaryStep;
-(void)_notifyDisplayManeuverForStep:(id)step withDistance:(double)distance allowCombinedGuidance:(BOOL)guidance;
-(void)_notifyAnnounceManeuverForStep:(id)step withDistance:(double)distance withCombinedGuidance:(int)combinedGuidance playShortPrompt:(BOOL)prompt stage:(int)stage;
-(void)_notifyAnnounceContinue;
-(void)_notifyAnnounceProceedToRoute:(id)route withClosestStep:(id)closestStep withNamedStep:(id)namedStep andSecondaryStep:(id)step;
-(BOOL)_guidanceWillAnnounceSoon:(id)_guidance;
-(double)_calculateExecutionDistance:(id)distance withLogging:(BOOL)logging;
-(double)_speedFactor:(id)factor;
-(double)_adjustedDistanceToRoute:(id)route;
-(double)_adjustedVehicleSpeed:(id)speed;
-(BOOL)_updateConsiderExecuteAnnouncement:(id)announcement location:(id)location;
-(BOOL)_updateConsiderSubstepAnnouncement:(id)announcement step:(id)step location:(id)location;
-(BOOL)_updateConsiderPrepareAnnouncement:(id)announcement withMatch:(id)match;
-(BOOL)_updateConsiderInitialAnnouncement:(id)announcement passedManeuverStart:(BOOL)start;
-(BOOL)_updateConsiderContinueAnnouncement:(id)announcement location:(id)location;
-(double)_estimateTimeToSpeakExecutionAnnouncement;
-(double)_durationOfLastAnnouncement;
-(double)_timeSinceLastAnnouncement;
-(BOOL)_announcementInProgress;
-(void)_updatePrepareForNextStep;
-(BOOL)_updateGuidanceStateForRoute:(id)route withLocation:(id)location withMatch:(id)match withNavigatorState:(int)navigatorState stepChanged:(BOOL*)changed;
-(BOOL)_updateCheckIfNextStep:(id)step navigatorState:(int)state routeMatch:(id)match;
-(id)_updateValidateRouteMatchForLocation:(id)location;
-(double)_getPortionForStep:(id)step withSecondary:(id)secondary basedOnOptions:(XXStruct_3c2M5A*)options;
-(BOOL)_setInstructionContentForStep:(id)step withSecondary:(id)secondary optionsToSet:(XXStruct_3c2M5A*)set basedOnPortion:(double)portion;
-(BOOL)_startingWrongWayForLocation:(id)location navigatorState:(int)state routeMatch:(id)match;
-(void)_resetStepState;
-(void)updateGuidanceForLocation:(id)location navigatorState:(int)state;
-(id)_getClosestStepWithNameForProceedToRoute:(XXStruct_gLbvpC)route routeMatch:(id)match;
-(void)updateGuidanceForProceedToRouteAtLocation:(XXStruct_gLbvpC)location routeMatch:(id)match remainingTime:(double)time distanceUntilDestination:(double)destination;
-(id)_combinedGuidanceForStep:(id)step withType:(int)type;
-(void)_callUpdatePointOfInterestForLocation:(id)location navigatorState:(int)state;
-(int)_getDrivingSideForStep:(id)step inRoute:(id)route;
-(XXStruct_gLbvpC)maneuverStepCoordinate;
-(id)_getStepAtIndex:(unsigned)index clampIndexToRange:(BOOL)range;
-(id)_getStepAtIndex:(unsigned)index;
-(BOOL)_hasCurrentRoadNameChangedForLocation:(id)location;
-(void)_clearCurrentRoadName;
-(id)_nameInfoForCurrentRoad;
-(void)_didChangeCurrentLocale:(id)locale;
-(void)dealloc;
-(id)initWithRoute:(id)route destination:(id)destination proceedToRoute:(BOOL)route3 allowMidRouteStart:(BOOL)start;
@end
