//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUQueueManagerConfig, NSMapTable;

@interface BUQueueManager : NSObject
{
    BUQueueManagerConfig *_config;
    NSMapTable *_serialMapTable;
    NSMapTable *_concurrentMapTable;
}

+ (id)concurrentQueuePrefixLabel;
+ (id)serialQueuePrefixLabel;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)associateObject:(id)arg1 withConcurrentQueue:(id)arg2;
- (void)associateObject:(id)arg1 withSerialQueue:(id)arg2;
@property(retain, nonatomic) NSMapTable *concurrentMapTable; // @synthesize concurrentMapTable=_concurrentMapTable;
@property(retain, nonatomic) BUQueueManagerConfig *config; // @synthesize config=_config;
- (id)init;
@property(retain, nonatomic) NSMapTable *serialMapTable; // @synthesize serialMapTable=_serialMapTable;
- (void)updateConfig:(id)arg1;

@end
