//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface SDImageCachesManagerOperation : NSOperation
{
    NSObject<OS_dispatch_semaphore> *_pendingCountLock;
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    unsigned long long _pendingCount;
}

- (void).cxx_destruct;
- (void)beginWithTotalCount:(unsigned long long)arg1;
- (void)cancel;
- (void)completeOne;
- (void)done;
- (id)init;
- (_Bool)isCancelled;
- (_Bool)isExecuting;
- (_Bool)isFinished;
@property(readonly, nonatomic) unsigned long long pendingCount; // @synthesize pendingCount=_pendingCount;
- (void)reset;
- (void)setCancelled:(_Bool)arg1;
- (void)setExecuting:(_Bool)arg1;
- (void)setFinished:(_Bool)arg1;

@end

