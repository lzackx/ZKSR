//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTWXOpenSDKFacade : NSObject
{
}

+ (id)capitalizedFirstWords:(id)arg1;
+ (_Bool)hasOpenSDK;
+ (_Bool)isWXAppSupported;
+ (long long)isWechatCanvasSupported:(long long)arg1;
+ (void)launchMiniProgram:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)launchWechatCanvasWithExtInfo:(id)arg1 completion:(CDUnknownBlockType)arg2 invokeError:(CDUnknownBlockType)arg3;
+ (id)openSDKVersion;
+ (_Bool)registerWXAppID:(id)arg1;
+ (_Bool)registerWXAppID:(id)arg1 universalLink:(id)arg2;
+ (id)setValueObject:(id)arg1 withDictionary:(id)arg2;
+ (void)shareToTimeline:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end
