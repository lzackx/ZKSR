//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager;

@interface BUTwistMotionManager : NSObject
{
    CMMotionManager *_motionManager;
}

- (void).cxx_destruct;
- (_Bool)_checkIfFulfillWithBaseValue:(double)arg1 thetaValue:(double)arg2 threshold:(double)arg3;
- (id)init;
- (_Bool)startTwistWithThreshold:(long long)arg1 updatesWithHandler:(CDUnknownBlockType)arg2;
- (void)stopTwistUpdates;
- (_Bool)twistAvailable;

@end
