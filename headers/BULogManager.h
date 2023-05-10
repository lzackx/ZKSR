//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSFileHandle, NSString;
@protocol OS_dispatch_queue;

@interface BULogManager : NSObject
{
    _Bool _hasFirstLogSetup;
    long long _level;
    long long _mode;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSObject<OS_dispatch_queue> *_logQueue;
    long long _maxFileCount;
    NSString *_currentFilePath;
    NSFileHandle *_currentFileHandle;
    NSDateFormatter *_messageDateFormatter;
}

+ (void)_prx_logWithFormat:(id)arg1 arguments:(char *)arg2;
+ (void)_prx_logWithLevel:(long long)arg1 format:(id)arg2 arguments:(char *)arg3;
+ (void)debugLogWithFormat:(id)arg1;
+ (void)errorLogWithFormat:(id)arg1;
+ (void)infoLogWithFormat:(id)arg1;
+ (void)internalLogWithFormat:(id)arg1;
+ (void)serverLogWithFormat:(id)arg1;
+ (id)sharedInstance;
+ (void)verboseLogWithFormat:(id)arg1;
+ (void)warningLogWithFormat:(id)arg1;
- (void).cxx_destruct;
- (id)_prx_currentFilePath;
- (id)_prx_currentParentDir;
- (void)_prx_logIntoFileWithMessage:(id)arg1;
- (void)_prx_logWithMsg:(id)arg1;
- (void)_prx_optimizeFileCount;
@property(retain, nonatomic) NSFileHandle *currentFileHandle; // @synthesize currentFileHandle=_currentFileHandle;
@property(copy, nonatomic) NSString *currentFilePath; // @synthesize currentFilePath=_currentFilePath;
- (void)dealloc;
- (id)filePathWithFileName:(id)arg1;
@property(nonatomic) _Bool hasFirstLogSetup; // @synthesize hasFirstLogSetup=_hasFirstLogSetup;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(nonatomic) long long level; // @synthesize level=_level;
- (id)logFileNameArray;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *logQueue; // @synthesize logQueue=_logQueue;
@property(nonatomic) long long maxFileCount; // @synthesize maxFileCount=_maxFileCount;
@property(retain, nonatomic) NSDateFormatter *messageDateFormatter; // @synthesize messageDateFormatter=_messageDateFormatter;
@property(nonatomic) long long mode; // @synthesize mode=_mode;

@end
