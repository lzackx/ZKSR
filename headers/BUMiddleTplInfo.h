//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface BUMiddleTplInfo : NSObject <NSCoding>
{
    NSString *_middleTemplateDataUrl;
    NSString *_middleTemplateDataMd5;
    NSString *_middleTemplateDataId;
    NSString *_middleTemplateData;
    NSString *_middleTemplateDiffData;
    NSString *_middleVersion;
    NSString *_middle_dynamic_creative;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
@property(copy, nonatomic) NSString *middleTemplateData; // @synthesize middleTemplateData=_middleTemplateData;
@property(copy, nonatomic) NSString *middleTemplateDataId; // @synthesize middleTemplateDataId=_middleTemplateDataId;
@property(copy, nonatomic) NSString *middleTemplateDataMd5; // @synthesize middleTemplateDataMd5=_middleTemplateDataMd5;
@property(copy, nonatomic) NSString *middleTemplateDataUrl; // @synthesize middleTemplateDataUrl=_middleTemplateDataUrl;
@property(copy, nonatomic) NSString *middleTemplateDiffData; // @synthesize middleTemplateDiffData=_middleTemplateDiffData;
@property(copy, nonatomic) NSString *middleVersion; // @synthesize middleVersion=_middleVersion;
@property(copy, nonatomic) NSString *middle_dynamic_creative; // @synthesize middle_dynamic_creative=_middle_dynamic_creative;
- (void)setupDataWithDictionary:(id)arg1;

@end

