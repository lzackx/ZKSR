//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APMPRuntimeValue.h"

@interface APMPBooleanValue : APMPRuntimeValue
{
    _Bool _value;
}

+ (id)booleanValueWithBool:(_Bool)arg1;
- (_Bool)booleanValueOrError:(id *)arg1;
- (double)doubleValueOrError:(id *)arg1;
- (id)initWithBoolean:(_Bool)arg1;
- (_Bool)isEqualToRuntimeValue:(id)arg1;
- (id)stringValueOrError:(id *)arg1;

@end

