//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTSDKConfig : NSObject
{
}

+ (id)debugSetting;
+ (void)enableDefaultAudioSessionSetting:(_Bool)arg1;
+ (void)forbiddenIDFA:(_Bool)arg1;
+ (id)getBuyerId;
+ (void)processionForRegisterWithAppID:(id)arg1 SDKVersion:(id)arg2;
+ (_Bool)registerAppId:(id)arg1;
+ (id)sdkSrc;
+ (id)sdkVersion;
+ (void)setChannel:(long long)arg1;
+ (void)setDebugSetting:(id)arg1;
+ (void)setPersonalizedState:(long long)arg1;
+ (void)setSDKType:(long long)arg1;
+ (void)setSdkSrc:(id)arg1;

@end

