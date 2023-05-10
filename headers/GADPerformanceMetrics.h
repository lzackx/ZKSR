//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADFramerateObserver-Protocol.h"

@class GADMemoryUtilizationMonitor, GADNetworkUtilizationMonitor, GADScheduler, NSArray, NSDate, NSDictionary, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface GADPerformanceMetrics : NSObject <GADFramerateObserver>
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSDate *_startTimestamp;
    NSMutableArray *_droppedFrameCounts;
    double _droppedFrameReportingInterval;
    GADMemoryUtilizationMonitor *_memoryMonitor;
    GADScheduler *_memoryUpdateScheduler;
    GADNetworkUtilizationMonitor *_networkMonitor;
    unsigned long long _initiallyAllocatedByteCount;
    unsigned long long _peakAllocatedByteCount;
    unsigned long long _finalAllocatedByteCount;
    long long _cellularTransmittedByteCount;
    long long _cellularReceivedByteCount;
    long long _wifiTransmittedByteCount;
    long long _wifiReceivedByteCount;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellularReceivedByteCount;
@property(readonly, nonatomic) long long cellularTransmittedByteCount;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
@property(readonly, copy, nonatomic) NSArray *droppedFrameCountPerSample;
@property(readonly, nonatomic) unsigned long long finalAllocatedByteCount;
- (void)framerateMonitorDidDetectDroppedFrames:(long long)arg1;
@property(readonly, nonatomic) _Bool hasStarted;
- (id)init;
@property(readonly, nonatomic) unsigned long long initiallyAllocatedByteCount;
@property(readonly, nonatomic) unsigned long long peakAllocatedByteCount;
- (void)recordDroppedFrames:(long long)arg1 forBucketIndex:(long long)arg2;
- (void)start;
- (void)stop;
@property(readonly, nonatomic) long long wifiReceivedByteCount;
@property(readonly, nonatomic) long long wifiTransmittedByteCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

