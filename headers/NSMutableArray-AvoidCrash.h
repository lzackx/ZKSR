//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

#import "AvoidCrashProtocol-Protocol.h"

@class NSString;

@interface NSMutableArray (AvoidCrash) <AvoidCrashProtocol>
+ (void)avoidCrashExchangeMethod;
- (id)GDTfunctionk6x6eZ;
- (void)avoidCrashGetObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (void)avoidCrashInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)avoidCrashObjectAtIndex:(unsigned long long)arg1;
- (id)avoidCrashObjectAtIndexedSubscript:(unsigned long long)arg1;
- (void)avoidCrashRemoveObjectAtIndex:(unsigned long long)arg1;
- (void)avoidCrashSetObject:(id)arg1 atIndexedSubscript:(unsigned long long)arg2;
- (id)bu_objectAtIndexSafely:(unsigned long long)arg1;
- (void)bu_removeObjectAtIndexSafely:(unsigned long long)arg1;
- (void)bu_safeAddNilObject;
- (void)bu_safeAddObject:(id)arg1;
- (void)bu_safeInsertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)bu_safeInsertObjects:(id)arg1 atIndexes:(id)arg2;
- (void)bu_safeRemoveObject:(id)arg1;
- (void)hmdbu_addObject:(id)arg1;
- (void)hmdbu_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)hmdbu_removeObjectAtIndex:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

