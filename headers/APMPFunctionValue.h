//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMPRuntimeValue.h"

@class APMPPropertyMap, APMPScope, NSArray, NSString;

@interface APMPFunctionValue : APMPRuntimeValue
{
    NSString *_functionName;
    NSArray *_parameters;
    NSArray *_statements;
    APMPScope *_definingScope;
    APMPPropertyMap *_propertyMap;
}

- (void).cxx_destruct;
- (id)allPropertyNames;
- (id)applyWithName:(id)arg1 arguments:(id)arg2 scope:(id)arg3 error:(id *)arg4;
- (_Bool)booleanValueOrError:(id *)arg1;
- (double)doubleValueOrError:(id *)arg1;
- (id)functionName;
- (_Bool)hasProperty:(id)arg1;
- (id)initWithFunctionName:(id)arg1 parameterNames:(id)arg2 statements:(id)arg3 definingScope:(id)arg4;
- (id)invokeWithArguments:(id)arg1 scope:(id)arg2 error:(id *)arg3;
- (id)invokeWithEvaluatedArguments:(id)arg1 error:(id *)arg2;
- (_Bool)isEqualToRuntimeValue:(id)arg1;
- (void)removeValueForProperty:(id)arg1;
- (void)setValue:(id)arg1 forProperty:(id)arg2;
- (id)stringValueOrError:(id *)arg1;
- (id)valueForProperty:(id)arg1;

@end

