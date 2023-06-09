//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class APMEClient, NSError, NSObject;
@protocol OS_dispatch_queue;

@protocol APMEExperimentObserverDelegate <NSObject>

@optional
- (void)client:(APMEClient *)arg1 didReceiveFetchError:(NSError *)arg2;
- (void)clientDidReceiveNewSnapshot:(APMEClient *)arg1;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
- (_Bool)shouldFetchExperimentsForClient:(APMEClient *)arg1;
@end

