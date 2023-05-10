//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString;
@protocol APMConfigStore, OS_dispatch_queue;

@interface APMPersistedConfig : NSObject
{
    NSString *_name;
    id <APMConfigStore> _userDefaults;
    NSObject<OS_dispatch_queue> *_serialQueue;
    CDUnknownBlockType _synchronizeBlock;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(copy, nonatomic) NSNumber *allowPersonalizedAds;
@property(copy, nonatomic) NSString *appIDFromAdMob;
@property(copy, nonatomic) NSString *appIDFromGMP;
@property(copy, nonatomic) NSString *appInstanceID;
@property(copy, nonatomic) NSString *appVersion;
- (_Bool)boolForKey:(id)arg1;
- (void)cancelScheduledSynchronize;
- (void)clearValues;
@property(copy, nonatomic) NSString *configServerLastModifiedString;
- (void)dealloc;
@property(copy, nonatomic) NSDictionary *defaultEventParameters;
@property(retain, nonatomic) NSNumber *deferredDeepLinkRetrievalComplete;
@property(nonatomic) long long deferredDeepLinkRetryCount;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
@property(copy, nonatomic) NSString *firebaseFeatureRollouts;
@property(nonatomic) long long firstOpenTimestampMilliseconds;
@property(copy, nonatomic) NSString *hashedResettableDeviceID;
- (id)initWithSuiteName:(id)arg1;
- (long long)int64ForKey:(id)arg1;
- (long long)int64ForKey:(id)arg1 userDefault:(id)arg2;
@property(nonatomic) double lastBackoffTimestamp;
@property(nonatomic) double lastDeleteStaleBundlesTimestamp;
@property(nonatomic) double lastFailedUploadTimestamp;
@property(nonatomic) double lastMonitorDataSampledTimestamp;
@property(nonatomic) double lastSearchAdLookUpTimestamp;
@property(nonatomic) double lastSessionActivityClockTime;
@property(nonatomic) double lastSuccessfulUploadTimestamp;
@property(copy, nonatomic) NSNumber *loadTimestampValue;
@property(nonatomic) long long measurementEnabledState;
@property(readonly, nonatomic) double midnightOffset;
@property(copy, nonatomic, setter=setOSVersion:) NSString *osVersion;
- (void)scheduleSynchronizeToDisk;
@property(copy, nonatomic) NSNumber *searchAdCampaignValue;
@property(nonatomic) long long searchAdRetryCount;
@property(nonatomic) long long sessionNumber;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setInt64:(long long)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool shouldSetLastAdvertisingIDResetUserProperty;
- (void)setString:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool unmatchedFirstOpenWithoutIDFA;
- (id)stringForKey:(id)arg1;
- (void)synchronizeToDisk;

@end

