//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTEventReporterDelegate-Protocol.h"

@class GDTEventReporter, NSLock, NSString;

@interface GDTEventController : NSObject <GDTEventReporterDelegate>
{
    _Bool _sendingCacheEvent;
    _Bool _uploadingLocalLog;
    _Bool _useNewEventReport;
    long long _maxStoreContentLength;
    long long _eventReportType;
    long long _eventReportBatchCount;
    long long _eventReportPeriod;
    long long _perfReportType;
    long long _perfReportBatchCount;
    long long _perfReportPeriod;
    long long _localLogReportType;
    long long _localLogReportBatchCount;
    long long _localLogReportPeriod;
    long long _maxSendCount;
    long long _lastEventTimestamp;
    long long _lastPerfTimestamp;
    long long _lastLocalLogTimestamp;
    NSLock *_cacheEventLock;
    NSLock *_uploadLocalLogLock;
    GDTEventReporter *_eventReporter;
    GDTEventReporter *_perfReporter;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)GDTfunctiona0R8oN;
- (long long)GDTfunctiona9J2rD:(long long)arg1;
- (void)GDTfunctionb4lCPc:(id)arg1;
- (id)GDTfunctione1c1MX:(long long)arg1;
- (long long)GDTfunctione1fqi5:(long long)arg1;
- (long long)GDTfunctione1gSHV:(long long)arg1;
- (void)GDTfunctionh4ckwu;
- (void)GDTfunctionh7t4P9:(id)arg1;
- (void)GDTfunctionk1tCdB;
- (id)GDTfunctionm4s2ph:(long long)arg1;
- (void)GDTfunctionp7h5Gl:(id)arg1;
- (void)GDTfunctions0eJvy:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)GDTfunctions1XzeU;
- (void)GDTfunctions78LAE;
- (void)GDTfunctionu5WSIT:(long long)arg1 fromDay:(long long)arg2 toDay:(long long)arg3 complete:(CDUnknownBlockType)arg4;
- (long long)GDTfunctionu8zuGI:(long long)arg1;
- (void)GDTfunctionv2wLC8:(id)arg1 success:(_Bool)arg2;
- (void)GDTfunctionv5K8Uf;
@property(retain, nonatomic) NSLock *cacheEventLock; // @synthesize cacheEventLock=_cacheEventLock;
@property(nonatomic) long long eventReportBatchCount; // @synthesize eventReportBatchCount=_eventReportBatchCount;
@property(nonatomic) long long eventReportPeriod; // @synthesize eventReportPeriod=_eventReportPeriod;
@property(nonatomic) long long eventReportType; // @synthesize eventReportType=_eventReportType;
@property(retain, nonatomic) GDTEventReporter *eventReporter; // @synthesize eventReporter=_eventReporter;
- (id)init;
@property(nonatomic) long long lastEventTimestamp; // @synthesize lastEventTimestamp=_lastEventTimestamp;
@property(nonatomic) long long lastLocalLogTimestamp; // @synthesize lastLocalLogTimestamp=_lastLocalLogTimestamp;
@property(nonatomic) long long lastPerfTimestamp; // @synthesize lastPerfTimestamp=_lastPerfTimestamp;
@property(nonatomic) long long localLogReportBatchCount; // @synthesize localLogReportBatchCount=_localLogReportBatchCount;
@property(nonatomic) long long localLogReportPeriod; // @synthesize localLogReportPeriod=_localLogReportPeriod;
@property(nonatomic) long long localLogReportType; // @synthesize localLogReportType=_localLogReportType;
@property(nonatomic) long long maxSendCount; // @synthesize maxSendCount=_maxSendCount;
@property(nonatomic) long long maxStoreContentLength; // @synthesize maxStoreContentLength=_maxStoreContentLength;
@property(nonatomic) long long perfReportBatchCount; // @synthesize perfReportBatchCount=_perfReportBatchCount;
@property(nonatomic) long long perfReportPeriod; // @synthesize perfReportPeriod=_perfReportPeriod;
@property(nonatomic) long long perfReportType; // @synthesize perfReportType=_perfReportType;
@property(retain, nonatomic) GDTEventReporter *perfReporter; // @synthesize perfReporter=_perfReporter;
- (void)sendEvent:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(nonatomic) _Bool sendingCacheEvent; // @synthesize sendingCacheEvent=_sendingCacheEvent;
@property(retain, nonatomic) NSLock *uploadLocalLogLock; // @synthesize uploadLocalLogLock=_uploadLocalLogLock;
@property(nonatomic) _Bool uploadingLocalLog; // @synthesize uploadingLocalLog=_uploadingLocalLog;
@property(nonatomic) _Bool useNewEventReport; // @synthesize useNewEventReport=_useNewEventReport;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

