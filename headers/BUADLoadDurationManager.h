//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;

@interface BUADLoadDurationManager : NSObject
{
    struct os_unfair_lock_s _weakCacheLock;
    int _weakCacheLock_deprecated;
    unsigned long long _APPActiveType;
    NSMapTable *_weakCache;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)ADLoadContextWithSlot:(id)arg1;
@property(readonly, nonatomic) unsigned long long APPActiveType; // @synthesize APPActiveType=_APPActiveType;
- (void)_applicationDidEnterBackground;
- (void)createADLoadContextWithSlot:(id)arg1;
- (id)init;
- (void)removeADLoadContextWithSlot:(id)arg1;
@property(retain, nonatomic) NSMapTable *weakCache; // @synthesize weakCache=_weakCache;
- (void)startTrackAPPActiveType;
- (void)stopTrackAPPActiveType;

@end

