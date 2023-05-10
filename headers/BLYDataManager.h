//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface BLYDataManager : NSObject
{
    NSObject<OS_dispatch_queue> *_keyValueQueue;
    NSObject<OS_dispatch_queue> *_keyValueSubscriptionQueue;
    NSMutableDictionary *_keyValueCache;
    NSMutableDictionary *_keyValueStorage;
    NSMutableArray *_kvoModels;
    NSOperationQueue *_fileQueue;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)addSubscriber:(id)arg1 forKey:(id)arg2;
- (id)allCrashFileURL;
- (id)allFileURLWithPriority:(long long)arg1;
- (id)allFilesExceptCrash;
- (void)batchFetch:(id)arg1;
- (void)batchSave:(id)arg1 persistence:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (id)buglyRootFilePath;
- (void)clearKeyValueCache;
- (void)clearKeyValueStorage;
- (id)crashLogDirectoryPath;
- (void)createApplicationSupportDirectoryIfNeeded;
- (void)createFolderAtPathIfNeeded:(id)arg1;
- (id)dataAtPath:(id)arg1;
- (void)deleteAllCrashFiles;
- (void)deleteAllFilesExceptCrash;
- (void)deleteFileAtPath:(id)arg1;
- (void)deleteFileWithKey:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)errorWithDescription:(id)arg1;
- (id)fetchObjFromFileWithFileName:(id)arg1 persistenceType:(long long)arg2;
- (void)fetchObjFromFileWithFileName:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)fetchObjWithKey:(id)arg1 persistenceType:(long long)arg2;
- (void)fetchObjWithKey:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (id)fetchStringForKey:(id)arg1;
- (id)fetchValueForKey:(id)arg1;
- (void)fetchValueForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fileNameForPersitenceType:(long long)arg1;
@property(retain) NSOperationQueue *fileQueue; // @synthesize fileQueue=_fileQueue;
- (id)folderPathForPersistenceType:(long long)arg1;
- (id)init;
- (_Bool)isKeySubscriped:(id)arg1;
- (_Bool)isSubscriber:(id)arg1 existForKey:(id)arg2;
@property(retain) NSMutableDictionary *keyValueCache; // @synthesize keyValueCache=_keyValueCache;
@property(retain) NSObject<OS_dispatch_queue> *keyValueQueue; // @synthesize keyValueQueue=_keyValueQueue;
@property(retain) NSMutableDictionary *keyValueStorage; // @synthesize keyValueStorage=_keyValueStorage;
@property(retain) NSObject<OS_dispatch_queue> *keyValueSubscriptionQueue; // @synthesize keyValueSubscriptionQueue=_keyValueSubscriptionQueue;
- (id)kvoModelForKey:(id)arg1;
@property(retain) NSMutableArray *kvoModels; // @synthesize kvoModels=_kvoModels;
- (void)notifySubscribersForValue:(id)arg1 changedForKey:(id)arg2;
- (void)persistData:(id)arg1 ofType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)persistObj:(id)arg1 persistenceType:(long long)arg2 enableNotifications:(_Bool)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)persistValue:(id)arg1 forKey:(id)arg2;
- (void)removeOldFolder;
- (_Bool)removeSubscriber:(id)arg1 forKey:(id)arg2;
- (void)saveValue:(id)arg1 forKey:(id)arg2;
- (void)saveValue:(id)arg1 forKey:(id)arg2 persistence:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (id)savedKeyValueStorage;
- (void)sendDataSavedNotificationSuccess:(_Bool)arg1;

@end

