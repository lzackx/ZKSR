//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface GADInitializationStatus : NSObject <NSCopying>
{
    NSDictionary *_adapterStatusesByClassName;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *adapterStatusesByClassName; // @synthesize adapterStatusesByClassName=_adapterStatusesByClassName;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithClassNames:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)statusWithEntry:(id)arg1 forKey:(id)arg2;

@end
