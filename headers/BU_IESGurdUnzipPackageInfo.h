//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError;

@interface BU_IESGurdUnzipPackageInfo : NSObject
{
    _Bool _successful;
    NSError *_error;
    long long _unzipDuration;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic, getter=isSuccessful) _Bool successful; // @synthesize successful=_successful;
@property(nonatomic) long long unzipDuration; // @synthesize unzipDuration=_unzipDuration;

@end

