//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBAppLog : NSObject
{
}

+ (void)activeUser;
+ (id)delegate;
+ (id)deviceID;
+ (_Bool)eventV3:(id)arg1 params:(id)arg2;
+ (id)installID;
+ (id)sdkVersion;
+ (void)setAppLauguage:(id)arg1;
+ (void)setAppRegion:(id)arg1;
+ (void)setCurrentUserUniqueID:(id)arg1;
+ (void)setCustomHeaderBlock:(CDUnknownBlockType)arg1;
+ (void)setDelegate:(id)arg1;
+ (void)setRegisterFinishBlock:(CDUnknownBlockType)arg1;
+ (void)setServiceVendor:(long long)arg1;
+ (void)setUserAgent:(id)arg1;
+ (id)ssID;
+ (void)startFetchTrackerConfiguration;
+ (void)startTrackWithConfig:(id)arg1;
- (id)init;

@end
