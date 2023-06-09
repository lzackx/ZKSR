//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDownloadDelegate-Protocol.h"

@class NSString;

@interface UMPDownloadManager : NSObject <NSURLSessionDownloadDelegate>
{
}

+ (void)addItemToPlistByKey:(id)arg1 state:(id)arg2;
+ (id)cacheImagePath;
+ (void)checkDirectory:(id)arg1;
+ (void)createBaseDirectoryAtPath:(id)arg1;
+ (id)getImageByUrl:(id)arg1;
+ (id)getItemFromPlistByKey:(id)arg1;
+ (_Bool)isExistByImageUrl:(id)arg1;
+ (id)md5:(id)arg1;
+ (void)removExpireImageWithUrlArray:(id)arg1;
+ (void)removeImageWithUrl:(id)arg1;
+ (void)removeImageWithUrlArray:(id)arg1;
+ (void)removeItemFromPlistByKey:(id)arg1;
+ (void)setRevokeStateWithAllImage;
+ (void)setRevokeStateWithImageUrl:(id)arg1;
+ (void)setUsedStateWithImageUrl:(id)arg1;
+ (void)startDownloadImageWithUrl:(id)arg1;
+ (void)startDownloadImageWithUrlArray:(id)arg1;
+ (void)updateItemToPlistByKey:(id)arg1 state:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

