//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMPRuntimeValue.h"

@class APMPPropertyMap, NSMutableArray;

@interface APMPArrayValue : APMPRuntimeValue
{
    APMPPropertyMap *_propertyMap;
    NSMutableArray *_elements;
}

+ (id)emptyValue;
- (void).cxx_destruct;
- (id)allElements;
- (id)allPropertyNames;
- (long long)appendElements:(id)arg1;
- (id)applyWithName:(id)arg1 arguments:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (_Bool)booleanValueOrError:(id *)arg1;
- (void)concat:(id)arg1 error:(id *)arg2;
- (long long)count;
- (double)doubleValueOrError:(id *)arg1;
- (_Bool)hasProperty:(id)arg1 error:(id *)arg2;
- (long long)indexOfValue:(id)arg1 fromIndex:(long long)arg2 error:(id *)arg3;
- (id)init;
- (id)initWithArray:(id)arg1;
- (_Bool)isEqualToRuntimeValue:(id)arg1;
- (long long)lastIndexOfValue:(id)arg1 fromIndex:(long long)arg2 error:(id *)arg3;
- (long long)prependElements:(id)arg1;
- (id)removeFirstElement;
- (id)removeLastElement;
- (void)removeValueForProperty:(id)arg1 error:(id *)arg2;
- (void)reverse;
- (void)setLength:(unsigned long long)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2 error:(id *)arg3;
- (void)sortUsingFunctionValue:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (id)spliceFrom:(long long)arg1 deleteCount:(long long)arg2 addValues:(id)arg3;
- (id)stringValueOrError:(id *)arg1;
- (id)stringValueWithSeparator:(id)arg1 error:(id *)arg2;
- (id)subarrayWithRange:(struct _NSRange)arg1;
- (id)valueForProperty:(id)arg1 error:(id *)arg2;

@end
