//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GDTAdFrequencyCheckManager : NSObject
{
    NSMutableDictionary *adLoadRecord;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)defaultManager;
+ (id)sharedGDTAdFrequencyCheckManager;
- (void).cxx_destruct;
- (void)GDTfunctioni32UuJ:(id)arg1 illegalType:(unsigned long long)arg2;
- (_Bool)GDTfunctionj7A88v:(long long)arg1 placementId:(id)arg2;
- (_Bool)GDTfunctionq7Qm9I:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

