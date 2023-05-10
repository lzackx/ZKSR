//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface UMHelper : NSObject
{
    _Bool _logEnabled;
    NSMutableDictionary *moduleTag;
    NSMutableDictionary *moduleVer;
    struct dispatch_semaphore_s *_umsema;
    struct dispatch_semaphore_s *_umsemasl;
}

+ (unsigned long long)UTCTimeIntervalMS;
+ (id)appVersionString;
+ (id)arrayToAgStr:(id)arg1;
+ (_Bool)checkIsOverseas;
+ (_Bool)checkU48Character:(id)arg1;
+ (_Bool)defconPass;
+ (id)dplusEventsPath;
+ (id)dplusPreFilePath;
+ (id)dplusSuperFilePath;
+ (double)elapsedTimeFromLastPost:(id)arg1;
+ (double)elapsedTimeFromPost;
+ (int)getAppState;
+ (_Bool)isCheckVersion:(id)arg1;
+ (_Bool)isDebugging;
+ (_Bool)isOverSeas;
+ (id)preVersions:(id)arg1;
+ (id)sdkVersionString;
+ (id)sharedInstance;
+ (id)trimUTF8String:(id)arg1 toByteLen:(long long)arg2;
- (void).cxx_destruct;
- (id)init;
@property _Bool logEnabled; // @synthesize logEnabled=_logEnabled;
@property(retain) NSMutableDictionary *moduleTag; // @synthesize moduleTag;
@property(retain) NSMutableDictionary *moduleVer; // @synthesize moduleVer;
@property(nonatomic) struct dispatch_semaphore_s *umsema; // @synthesize umsema=_umsema;
@property(nonatomic) struct dispatch_semaphore_s *umsemasl; // @synthesize umsemasl=_umsemasl;

@end

