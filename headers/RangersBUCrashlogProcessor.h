//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HMDBUCrashlogProcessor.h"

@class NSDictionary;

@interface RangersBUCrashlogProcessor : HMDBUCrashlogProcessor
{
    unsigned long long _crashStartLine;
    unsigned long long _crashEndLine;
    NSDictionary *_reportApps;
}

- (void).cxx_destruct;
- (id)getCrashThread:(id)arg1;
- (id)parseDynamicInfo:(id)arg1;
@property(copy, nonatomic) NSDictionary *reportApps; // @synthesize reportApps=_reportApps;
- (_Bool)shouldIgnorCrashInfo:(id)arg1;

@end
