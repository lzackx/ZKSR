//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMapTable;

@interface BUPLMotionManager : NSObject
{
    NSMapTable *_managerContainer;
    NSHashTable *_hashTable;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleAccelerometerNoGravityObserverWithPlayableAd:(id)arg1 model:(CDStruct_31142d93)arg2;
- (void)handleAccelerometerObserverWithPlayableAd:(id)arg1 model:(CDStruct_31142d93)arg2;
- (void)handleGyroObserverWithPlayableAd:(id)arg1 model:(CDStruct_31142d93)arg2;
- (void)handleRotationRateObserverWithPlayableAd:(id)arg1 model:(id)arg2;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
- (id)init;
@property(retain, nonatomic) NSMapTable *managerContainer; // @synthesize managerContainer=_managerContainer;
- (id)startAccelerometerNoGravityObserverInterval:(double)arg1 playableAd:(id)arg2;
- (id)startAccelerometerObserverInterval:(double)arg1 playableAd:(id)arg2;
- (id)startDeviceMotionUpdatesWithInterval:(double)arg1 playableAd:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)startGyroObserverInterval:(double)arg1 playableAd:(id)arg2;
- (id)startRotationRateObserverInterval:(double)arg1 playableAd:(id)arg2;
- (id)stopAccelerometerNoGravityObserverWithPlayableAd:(id)arg1;
- (id)stopAccelerometerObserverWithPlayableAd:(id)arg1;
- (id)stopDeviceMotionUpdatesWithPlayableAd:(id)arg1;
- (id)stopGyroObserverObserverWithPlayableAd:(id)arg1;
- (id)stopRotationRateObserverWithPlayableAd:(id)arg1;

@end

