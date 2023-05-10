//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface EBAppLogRegisterEngine : NSObject
{
    _Bool _needRegister;
    _Bool _hasObserveNetworkChange;
    _Bool _isRegistering;
    _Bool _needActiveUser;
    NSString *_deviceID;
    NSString *_installID;
    NSString *_ssID;
    CDUnknownBlockType _registerFinishBlock;
    NSObject<OS_dispatch_queue> *_registerQueue;
    unsigned long long _bgTask;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addActivateTask;
- (_Bool)addNetworkObserver;
@property(nonatomic) unsigned long long bgTask; // @synthesize bgTask=_bgTask;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
@property(copy) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)deviceIDKey;
- (void)didEnterBackground:(id)arg1;
- (void)handleRegisterResponse:(id)arg1 maxRetryTimes:(long long)arg2;
@property _Bool hasObserveNetworkChange; // @synthesize hasObserveNetworkChange=_hasObserveNetworkChange;
- (_Bool)hasRegistered;
- (id)init;
@property(copy) NSString *installID; // @synthesize installID=_installID;
- (id)installIDKey;
- (void)invalidBgTaskIfNeeded;
@property _Bool isRegistering; // @synthesize isRegistering=_isRegistering;
- (void)loadAllID;
@property(nonatomic) _Bool needActiveUser; // @synthesize needActiveUser=_needActiveUser;
@property(nonatomic) _Bool needRegister; // @synthesize needRegister=_needRegister;
- (void)registerDeviceInternal:(long long)arg1;
- (void)registerDeviceWithRetryTimes:(long long)arg1;
@property(copy) CDUnknownBlockType registerFinishBlock; // @synthesize registerFinishBlock=_registerFinishBlock;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *registerQueue; // @synthesize registerQueue=_registerQueue;
- (void)saveAllID;
@property(copy) NSString *ssID; // @synthesize ssID=_ssID;
- (id)ssIDKey;
- (void)willEnterForeground;

@end
