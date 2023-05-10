//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashModel.h"

@class HMDBUCrashRegisters, NSArray, NSString;

@interface HMDBUCrashThreadInfo : HMDBUCrashModel
{
    _Bool _crashed;
    NSArray *_stackTrace;
    HMDBUCrashRegisters *_registers;
    NSArray *_frames;
    NSString *_pthreadName;
    NSString *_queueName;
    NSString *_threadName;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool crashed; // @synthesize crashed=_crashed;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
- (void)generateFrames:(id)arg1;
@property(copy, nonatomic) NSString *pthreadName; // @synthesize pthreadName=_pthreadName;
@property(copy, nonatomic) NSString *queueName; // @synthesize queueName=_queueName;
@property(retain, nonatomic) HMDBUCrashRegisters *registers; // @synthesize registers=_registers;
@property(copy, nonatomic) NSArray *stackTrace; // @synthesize stackTrace=_stackTrace;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
- (void)updateWithDictionary:(id)arg1;

@end

