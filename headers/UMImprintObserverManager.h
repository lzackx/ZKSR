//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UMImprintObserverManager : NSObject
{
    NSMutableDictionary *_obDic;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (_Bool)doExistImprintObserver;
- (void)doProcessImprintKey:(id)arg1 newImprintValue:(id)arg2 oldImprintValue:(id)arg3;
- (_Bool)doRegisterImprintKey:(id)arg1 withDelegate:(id)arg2;
- (_Bool)doUnregisterImprintKey:(id)arg1 withDelegate:(id)arg2;
- (_Bool)existImprintObserver;
- (_Bool)existObserver:(id)arg1 inArray:(id)arg2;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *obDic; // @synthesize obDic=_obDic;
- (void)processImprintKey:(id)arg1 newImprintValue:(id)arg2 oldImprintValue:(id)arg3;
- (_Bool)registerImprintKey:(id)arg1 withDelegate:(id)arg2;
- (_Bool)unregisterImprintKey:(id)arg1 withDelegate:(id)arg2;

@end

