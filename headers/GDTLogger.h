//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTLogger : NSObject
{
}

+ (void)GDTfunctiong4cThM:(long long)arg1;
+ (void)GDTfunctiong4cThM:(long long)arg1 enumCode:(long long)arg2 adModel:(id)arg3 ext:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 enumCode:(long long)arg2 ext:(id)arg3 adModel:(id)arg4 point:(struct CGPoint)arg5;
+ (void)GDTfunctiong4cThM:(long long)arg1 enumCode:(long long)arg2 ext:(id)arg3 biz:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 enumCode:(long long)arg2 ext:(id)arg3 placementId:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 enumCode:(long long)arg2 ext:(id)arg3 placementId:(id)arg4 aId:(id)arg5 traceId:(id)arg6;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 adModel:(id)arg3 ext:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 enumCode:(long long)arg3 adModel:(id)arg4 ext:(id)arg5;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 enumCode:(long long)arg3 ext:(id)arg4 biz:(id)arg5 isDirectEvent:(_Bool)arg6;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 ext:(id)arg3;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 ext:(id)arg3 biz:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 ext:(id)arg3 placementId:(id)arg4;
+ (void)GDTfunctiong4cThM:(long long)arg1 errorCode:(long long)arg2 ext:(id)arg3 placementId:(id)arg4 aId:(id)arg5 traceId:(id)arg6;
+ (void)GDTfunctioni9xP9G:(id)arg1;
+ (id)businessInfoDictionaryWithAdModel:(id)arg1;
+ (void)onDidApplicationBecomeActive;
+ (void)onWillApplicationEnterBackground;
+ (void)recordDirectEventId:(long long)arg1 errorCode:(long long)arg2 enumCode:(long long)arg3 adModel:(id)arg4 ext:(id)arg5;
+ (void)recordPerformanceLog:(long long)arg1 resourceSize:(unsigned long long)arg2 duration:(unsigned long long)arg3 ext:(id)arg4;
+ (void)recordPerformanceLog:(long long)arg1 resourceSize:(unsigned long long)arg2 duration:(unsigned long long)arg3 ext:(id)arg4 adModel:(id)arg5;
+ (void)recordPerformanceLog:(long long)arg1 resourceSize:(unsigned long long)arg2 duration:(unsigned long long)arg3 ext:(id)arg4 biz:(id)arg5;
+ (void)recordPerformanceLog:(long long)arg1 resourceSize:(unsigned long long)arg2 duration:(unsigned long long)arg3 ext:(id)arg4 placementId:(id)arg5 aId:(id)arg6 traceId:(id)arg7;
+ (void)registerEvent;

@end
