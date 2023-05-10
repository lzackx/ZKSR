//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUPersistenceProtocol-Protocol.h"

@class BUPersistenceOption, NSString;
@protocol BUPersistenceProtocol;

@interface BUDiskCache : NSObject <BUPersistenceProtocol>
{
    BUPersistenceOption *_option;
    id <BUPersistenceProtocol> _storage;
    NSString *_diskCacheDirectory;
}

+ (id)cachePath;
+ (void)removeDiskCache;
- (void).cxx_destruct;
- (id)allObjects;
@property(copy, nonatomic) NSString *diskCacheDirectory; // @synthesize diskCacheDirectory=_diskCacheDirectory;
- (_Bool)hasObjectForKey:(id)arg1;
- (void)initDirectory;
- (void)initStorage:(id)arg1;
- (id)initWithName:(id)arg1 option:(id)arg2;
- (id)objectForKey:(id)arg1;
- (id)objectsForKeys:(id)arg1;
@property(retain, nonatomic) BUPersistenceOption *option; // @synthesize option=_option;
- (_Bool)removeAll;
- (_Bool)removeObjectsForKeys:(id)arg1;
- (_Bool)save;
- (void)setCustomStorage:(id)arg1;
- (_Bool)setObject:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) id <BUPersistenceProtocol> storage; // @synthesize storage=_storage;
- (id)storageWithName:(id)arg1 type:(unsigned long long)arg2;
- (void)updateObjectsForKeys:(id)arg1 WithBlock:(CDUnknownBlockType)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

