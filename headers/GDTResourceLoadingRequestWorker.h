//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTMediaDownloaderDelegate-Protocol.h"

@class AVAssetResourceLoadingRequest, GDTMediaDownloader, NSString;
@protocol GDTResourceLoadingRequestWorkerDelegate;

@interface GDTResourceLoadingRequestWorker : NSObject <GDTMediaDownloaderDelegate>
{
    id <GDTResourceLoadingRequestWorkerDelegate> _delegate;
    AVAssetResourceLoadingRequest *_request;
    GDTMediaDownloader *_mediaDownloader;
}

- (void).cxx_destruct;
- (void)cancel;
@property(nonatomic) __weak id <GDTResourceLoadingRequestWorkerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finish;
- (void)fullfillContentInfo;
- (id)initWithURL:(id)arg1 resourceLoadingRequest:(id)arg2;
- (id)loaderCancelledError;
@property(retain, nonatomic) GDTMediaDownloader *mediaDownloader; // @synthesize mediaDownloader=_mediaDownloader;
- (void)mediaDownloader:(id)arg1 didFinishedWithError:(id)arg2;
- (void)mediaDownloader:(id)arg1 didReceiveData:(id)arg2;
- (void)mediaDownloader:(id)arg1 didReceiveResponse:(id)arg2;
@property(retain, nonatomic) AVAssetResourceLoadingRequest *request; // @synthesize request=_request;
- (void)startWork;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

