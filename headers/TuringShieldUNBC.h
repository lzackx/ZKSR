//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString, TuringAppContextUNBC, TuringAutoPostRuleUNBC, TuringDeviceFingerprintUNBC;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source, TS_CLASS_ts_service;

@interface TuringShieldUNBC : NSObject
{
    _Bool _fingerprintServiceAlreadyStarted;
    NSObject<TS_CLASS_ts_service> *_innerService;
    NSMutableArray *_delegates;
    NSMutableDictionary *_tasks;
    NSMutableArray *_temporaryTasks;
    NSString *_fingerprintServiceUserID;
    TuringAppContextUNBC *_fingerprintServiceAppContext;
    NSObject<OS_dispatch_source> *_fingerprintServiceTimer;
    TuringDeviceFingerprintUNBC *_cachedFingerprint;
    NSObject<OS_dispatch_semaphore> *_fingerprintQueryLock;
    NSObject<OS_dispatch_queue> *_fingerprintQueryQueue;
    NSLock *_fingerprintOnQueueCounterLock;
    unsigned long long _fingerprintOnQueueCounter;
    TuringAutoPostRuleUNBC *_fingerprintServicePostRule;
    NSDictionary *_blockedFingerprintConfig;
}

+ (id)information;
+ (double)requestTimeout;
+ (void)resetDefaultRequestTimeout;
+ (void)setRequestTimeout:(double)arg1;
+ (id)standardService;
- (void).cxx_destruct;
- (void)addDelegate:(id)arg1;
- (id)analysisTaskForSceneID:(unsigned long long)arg1 withUserID:(id)arg2 policy:(id)arg3;
- (id)autoPostRecordIfNeeded:(id)arg1;
@property(retain, nonatomic) NSDictionary *blockedFingerprintConfig; // @synthesize blockedFingerprintConfig=_blockedFingerprintConfig;
@property(retain) TuringDeviceFingerprintUNBC *cachedFingerprint; // @synthesize cachedFingerprint=_cachedFingerprint;
- (id)cachedRecords;
- (id)cachedRecordsForSceneID:(unsigned long long)arg1;
- (_Bool)canPostFingerprint;
- (void)cancelPostForID:(unsigned long long)arg1;
- (void)cleanupFingerprintSettings;
- (_Bool)currentFingerprintConfigIsValidForRule:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *delegates; // @synthesize delegates=_delegates;
- (void)detathManagedAnalysis:(id)arg1;
- (void)didReceiveBecomeActiveNotification:(id)arg1;
- (void)didReceiveResignActiveNotification:(id)arg1;
- (_Bool)disablesPrivacySensitiveFingerprintData;
- (void)enumerateDelegatesUsingBlock:(CDUnknownBlockType)arg1;
@property(nonatomic) unsigned long long fingerprintOnQueueCounter; // @synthesize fingerprintOnQueueCounter=_fingerprintOnQueueCounter;
@property(retain, nonatomic) NSLock *fingerprintOnQueueCounterLock; // @synthesize fingerprintOnQueueCounterLock=_fingerprintOnQueueCounterLock;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *fingerprintQueryLock; // @synthesize fingerprintQueryLock=_fingerprintQueryLock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fingerprintQueryQueue; // @synthesize fingerprintQueryQueue=_fingerprintQueryQueue;
@property(nonatomic) _Bool fingerprintServiceAlreadyStarted; // @synthesize fingerprintServiceAlreadyStarted=_fingerprintServiceAlreadyStarted;
@property(retain, nonatomic) TuringAppContextUNBC *fingerprintServiceAppContext; // @synthesize fingerprintServiceAppContext=_fingerprintServiceAppContext;
@property(retain, nonatomic) TuringAutoPostRuleUNBC *fingerprintServicePostRule; // @synthesize fingerprintServicePostRule=_fingerprintServicePostRule;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *fingerprintServiceTimer; // @synthesize fingerprintServiceTimer=_fingerprintServiceTimer;
@property(copy, nonatomic) NSString *fingerprintServiceUserID; // @synthesize fingerprintServiceUserID=_fingerprintServiceUserID;
- (id)getCachedFingerprintIncludingOudatedData;
- (_Bool)getFingerprintConfigOnlineWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getFingerprintConfigWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getFingerprintOnlineWithCompletionHandler:(CDUnknownBlockType)arg1;
- (_Bool)getFingerprintOnlineWithPostRule:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (_Bool)getFingerprintWithCompletionHandler:(CDUnknownBlockType)arg1;
- (double)getFlexableFingerprintServingInterval;
- (id)getOfflineFingerprint;
- (id)initForName:(id)arg1;
@property(retain, nonatomic) NSObject<TS_CLASS_ts_service> *innerService; // @synthesize innerService=_innerService;
- (id)loadCurrentFingerprintConfigForRule:(id)arg1;
- (id)loadCurrentFingerprintConfigIfNotExpiredForRule:(id)arg1;
- (id)makeFingerprintRecord;
- (id)managedAnalysisTaskForSceneID:(unsigned long long)arg1;
- (void)markFingerprintDidPostWithError:(id)arg1;
- (void)markFlexableFingerprintServingForResponse:(id)arg1;
- (double)nextIntervalOfAutoQueryFingerprint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (unsigned long long)postRecord:(id)arg1 forRule:(id)arg2;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2;
- (unsigned long long)postRecords:(id)arg1 forRule:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)predictionForError:(id)arg1 withRecord:(id)arg2;
- (id)predictionForResponse:(id)arg1 withRecord:(id)arg2;
- (_Bool)reloadFingerprintConfigIfNeededWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeDelegate:(id)arg1;
- (void)removeRecords:(id)arg1;
- (void)resampleRecord:(id)arg1;
- (_Bool)saveFingerprintConfig:(id)arg1 forRule:(id)arg2;
- (void)setDisablesPrivacySensitiveFingerprintData:(_Bool)arg1;
@property(retain, nonatomic) NSMutableDictionary *tasks; // @synthesize tasks=_tasks;
@property(retain, nonatomic) NSMutableArray *temporaryTasks; // @synthesize temporaryTasks=_temporaryTasks;
- (void)setupAppContext:(id)arg1;
- (void)setupRecordHandler;
- (void)startFingerprintServiceForUserID:(id)arg1 appContext:(id)arg2 postRule:(id)arg3;
- (void)startFingerprintServiceWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)startRiskDetectingWithUserID:(id)arg1 withPostRule:(id)arg2;
- (void)stopFingerprintService;
- (void)stopRiskDetecting;
- (_Bool)storeRecord:(id)arg1;

@end

