//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface APMMonitoringSampledData : NSObject
{
    NSMutableArray *_sampledData;
}

+ (_Bool)isValidUserDefaultsArrayEntry:(id)arg1;
+ (id)monitoringURLParamWithKey:(id)arg1 population:(id)arg2 context:(id)arg3;
+ (id)sampledDataEntryWithKey:(id)arg1 timestamp:(id)arg2 context:(id)arg3 population:(id)arg4;
- (void).cxx_destruct;
- (id)initWithArray:(id)arg1;
- (void)insertOrUpdateSampledDataWithKey:(id)arg1 encodedContext:(id)arg2;
- (id)monitoringDataForDispatchWithSamplePeriod:(double)arg1 lastSampledTimestamp:(double)arg2;
- (id)sampledData;

@end

