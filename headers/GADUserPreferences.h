//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADScheduler, NSArray, NSDictionary, NSMutableArray, NSNumber, NSString;
@protocol OS_dispatch_queue;

@interface GADUserPreferences : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    NSMutableArray *_userDefaultsObservers;
    _Bool _signalCollectionObserved;
    double _NPALastUpdatedTimestamp;
    GADScheduler *_timeoutScheduler;
    NSDictionary *_cachedPreferencesConfiguration;
    NSDictionary *_defaultPreferencesConfiguration;
    double _configurationLastUpdatedTimestamp;
    NSArray *_observedNPAKeys;
    NSArray *_observedPreferencesConfigurationKeys;
    NSString *_perAppIdentifier;
    NSString *_perAppIdentifierV2;
    _Bool _preferencesUpdateInProgress;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *NPA;
- (id)PAUIDEnabledByPublisher;
- (id)PAUIDEnabledByUser;
@property(readonly, nonatomic) NSDictionary *PAUIDSignals;
@property(readonly, nonatomic) NSDictionary *appMeasurementConfiguration;
- (void)checkForPAUIDTimeout;
- (void)checkForPAUIDV2Timeout;
- (void)checkForUserDefaultsChange;
- (void)handleAppMeasurementConfigurationUserDefaultsDidChange;
- (void)handleNPAUserDefaultsDidChange;
@property(readonly, nonatomic) _Bool identifiersAllowed;
- (id)init;
- (id)internalNPA;
- (_Bool)lockQueueIdentifiersAllowed;
- (id)lockQueuePreferencesConfiguration;
- (void)lockQueueSetPreferencesConfiguration:(id)arg1 timestamp:(double)arg2 defaultPreferencesUpdated:(_Bool)arg3;
- (id)observedUserDefaults;
- (id)preferencesConfiguration;
- (void)resetApplicationPrivacyBitsIfUnsetAfterSignalCollection;
- (void)resetPAUID;
- (void)setNPA:(id)arg1 timestamp:(double)arg2;
- (void)setPAUIDEnabledByPublisher:(_Bool)arg1;
- (void)setPAUIDEnabledByUser:(_Bool)arg1;
- (void)setPreferencesConfiguration:(id)arg1 timestamp:(double)arg2;
- (void)updateCachedUserDefaults;
- (void)updateDefaultAppMeasurementConfiguration;
- (void)updatePAUID:(id)arg1;
- (void)updatePAUIDCache;
- (void)updatePAUIDV2:(id)arg1;

@end

