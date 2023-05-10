//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GULNetworkLoggerDelegate-Protocol.h"
#import "GULNetworkReachabilityDelegate-Protocol.h"

@class APMAlarm, APMAudience, APMDatabase, APMEManager, APMIdentity, APMPersistedConfig, APMRemoteConfig, APMScheduler, APMSearchAdReporter, APMSessionReporter, GULNetwork, NSArray, NSString;
@protocol APMMeasurementDelegate;

@interface APMMeasurement : NSObject <GULNetworkLoggerDelegate, GULNetworkReachabilityDelegate>
{
    NSString *_databaseName;
    _Bool _didInitializeComponents;
    struct _opaque_pthread_mutex_t _initializeComponentsLock;
    APMAlarm *_alarm;
    APMAudience *_audience;
    APMDatabase *_database;
    APMIdentity *_identity;
    GULNetwork *_network;
    APMPersistedConfig *_persistedConfig;
    APMRemoteConfig *_remoteConfig;
    APMScheduler *_scheduler;
    APMSessionReporter *_sessionReporter;
    APMSearchAdReporter *_searchAdReporter;
    APMEManager *_experimentManager;
    NSArray *_uploadingBundleIDs;
    NSString *_previousGMPAppID;
    // Error parsing type: AQ, name: _backgroundUpdateTask
    double _initTimestamp;
    double _suspendedUploadTimestamp;
    NSString *_appID;
    NSArray *_safelistedEvents;
    _Bool _enabled;
    _Bool _wasEnabledDuringInitialization;
    _Bool _isAnalyticsCollectionEnabled;
    _Bool _isAnalyticsCollectionDeactivated;
    _Bool _isNetworkRequestPending;
    id <APMMeasurementDelegate> _measurementDelegate;
}

+ (id)deepLinkFromUserActivity:(id)arg1;
+ (void)handleAppDidFinishLaunching:(id)arg1;
+ (void)handleStoredURLAfterAppLaunchWithNotification:(id)arg1;
+ (_Bool)hasSharedInstance;
+ (void)initializeSharedInstanceWithAppID:(id)arg1 isAnalyticsCollectionEnabled:(_Bool)arg2 isAnalyticsCollectionDeactivated:(_Bool)arg3 safelistedEvents:(id)arg4;
+ (void)load;
+ (id)monitor;
+ (void)notCalled;
+ (id)remoteConfig;
+ (id)sharedInstance;
+ (void)subscribeForAppDidFinishLaunchingNotifications;
- (void).cxx_destruct;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 contexts:(id)arg4;
- (void)addBundleMetadataIntoBundle:(id)arg1 bundleStartTimestamp:(double)arg2 bundleEndTimestamp:(double)arg3;
@property(readonly, nonatomic) APMAlarm *alarm;
- (id)appExceptionEventWithFirebaseFeatureRollouts:(id)arg1;
@property(readonly, nonatomic) APMAudience *audience;
- (void)backfillSessionNumber;
- (_Bool)bundleRawEvents;
- (_Bool)canEventBeSampled:(id)arg1;
- (_Bool)checkConversion:(id)arg1 dailyCounts:(id)arg2;
- (_Bool)checkRealtime:(id)arg1 dailyCounts:(id)arg2;
- (id)createRawEventMetadataWithUserAttributes:(id)arg1;
@property(readonly, nonatomic) APMDatabase *database; // @synthesize database=_database;
- (void)dealloc;
- (_Bool)dedupeSubscriptionEvent:(id)arg1;
- (id)deepLinkInfoFromResponseData:(id)arg1;
@property(readonly, nonatomic) _Bool didInitializeComponents;
- (id)evaluationTimeFromRawEvents:(id)arg1 bundle:(id)arg2;
- (id)eventAfterSafelistingEvent:(id)arg1;
- (id)eventsAfterUpdatingEventAggregates:(id)arg1 audienceTimestampsCache:(id)arg2;
- (void)fetchRemoteConfig;
- (id)fileAttributesForPath:(id)arg1;
- (void)filterPurchaseTransactions:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)filteredBundlesWithCompatibleAppID:(id)arg1 resettableDeviceID:(id)arg2 vendorDeviceID:(id)arg3 bundlesToUpload:(id)arg4;
- (double)firstOpenTimestamp;
- (void)handleAppDidBecomeActiveEvent:(id)arg1;
- (void)handleAppWillEnterForegroundNotification:(id)arg1;
- (void)handleAppWillResignActiveEvent:(id)arg1;
- (void)handleDebugModeWithURL:(id)arg1;
- (void)handleDeepLink:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3;
- (void)handleDeferredDeepLinkInfo:(id)arg1;
- (void)handleEventOnWorkerQueue:(id)arg1;
- (void)handleInternalEventOnWorkerQueue:(id)arg1;
- (void)handleNonFirstOpenEventURL:(id)arg1 eventTimestampInSeconds:(double)arg2;
- (void)handleOpenURL:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3;
- (void)handleOpenURLOnWorkerQueue:(id)arg1 clickTimestampInMs:(id)arg2 eventTimestampInSeconds:(double)arg3 extraParameters:(id)arg4;
- (void)handleSetDefaultEventParametersOnWorkerQueue:(id)arg1;
- (_Bool)hasDataToUpload;
@property(readonly, nonatomic) APMIdentity *identity;
- (void)incrementRetryCounter;
- (id)initWithAppID:(id)arg1 isAnalyticsCollectionEnabled:(_Bool)arg2 isAnalyticsCollectionDeactivated:(_Bool)arg3 safelistedEvents:(id)arg4 experimentManager:(id)arg5;
- (id)initWithDatabaseName:(id)arg1 persistedConfig:(id)arg2 network:(id)arg3 scheduler:(id)arg4 alarm:(id)arg5 appID:(id)arg6 isAnalyticsCollectionEnabled:(_Bool)arg7 isAnalyticsCollectionDeactivated:(_Bool)arg8 safelistedEvents:(id)arg9 experimentManager:(id)arg10;
- (id)internalEventFromPublicEvent:(id)arg1;
@property(nonatomic) _Bool isAnalyticsCollectionDeactivated; // @synthesize isAnalyticsCollectionDeactivated=_isAnalyticsCollectionDeactivated;
@property(nonatomic) _Bool isAnalyticsCollectionEnabled; // @synthesize isAnalyticsCollectionEnabled=_isAnalyticsCollectionEnabled;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (_Bool)isEventBundledAfterRoll:(int)arg1;
- (_Bool)isFirebaseRemoteConfigSDKPresent;
- (_Bool)isNetworkReadyForRequest;
@property(nonatomic) _Bool isNetworkRequestPending; // @synthesize isNetworkRequestPending=_isNetworkRequestPending;
- (_Bool)isRealtimeEvent:(id)arg1 dailyCounts:(id)arg2;
- (_Bool)isValidCampaignURLParamDictionary:(id)arg1;
- (_Bool)isVersionSameAsOriginalVersion;
- (void)logEvent:(id)arg1;
- (void)logEventOnWorkerQueue:(id)arg1 notifyEventListeners:(_Bool)arg2;
- (void)logEventOnWorkerQueueWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4 timestamp:(double)arg5 enabled:(_Bool)arg6 ignoreEnabled:(_Bool)arg7 ignoreInterceptor:(_Bool)arg8 interceptor:(CDUnknownBlockType)arg9 addedScreenParameters:(id)arg10;
- (void)logEventWithOrigin:(id)arg1 isPublicEvent:(_Bool)arg2 name:(id)arg3 parameters:(id)arg4 timestamp:(double)arg5 enabled:(_Bool)arg6 ignoreEnabled:(_Bool)arg7 ignoreInterceptor:(_Bool)arg8 interceptor:(CDUnknownBlockType)arg9 addedScreenParameters:(id)arg10;
- (void)logFirstOpenConsentedEvent:(double)arg1;
- (void)maxUserPropertiesForOrigin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)maybeAddDebugAndRealtimeParameters:(id)arg1;
@property(nonatomic) __weak id <APMMeasurementDelegate> measurementDelegate; // @synthesize measurementDelegate=_measurementDelegate;
@property(readonly, nonatomic) GULNetwork *network;
- (void)networkRemoteConfigFetchCompletionHandler:(id)arg1 data:(id)arg2 error:(id)arg3;
- (void)networkUploadCompletionHandlerWithResponse:(id)arg1 error:(id)arg2;
- (double)nextUploadingTime;
- (id)parametersWithAddedDefaultEventParameters:(id)arg1;
@property(readonly, nonatomic) APMPersistedConfig *persistedConfig;
- (id)processRawEvents:(id)arg1 metadata:(long long)arg2;
- (void)processSessionFromEvent:(id)arg1;
- (id)rawEventsWithMetadataFingerprint:(long long)arg1;
- (void)reachabilityDidChange;
- (id)remoteConfigInstance;
- (_Bool)removeBundlesFromDatabaseWithIDs:(id)arg1;
- (void)removeUserAttribute:(id)arg1;
- (void)removeUserAttributeOnWorkerQueue:(id)arg1;
- (void)reportAppUpdateOnWorkerQueue;
- (void)reportFirstOpenOnWorkerQueue;
- (void)reportOSUpdateOnWorkerQueue;
- (void)reportSessionStartOnWorkerQueueWithTimestamp:(double)arg1 appInBackground:(_Bool)arg2;
- (void)reportStoredCampaignEventOnWorkerQueue:(id)arg1;
- (void)requestDeferredDeepLink;
- (_Bool)resetAnalyticsDataWithAppInstanceID:(id)arg1;
@property(readonly, nonatomic) NSArray *safelistedEvents;
- (id)sampleEvents:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) APMScheduler *scheduler;
- (_Bool)sendDeepLinkURLToAppDelegateOnMainThread:(id)arg1 extraInfo:(id)arg2;
@property(readonly, nonatomic) APMSessionReporter *sessionReporter; // @synthesize sessionReporter=_sessionReporter;
- (void)setDefaultEventParameters:(id)arg1;
- (void)setEnabledOnWorkerQueue:(_Bool)arg1;
- (void)setLastAdvertisingIDResetUserPropertyOnWorkerQueue;
- (void)setPersonalizedAdsUserPropertyOnWorkerQueue;
- (void)setProspectiveConsentSettings;
- (void)setSessionTimeoutInterval:(double)arg1;
- (void)setSuspendedUploadTimestamp:(double)arg1;
- (void)setUploadInProgressWithBundleIDs:(id)arg1;
- (void)setUserAttribute:(id)arg1;
- (void)setUserAttributeOnWorkerQueue:(id)arg1;
- (long long)setUserPropertyInDatabaseOnWorkerQueue:(id)arg1;
- (_Bool)shouldAllowAdNetworkRegistration;
- (_Bool)shouldAllowClickID;
- (_Bool)shouldAllowRequestDeferredDeepLink;
- (id)shouldDisableAdPersonalization;
- (_Bool)shouldDropDuplicatedSessionStartWithRolloutEvent:(id)arg1;
- (_Bool)shouldEnableMeasurement;
- (_Bool)shouldProcessEvent:(id)arg1 dailyCounts:(id)arg2 isPublicEvent:(_Bool)arg3;
- (_Bool)shouldUseBackgroundSession;
- (_Bool)shouldWipeDataWithAppID:(id)arg1 appIDFromGMP:(id)arg2 appIDFromAdMob:(id)arg3 persistedAppIDFromGMP:(id)arg4 persistedAppIDFromAdMob:(id)arg5;
- (_Bool)startMeasurementOnWorkerQueue;
- (void)subscribeForAppForegroundBackgroundNotifications;
- (void)swapBackgroundTaskWithNewTaskID:(unsigned long long)arg1;
- (void)terminateBackgroundTask;
- (long long)timestampMillisRoundedUpToNextHour:(long long)arg1;
- (_Bool)updateAppMetadataForBundle:(id)arg1 bundleStartTimestamp:(double)arg2 bundleEndTimestamp:(double)arg3;
- (_Bool)updateLifetimeValueWithEvent:(id)arg1;
- (void)updateSchedule;
- (_Bool)updateUserEngagement:(long long)arg1 bundle:(id)arg2 sessionScoped:(_Bool)arg3;
- (void)uploadData;
- (void)uploadDataOrRegisterAlarm;
- (void)userAttributeWithName:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)userPropertiesIncludingInternal:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (id)validatePurchaseEvent:(id)arg1;
@property(readonly, nonatomic) _Bool wasEnabledDuringInitialization; // @synthesize wasEnabledDuringInitialization=_wasEnabledDuringInitialization;
- (_Bool)wipeoutAnalyticsDataAndResetComponents;
- (_Bool)writeEvent:(id)arg1 isPublicEvent:(_Bool)arg2 isRealtime:(_Bool)arg3;
- (void)writeEventOnWorkerQueue:(id)arg1;
- (void)writeFilteredEventOnWorkerQueue:(id)arg1;
- (void)writeSessionStartEventOnWorkerQueue:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

