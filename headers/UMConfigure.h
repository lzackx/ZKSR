//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UMConfigure : NSObject
{
}

+ (id)deviceIDForIntegration;
+ (void)endUMBackgroundTask;
+ (id)getUmengZID;
+ (void)initWithAppkey:(id)arg1 channel:(id)arg2;
+ (void)load;
+ (void)setAnalyticsEnabled:(_Bool)arg1;
+ (void)setEncryptEnabled:(_Bool)arg1;
+ (void)setLogEnabled:(_Bool)arg1;
+ (_Bool)setWraperType:(id)arg1 wrapperVersion:(id)arg2;
+ (id)umidString;

@end

