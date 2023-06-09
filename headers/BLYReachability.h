//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BLYReachability : BLYAbstractModule
{
    _Bool _didInited;
    unsigned int _flags;
    struct __SCNetworkReachability *_networkReachability;
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSMutableArray *_listenersArray;
}

+ (unsigned long long)_reachabilityStateForFlags:(unsigned int)arg1;
+ (id)constructSelector;
+ (id)sharedReachability;
- (void).cxx_destruct;
- (void)_notifyAllListeners;
- (void)_startMonitoringReachabilityWithURL:(id)arg1;
- (void)addSubscriber:(id)arg1;
@property(readonly, nonatomic) unsigned long long currentState;
- (void)dealloc;
@property(nonatomic) _Bool didInited; // @synthesize didInited=_didInited;
- (_Bool)disableModule;
- (_Bool)enableModule;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
- (id)initWithURL:(id)arg1;
@property(retain, nonatomic) NSMutableArray *listenersArray; // @synthesize listenersArray=_listenersArray;
@property(nonatomic) struct __SCNetworkReachability *networkReachability; // @synthesize networkReachability=_networkReachability;
- (void)removeAllSubscribers;
- (void)removeSubscriber:(id)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *synchronizationQueue; // @synthesize synchronizationQueue=_synchronizationQueue;

@end

