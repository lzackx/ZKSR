//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashAddressAnalysis.h"

@interface HMDBUCrashStackAnalysis : HMDBUCrashAddressAnalysis
{
    unsigned long long _stack_address;
}

- (id)postDict;
@property(nonatomic) unsigned long long stack_address; // @synthesize stack_address=_stack_address;
- (void)updateWithDictionary:(id)arg1;

@end
