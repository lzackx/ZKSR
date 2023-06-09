//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_semaphore;

@interface BUObserverProxy : NSObject
{
    id _observer;
    id _observeredObj;
    NSMutableSet *_keypaths;
    NSObject<OS_dispatch_semaphore> *_semaphoreForKeyPath;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithObserver:(id)arg1 observeredObj:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)proxy_addKeyPath:(id)arg1 options:(unsigned long long)arg2 context:(void *)arg3;
- (void)proxy_removeObersersWhenObserveredObjectDealloc:(id)arg1;
- (void)proxy_removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void *)arg3;
- (void)removeSelfOberseringWhenSelfDealloc;
- (void)removeSelfObserveringInfoWithObserveredObject:(id)arg1;

@end

