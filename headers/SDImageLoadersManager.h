//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDImageLoader-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface SDImageLoadersManager : NSObject <SDImageLoader>
{
    NSMutableArray *_imageLoaders;
    NSObject<OS_dispatch_semaphore> *_loadersLock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)addLoader:(id)arg1;
- (_Bool)canRequestImageForURL:(id)arg1;
- (id)init;
@property(copy, nonatomic) NSArray *loaders;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *loadersLock; // @synthesize loadersLock=_loadersLock;
- (void)removeLoader:(id)arg1;
- (id)requestImageWithURL:(id)arg1 options:(unsigned long long)arg2 context:(id)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
- (_Bool)shouldBlockFailedURLWithURL:(id)arg1 error:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

