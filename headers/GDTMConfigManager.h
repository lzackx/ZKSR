//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTMAppConfigModel;

@interface GDTMConfigManager : NSObject
{
    GDTMAppConfigModel *_configModel;
    long long _lastUpdatedTime;
    long long _failedTimes;
    long long _retryTimes;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)GDTfunctionl0tpZj;
- (void)GDTfunctiont2z789;
- (void)GDTfunctionz4w74e;
- (void)GDTfunctionz9xRde;
@property(retain, nonatomic) GDTMAppConfigModel *configModel; // @synthesize configModel=_configModel;
@property(nonatomic) long long failedTimes; // @synthesize failedTimes=_failedTimes;
- (id)init;
@property(nonatomic) long long lastUpdatedTime; // @synthesize lastUpdatedTime=_lastUpdatedTime;
@property(nonatomic) long long retryTimes; // @synthesize retryTimes=_retryTimes;

@end
