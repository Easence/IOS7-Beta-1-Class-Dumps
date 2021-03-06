/* DynamicBarAnimator.h Was Dumped By @greensnow_tweak on Sunday, 16 June 2013 at 02:49:00 PM AEST On IOS 7 Beta 1 Firmware. */
/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, CADisplayLink;

__attribute__((visibility("hidden")))
@interface DynamicBarAnimator : XXUnknownSuperclass {
	float _topBarHeightForState[2];
	float _bottomBarOffsetForState[2];
	BOOL _dragging;
	float _topBarVelocity;
	float _bottomBarVelocity;
	CADisplayLink* _displayLink;
	float _unroundedTopBarHeight;
	float _unroundedBottomBarOffset;
	BOOL _didHideBarsByMoving;
	BOOL _didShowBarsByTugging;
	BOOL _disableTug;
	float _lastTugOffset;
	double _lastTugSampleTime;
	NSTimer* _tugTimer;
	float _tugVelocity;
	double _lastUpdateTime;
	float _lastOffset;
	int _state;
	float _topBarHeight;
	float _bottomBarOffset;
	id _target;
	SEL _action;
	float _minimumTopBarHeight;
	float _maximumBottomBarOffset;
}
@property(assign, nonatomic) float maximumBottomBarOffset;
@property(assign, nonatomic) float minimumTopBarHeight;
@property(assign, nonatomic) SEL action;
@property(assign, nonatomic) id target;
@property(readonly, assign, nonatomic) float bottomBarOffset;
@property(readonly, assign, nonatomic) float topBarHeight;
@property(readonly, assign, nonatomic) int state;
-(void)setBottomBarOffset:(float)offset forState:(int)state;
-(void)setTopBarHeight:(float)height forState:(int)state;
-(void)endDraggingWithTargetOffset:(float)targetOffset velocity:(float)velocity;
-(void)updateDraggingWithOffset:(float)offset;
-(void)beginDraggingWithOffset:(float)offset;
-(void)_triggerTug:(id)tug;
-(void)_setTugTimer:(id)timer;
-(void)_updateTugHeuristicWithOffset:(float)offset atTime:(double)time;
-(void)_setTopBarVelocity:(float)velocity bottomBarVelocity:(float)velocity2;
-(void)_displayLinkFired:(id)fired;
-(float)_constrainBottomBarOffset:(float)offset;
-(float)_constrainTopBarHeight:(float)height;
-(BOOL)canTransitionToState:(int)state;
-(void)_updateOutputs;
-(void)attemptTransitionToState:(int)state animated:(BOOL)animated;
-(void)_transitionToSteadyState;
-(void)_transitionToStateWithoutAnimation:(int)stateWithoutAnimation;
-(void)_attemptTransitionToState:(int)state animated:(BOOL)animated velocity:(float)velocity;
-(void)_moveBarsWithDelta:(float)delta;
-(void)dealloc;
-(id)init;
@end
