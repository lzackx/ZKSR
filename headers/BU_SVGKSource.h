//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSInputStream, NSString;

@interface BU_SVGKSource : NSObject <NSCopying>
{
    NSString *svgLanguageVersion;
    NSInputStream *stream;
    unsigned long long _approximateLengthInBytesOr0;
    NSString *_keyForAppleDictionaries;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long approximateLengthInBytesOr0; // @synthesize approximateLengthInBytesOr0=_approximateLengthInBytesOr0;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initForCopying;
- (id)initWithInputSteam:(id)arg1;
@property(retain, nonatomic) NSString *keyForAppleDictionaries; // @synthesize keyForAppleDictionaries=_keyForAppleDictionaries;
@property(retain, nonatomic) NSInputStream *stream; // @synthesize stream;
@property(retain, nonatomic) NSString *svgLanguageVersion; // @synthesize svgLanguageVersion;
- (id)sourceFromRelativePath:(id)arg1;

@end

