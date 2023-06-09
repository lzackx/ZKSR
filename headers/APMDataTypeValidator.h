//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMDataTypeValidator : NSObject
{
}

+ (_Bool)hasReservedPrefixes:(id)arg1;
+ (void)initialize;
+ (_Bool)isValidArrayParamForEvent:(id)arg1 withParamName:(id)arg2 withArrayCount:(unsigned long long)arg3 isNestedArrayParam:(_Bool)arg4 failureCode:(long long *)arg5;
+ (_Bool)isValidArrayParamItem:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidConditionalUserPropertyName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidConditionalUserPropertyOrigin:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidConditionalUserPropertyValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidCurrencyCode:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidForwardedEventOrigin:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalEventName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalEventOrigin:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalEventParameterName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalEventParameterValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalName:(id)arg1 maxLength:(long long)arg2 type:(long long)arg3 failureCode:(long long *)arg4;
+ (_Bool)isValidInternalUserAttributeName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidInternalUserAttributeValue:(id)arg1 name:(id)arg2 failureCode:(long long *)arg3;
+ (_Bool)isValidNumericValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidPublicEventName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidPublicEventParameterName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidPublicEventParameterValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidPublicName:(id)arg1 maxLength:(long long)arg2 type:(long long)arg3 failureCode:(long long *)arg4;
+ (_Bool)isValidPublicUserAttributeName:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidPublicUserAttributeValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidScreenParameterValue:(id)arg1 failureCode:(long long *)arg2;
+ (_Bool)isValidString:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3 type:(long long)arg4 failureCode:(long long *)arg5;
+ (_Bool)isValidValue:(id)arg1 minLength:(long long)arg2 maxLength:(long long)arg3 type:(long long)arg4 failureCode:(long long *)arg5;

@end

