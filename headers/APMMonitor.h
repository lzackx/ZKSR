//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APMASLLogger, APMMonitoringSampledData, APMUserDefaults, NSString;
@protocol OS_dispatch_queue;

@interface APMMonitor : NSObject
{
    long long _logLevel;
    APMASLLogger *_logger;
    APMMonitoringSampledData *_monitoringSampledData;
    NSObject<OS_dispatch_queue> *_monitorQueue;
    long long _libraryVersion;
    APMUserDefaults *_monitorUserDefaults;
    _Bool _deferToFIRLogger;
    _Bool _debugModeEnabled;
    _Bool _verboseLoggingEnabled;
    _Bool _encodeContexts;
    NSString *_logTag;
}

+ (id)encodedStringWithContextArray:(id)arg1 insertSpaces:(_Bool)arg2;
+ (id)encodedStringWithContextObject:(id)arg1;
+ (_Bool)isMonitorableLevel:(long long)arg1;
+ (_Bool)isSilentLevel:(long long)arg1;
+ (id)lastAPMSymbolFromException:(id)arg1;
+ (id)logLevelDescriptionFromLogLevel:(long long)arg1;
+ (id)monitoringDataKeyWithMessage:(id)arg1 logLevel:(long long)arg2 libraryVersion:(long long)arg3;
+ (id)stringWithLogMessage:(id)arg1 logLevel:(long long)arg2 contexts:(id)arg3 encodeContexts:(_Bool)arg4;
- (void).cxx_destruct;
- (void)clearMonitoringData;
@property(nonatomic) _Bool encodeContexts; // @synthesize encodeContexts=_encodeContexts;
- (id)initWithLibraryVersion:(long long)arg1;
- (id)initWithLogLevel:(long long)arg1 logger:(id)arg2 libraryVersion:(long long)arg3;
- (void)insertOrUpdateMonitoringDataWithMessage:(id)arg1 encodedContext:(id)arg2 logLevel:(long long)arg3;
@property(nonatomic, getter=isDebugModeEnabled) _Bool debugModeEnabled; // @synthesize debugModeEnabled=_debugModeEnabled;
- (_Bool)isLoggableLevel:(long long)arg1;
@property(nonatomic, getter=isVerboseLoggingEnabled) _Bool verboseLoggingEnabled; // @synthesize verboseLoggingEnabled=_verboseLoggingEnabled;
- (void)loadMonitoringDataFromUserDefaultsOnMonitorQueue;
@property(retain, nonatomic) NSString *logTag; // @synthesize logTag=_logTag;
- (void)logToConsole:(long long)arg1 message:(id)arg2 logLevel:(long long)arg3;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 context:(id)arg4 context:(id)arg5 context:(id)arg6;
- (void)logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(id)arg3 contexts:(id)arg4;
- (void)migrateMonitorDataOnMonitorQueue;
- (id)monitoringDataForDispatchWithSamplePeriod:(double)arg1 lastSampledTimestamp:(double)arg2;
- (void)saveMonitoringDataToUserDefaultsOnMonitorQueue;
- (void)setLogLevel:(long long)arg1;
- (void)synchronizeToDiskOnMonitorQueue;

@end

