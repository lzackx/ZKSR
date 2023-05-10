//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AVAssetResourceLoaderDelegate-Protocol.h"
#import "GDTResourceLoaderDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol GDTResourceLoaderManagerDelegate, OS_dispatch_queue;

@interface GDTResourceLoaderManager : NSObject <GDTResourceLoaderDelegate, AVAssetResourceLoaderDelegate>
{
    id <GDTResourceLoaderManagerDelegate> _delegate;
    NSMutableDictionary *_loaders;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

+ (id)assetURLWithURL:(id)arg1;
- (void).cxx_destruct;
- (void)cleanCache;
@property(nonatomic) __weak id <GDTResourceLoaderManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
- (id)init;
- (id)keyForResourceLoaderWithURL:(id)arg1;
- (id)loaderForRequest:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *loaders; // @synthesize loaders=_loaders;
- (id)playerItemWithURL:(id)arg1;
- (void)resourceLoader:(id)arg1 didCancelLoadingRequest:(id)arg2;
- (void)resourceLoader:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (id)urlAssetWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
