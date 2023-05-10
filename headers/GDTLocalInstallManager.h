//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface GDTLocalInstallManager : NSObject
{
}

+ (void)adaptorForOldVersionDLSuccInfo:(id)arg1 deeplink:(id)arg2 packageName:(id)arg3;
+ (void)clearLocalDLCache;
+ (void)deleteDLAppInfoWithUlink:(id)arg1 deeplink:(id)arg2 success:(_Bool)arg3;
+ (void)deleteLocalInsInfoIfNeeded:(id)arg1 targetUrlInfo:(id)arg2 success:(_Bool)arg3;
+ (id)getDeepLinkInfo:(id)arg1;
+ (_Bool)hitLocalDLAppInfo:(id)arg1 deeplink:(id)arg2 packageName:(id)arg3 hasInst:(_Bool)arg4;
+ (_Bool)hitLocalDLWithPackageName:(id)arg1 hasInst:(_Bool)arg2;
+ (id)loadLocalAppInfoStringWithKey:(id)arg1;
+ (id)loadLocalDLFailedString;
+ (id)loadLocalDLSuccessString;
+ (void)saveDLAppInfoWithUlink:(id)arg1 deeplink:(id)arg2 packageName:(id)arg3 success:(_Bool)arg4;
+ (void)saveLocalAppInfoStringWithKey:(id)arg1 localInfoString:(id)arg2;
+ (void)saveLocalDLFailedString:(id)arg1;
+ (void)saveLocalDLSuccessString:(id)arg1;
+ (void)updateDLSuccInfoIfNeeded:(id)arg1 targetUrlInfo:(id)arg2 packageName:(id)arg3;

@end
