//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString, NSTextCheckingResult;

@interface TTTAttributedLabelLink : NSObject <NSCoding>
{
    NSTextCheckingResult *_result;
    NSDictionary *_attributes;
    NSDictionary *_activeAttributes;
    NSDictionary *_inactiveAttributes;
    NSString *_accessibilityValue;
    CDUnknownBlockType _linkTapBlock;
    CDUnknownBlockType _linkLongPressBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessibilityValue; // @synthesize accessibilityValue=_accessibilityValue;
@property(readonly, copy, nonatomic) NSDictionary *activeAttributes; // @synthesize activeAttributes=_activeAttributes;
@property(readonly, copy, nonatomic) NSDictionary *attributes; // @synthesize attributes=_attributes;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *inactiveAttributes; // @synthesize inactiveAttributes=_inactiveAttributes;
- (id)initWithAttributes:(id)arg1 activeAttributes:(id)arg2 inactiveAttributes:(id)arg3 textCheckingResult:(id)arg4;
- (id)initWithAttributesFromLabel:(id)arg1 textCheckingResult:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType linkLongPressBlock; // @synthesize linkLongPressBlock=_linkLongPressBlock;
@property(copy, nonatomic) CDUnknownBlockType linkTapBlock; // @synthesize linkTapBlock=_linkTapBlock;
@property(readonly, nonatomic) NSTextCheckingResult *result; // @synthesize result=_result;

@end

