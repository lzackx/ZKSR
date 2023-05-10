//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface BUAdFileCacheFactory : NSObject
{
    NSMutableDictionary *_cacheDictonary;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)_pbu_createCacheWithFileCacheType:(long long)arg1;
+ (void)clearAllCache;
+ (id)fileCacheWithFileCacheType:(long long)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cacheDictonary; // @synthesize cacheDictonary=_cacheDictonary;
- (id)init;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

@end

