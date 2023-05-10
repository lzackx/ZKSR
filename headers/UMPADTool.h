//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMPADTool : NSObject
{
}

+ (id)cacheImagePathWithType:(id)arg1;
+ (id)compareWithAnotherDay:(id)arg1;
+ (id)dealWithCacheStatisticsWithMsgid:(id)arg1;
+ (long long)differenceWithAnotherDay:(id)arg1;
+ (id)getNowDateStr;
+ (id)getTimeIntervalStr;
+ (_Bool)isValidWithStartTime:(id)arg1 ExpireTime:(id)arg2;
+ (id)md5String:(id)arg1;
+ (void)postCacheStatistics;
+ (id)readPlistFile:(id)arg1;
+ (id)readUserdefaultsByKey:(id)arg1;
+ (long long)readUserdefaultsIntegerByKey:(id)arg1;
+ (void)removeCacheImageWithType:(id)arg1;
+ (void)removeCacheImageWithURL:(id)arg1 type:(id)arg2;
+ (void)removePlistFile:(id)arg1;
+ (void)removeUserdefaultsByKey:(id)arg1;
+ (void)writePlistFile:(id)arg1 dictionary:(id)arg2;
+ (void)writeUserdefaultsByKey:(id)arg1 value:(id)arg2;
+ (void)writeUserdefaultsIntegerByKey:(id)arg1 value:(long long)arg2;

@end
