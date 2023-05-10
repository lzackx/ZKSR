//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashModel.h"

@class NSString;

@interface HMDBUCrashHeaderInfo : HMDBUCrashModel
{
    int _crashType;
    int _mach_type;
    int _signum;
    int _sigcode;
    unsigned long long _faultAddr;
    double _crashTime;
    NSString *_typeStr;
    long long _mach_code;
    long long _mach_subcode;
    NSString *_name;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(nonatomic) double crashTime; // @synthesize crashTime=_crashTime;
@property(nonatomic) int crashType; // @synthesize crashType=_crashType;
@property(nonatomic) unsigned long long faultAddr; // @synthesize faultAddr=_faultAddr;
@property(nonatomic) long long mach_code; // @synthesize mach_code=_mach_code;
@property(nonatomic) long long mach_subcode; // @synthesize mach_subcode=_mach_subcode;
@property(nonatomic) int mach_type; // @synthesize mach_type=_mach_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(nonatomic) int sigcode; // @synthesize sigcode=_sigcode;
@property(nonatomic) int signum; // @synthesize signum=_signum;
@property(copy, nonatomic) NSString *typeStr; // @synthesize typeStr=_typeStr;
- (void)updateWithDictionary:(id)arg1;

@end

