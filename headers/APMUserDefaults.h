//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMConfigStore-Protocol.h"

@class NSString, NSUserDefaults;

@interface APMUserDefaults : NSObject <APMConfigStore>
{
    NSString *_suiteName;
    NSString *_appNameRef;
    NSUserDefaults *_userDefaults;
    _Bool _useCFPreferencesLibrary;
    _Bool _isPreferenceFileExcluded;
}

+ (id)standardUserDefaults;
+ (_Bool)userPreferenceEnabled;
- (void).cxx_destruct;
- (id)arrayForKey:(id)arg1;
- (_Bool)boolForKey:(id)arg1;
- (void)clearAllData;
- (id)dictionaryForKey:(id)arg1;
- (double)doubleForKey:(id)arg1;
- (float)floatForKey:(id)arg1;
- (id)init;
- (id)initWithSuiteName:(id)arg1;
- (long long)integerForKey:(id)arg1;
@property _Bool isPreferenceFileExcluded; // @synthesize isPreferenceFileExcluded=_isPreferenceFileExcluded;
- (id)objectForKey:(id)arg1;
- (void)removeObjectForKey:(id)arg1;
- (void)setBool:(_Bool)arg1 forKey:(id)arg2;
- (void)setDouble:(double)arg1 forKey:(id)arg2;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
@property(nonatomic) _Bool useCFPreferencesLibrary; // @synthesize useCFPreferencesLibrary=_useCFPreferencesLibrary;
- (id)stringForKey:(id)arg1;
- (void)synchronize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

