//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface GDTEventStore : NSObject
{
    struct sqlite3 *db;
    long long maxStoreContentLength;
    NSObject<OS_dispatch_queue> *_task_queue;
    long long _storedEventCount;
    long long _storedLogCount;
    long long _storedPerfCount;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)GDTfunctionc9SQoU;
- (void)GDTfunctiond1wSEo:(long long)arg1;
- (int)GDTfunctione2jcgA:(const char *)arg1;
- (void)GDTfunctionf4NrfV:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)GDTfunctionf4NrfV:(id)arg1 hasTrySent:(_Bool)arg2 complete:(CDUnknownBlockType)arg3;
- (id)GDTfunctionf5sxa2:(long long)arg1 count:(long long)arg2;
- (void)GDTfunctionf5wMZH;
- (struct sqlite3 *)GDTfunctionm28TF2;
- (void)GDTfunctionn80tXs:(long long)arg1 complete:(CDUnknownBlockType)arg2;
- (void)GDTfunctiono9hEVU;
- (id)GDTfunctionq31kJP;
- (void)GDTfunctionr8U7IC:(id)arg1 status:(long long)arg2 retryTimes:(long long)arg3;
- (id)GDTfunctionu4VouP:(long long)arg1 fromDay:(long long)arg2 toDay:(long long)arg3;
- (id)GDTfunctionu6Oc1H:(long long)arg1;
- (void)GDTfunctionv6uIqx;
- (void)GDTfunctionw8ELMm:(id)arg1 complete:(CDUnknownBlockType)arg2;
- (void)GDTfunctionw8ELMm:(id)arg1 retryTimes:(long long)arg2 complete:(CDUnknownBlockType)arg3;
- (id)init;
- (void)initLi3VwMM;
@property(nonatomic) long long storedEventCount; // @synthesize storedEventCount=_storedEventCount;
@property(nonatomic) long long storedLogCount; // @synthesize storedLogCount=_storedLogCount;
@property(nonatomic) long long storedPerfCount; // @synthesize storedPerfCount=_storedPerfCount;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *task_queue; // @synthesize task_queue=_task_queue;

@end

