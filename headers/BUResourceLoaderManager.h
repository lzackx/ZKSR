//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "BUResourceLoaderDelegate-Protocol.h"

@class AVPlayerItem, NSMutableDictionary, NSString, NSURL;

@interface BUResourceLoaderManager : NSObject <BUResourceLoaderDelegate, AVAssetResourceLoaderDelegate>
{
    struct _opaque_pthread_mutexattr_t _shared_mutexattr_t;
    struct _opaque_pthread_mutex_t _lock;
    AVPlayerItem *_playItem;
    NSURL *_videoURL;
    NSMutableDictionary *_loaders;
}

+ (id)assetURLWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithVideoURL:(id)arg1;
- (id)keyForResourceLoaderWithURL:(id)arg1;
- (id)loaderForRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *loaders; // @synthesize loaders=_loaders;
@property(readonly, nonatomic) AVPlayerItem *playItem; // @synthesize playItem=_playItem;
- (id)playerItemWithURL:(id)arg1;
- (void)removeDiskCacheResource:(id)arg1;
- (void)removeResourceLoaderWithURL:(id)arg1;
- (void)requestCancel;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)resourceLoaderDidLoad:(id)arg1 url:(id)arg2 error:(id)arg3;
@property(readonly, nonatomic) NSURL *videoURL; // @synthesize videoURL=_videoURL;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

