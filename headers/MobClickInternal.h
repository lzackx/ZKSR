//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UMComReportPolicyProtocol-Protocol.h"
#import "UMLogDataProtocol-Protocol.h"

@class NSDictionary, NSLock, NSMutableArray, NSMutableDictionary, NSString;

@interface MobClickInternal : NSObject <UMComReportPolicyProtocol, UMLogDataProtocol>
{
    NSMutableArray *_terminates;
    NSMutableArray *_events;
    NSMutableArray *_errors;
    NSMutableArray *_ekv;
    NSMutableArray *_tmpContainer;
    NSDictionary *_error_support_info;
    NSString *_sessionID;
    NSString *_delData;
    NSLock *sqlLock;
    NSMutableArray *_pageItems;
    NSMutableDictionary *_pageItemsHash;
    NSMutableDictionary *_ekvBeginTimes;
    NSMutableDictionary *_eventBeginTimes;
    NSMutableDictionary *_vcDidDic;
    NSMutableArray *_vcDic;
    NSMutableArray *_cPages;
    NSMutableDictionary *_track_list;
    _Bool _dplusSessionBegin;
    _Bool _uappSessionBegin;
    int _eLogType;
    int _ePartType;
    int _state;
    int _backstate;
    int _isNothook;
    CDUnknownBlockType _cbBlock;
}

+ (void)installBreakpad;
+ (_Bool)isFiterEventID:(id)arg1;
+ (_Bool)isFiterPageName:(id)arg1;
+ (void)setErrorSupportInfo:(id)arg1;
+ (id)sharedInstance;
+ (void)uninstallBreakpad;
- (void).cxx_destruct;
- (id)ForceBuildReportData;
- (id)ForceBuildReportDataWithVersion:(id)arg1;
- (void)addEvent:(id)arg1 inContainer:(id)arg2;
- (_Bool)additionalConditionFromDelegateWithReportPolicyType:(unsigned long long)arg1 withContext:(id)arg2;
- (id)arrayWithEventType:(int)arg1;
- (void)asyncMakeSessionStartEnvelopeForBegonia:(id)arg1 version:(id)arg2;
@property(nonatomic) int backstate; // @synthesize backstate=_backstate;
- (void)beginPerformJob:(int)arg1;
- (void)beginPerformJobForBegonia:(int)arg1;
- (id)buildABExperimentDataForBegonia;
- (void)buildActivateSessionForBegonia;
- (id)buildBodySegForBegoniaWithVersion:(id)arg1 withSid:(id)arg2;
- (void)buildDataForBegonia;
- (_Bool)buildDataForBegoniaWithMaxDataSpace:(long long)arg1;
- (void)buildDummySession;
- (id)buildErrorsWithVersion:(id)arg1 withSid:(id)arg2;
- (id)buildEventsWithVersion:(id)arg1 withSid:(id)arg2;
- (id)buildGameDataForBegonia;
- (id)buildProfileDataForBegonia;
- (id)buildSessionsWithVersion:(id)arg1 withSid:(id)arg2;
- (id)buildThreePartiesDataForBegonia;
@property(retain) NSMutableArray *cPages; // @synthesize cPages=_cPages;
@property(copy) CDUnknownBlockType cbBlock; // @synthesize cbBlock=_cbBlock;
- (_Bool)checkEventLimit;
- (void)doCreateSessionStartForBegonia:(id)arg1 version:(id)arg2;
- (void)doMakeSessionStartEnvelopeForBegonia:(id)arg1 version:(id)arg2 defcon:(int)arg3 isProFile:(_Bool)arg4;
- (void)doMakeSessionStartEnvelopeForZero:(id)arg1 version:(id)arg2 defcon:(int)arg3 isProFile:(_Bool)arg4;
- (void)doPairCurAutoPage;
- (void)doSessionStartForBegonia:(id)arg1 version:(id)arg2 defcon:(int)arg3 isProFile:(_Bool)arg4;
@property(nonatomic) _Bool dplusSessionBegin; // @synthesize dplusSessionBegin=_dplusSessionBegin;
@property(retain) NSMutableArray *ekv; // @synthesize ekv=_ekv;
- (void)ekvBegin:(id)arg1;
- (void)ekvEnd:(id)arg1;
- (void)error:(id)arg1;
@property(retain) NSDictionary *error_support_info; // @synthesize error_support_info=_error_support_info;
@property(retain) NSMutableArray *errors; // @synthesize errors=_errors;
- (id)eventAttribute:(id)arg1;
- (void)eventBegin:(id)arg1;
- (void)eventEnd:(id)arg1;
@property(retain) NSMutableArray *events; // @synthesize events=_events;
- (void)flushMemoryEventsIntoDB;
- (id)generateNewPreVersionDate;
- (_Bool)hasJob;
- (id)init;
@property(nonatomic) int isNothook; // @synthesize isNothook=_isNothook;
- (void)loadCacheFromTempContainer;
- (void)outputUMLog:(id)arg1;
- (id)preVersionDateString;
- (id)preVersionDateStringInImprint;
- (id)preVersionDateStringInLocal;
- (id)preVersionString;
- (id)preVersionStringInImprint;
- (id)preVersionStringInLocal;
- (id)readCachedDataForBegoniaWithBody:(id)arg1 maxSize:(long long)arg2 WithVersion:(id)arg3;
- (id)readCachedDataForBegoniaWithVersion:(id)arg1 withSid:(id)arg2;
- (void)removeCacheData;
- (void)removeCacheData:(id)arg1;
- (void)removeCacheData:(id)arg1 withVersion:(id)arg2;
- (void)removeCacheDataForBegonia:(id)arg1 WithVersion:(id)arg2;
- (void)removeInstanceMsgs;
- (void)removeInstanceMsgsFromDB;
- (void)removeSessions;
- (void)saveAndCleanCache;
@property(copy) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (void)sessionStartForBegonia:(id)arg1 version:(id)arg2 isProFile:(_Bool)arg3 isMake:(_Bool)arg4;
- (void)setEventSessionID:(id)arg1;
- (void)setPreVersionDateStringInLocal:(id)arg1;
- (void)setPreVersionStringInLocal:(id)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain) NSMutableArray *terminates; // @synthesize terminates=_terminates;
@property(retain) NSMutableDictionary *track_list; // @synthesize track_list=_track_list;
@property(retain) NSMutableArray *vcDic; // @synthesize vcDic=_vcDic;
@property(retain) NSMutableDictionary *vcDidDic; // @synthesize vcDidDic=_vcDidDic;
- (id)setupReportData:(long long)arg1;
- (id)setupReportDataForBegonia:(long long)arg1;
- (_Bool)shoudleSetupReportDataWithContext:(id)arg1;
- (void)stopSession:(long long)arg1;
- (void)umNetWorkReachabilityChangedFromUMCommon:(id)arg1;
- (void)workEvent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
