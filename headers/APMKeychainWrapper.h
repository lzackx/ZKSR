//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface APMKeychainWrapper : NSObject
{
}

+ (void)deleteKeychainValueWithIdentifier:(id)arg1 appID:(id)arg2;
+ (_Bool)isMigrationNeededForIdentifier:(id)arg1 withAppID:(id)arg2;
+ (id)keychainDataWithIdentifier:(id)arg1 appID:(id)arg2;
+ (id)keychainValueWithIdentifier:(id)arg1 appID:(id)arg2;
+ (void)migrateKeychainDataToStringWithIdentifier:(id)arg1 withAppID:(id)arg2;
+ (id)searchDirectoryForIdentifier:(id)arg1 withAppID:(id)arg2;
+ (_Bool)upsertKeychainValue:(id)arg1 withIdentifier:(id)arg2 appID:(id)arg3;

@end

