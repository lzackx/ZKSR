//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_SDDiskCache-Protocol.h"

@class BU_SDImageCacheConfig, NSFileManager, NSString;

@interface BU_SDDiskCache : NSObject <BU_SDDiskCache>
{
    BU_SDImageCacheConfig *_config;
    NSString *_diskCachePath;
    NSFileManager *_fileManager;
}

- (void).cxx_destruct;
- (id)cachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)commonInit;
@property(readonly, nonatomic) BU_SDImageCacheConfig *config; // @synthesize config=_config;
- (_Bool)containsDataForKey:(id)arg1;
- (id)dataForKey:(id)arg1;
@property(copy, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)init;
- (id)initWithCachePath:(id)arg1 config:(id)arg2;
- (void)removeAllData;
- (void)removeDataForKey:(id)arg1;
- (void)removeExpiredData;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (unsigned long long)totalCount;
- (unsigned long long)totalSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

