//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADQueryInfo, NSDictionary, NSString;

@interface GADAdInfo : NSObject
{
    GADQueryInfo *_queryInfo;
    NSDictionary *_queryDictionary;
    NSString *_adString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAdString:(id)arg1;
- (id)initWithQueryInfo:(id)arg1 adString:(id)arg2;
@property(readonly, copy, nonatomic) NSDictionary *queryDictionary; // @synthesize queryDictionary=_queryDictionary;
@property(readonly, copy, nonatomic) GADQueryInfo *queryInfo; // @synthesize queryInfo=_queryInfo;

@end

