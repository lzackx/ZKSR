//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdRenderingMetadata, NSArray;

@interface GADAdRenderResult : NSObject
{
    NSArray *_ads;
    NSArray *_errors;
    GADAdRenderingMetadata *_metadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *ads; // @synthesize ads=_ads;
@property(retain, nonatomic) NSArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) long long exitStatus;
@property(retain, nonatomic) GADAdRenderingMetadata *metadata; // @synthesize metadata=_metadata;

@end
