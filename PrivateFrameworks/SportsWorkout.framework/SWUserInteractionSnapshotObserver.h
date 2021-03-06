/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

@class NSArray, NSMutableArray, NSString;

@interface SWUserInteractionSnapshotObserver : NSObject <SWRunWorkoutObserver> {
    NSMutableArray *_snapshots;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) NSArray * snapshots;
@property(readonly) Class superclass;

- (void)adjustSnapshotsForDistanceScaleFactor:(float)arg1;
- (void)dealloc;
- (id)init;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (id)snapshots;

@end
