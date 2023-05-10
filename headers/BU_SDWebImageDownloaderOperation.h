//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "SDWebImageDownloaderOperation-Protocol.h"

@class NSData, NSDictionary, NSError, NSMutableArray, NSMutableData, NSObject, NSString, NSURLCredential, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionTask;
@protocol OS_dispatch_queue;

@interface BU_SDWebImageDownloaderOperation : NSOperation <SDWebImageDownloaderOperation>
{
    _Bool _executing;
    _Bool _finished;
    NSURLRequest *_request;
    NSURLResponse *_response;
    NSURLSessionTask *_dataTask;
    NSURLCredential *_credential;
    double _minimumProgressInterval;
    unsigned long long _options;
    NSDictionary *_context;
    NSMutableArray *_callbackBlocks;
    NSMutableData *_imageData;
    NSData *_cachedData;
    unsigned long long _expectedSize;
    unsigned long long _receivedSize;
    NSError *_responseError;
    double _previousProgress;
    NSURLSession *_unownedSession;
    NSURLSession *_ownedSession;
    NSObject<OS_dispatch_queue> *_coderQueue;
    unsigned long long _backgroundTaskId;
}

+ (unsigned long long)imageOptionsFromDownloaderOptions:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)addHandlersForProgress:(CDUnknownBlockType)arg1 completed:(CDUnknownBlockType)arg2;
@property(nonatomic) unsigned long long backgroundTaskId; // @synthesize backgroundTaskId=_backgroundTaskId;
@property(copy, nonatomic) NSData *cachedData; // @synthesize cachedData=_cachedData;
- (void)callCompletionBlocksWithError:(id)arg1;
- (void)callCompletionBlocksWithImage:(id)arg1 imageData:(id)arg2 error:(id)arg3 finished:(_Bool)arg4;
@property(retain, nonatomic) NSMutableArray *callbackBlocks; // @synthesize callbackBlocks=_callbackBlocks;
- (id)callbacksForKey:(id)arg1;
- (void)cancel;
- (_Bool)cancel:(id)arg1;
- (void)cancelInternal;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *coderQueue; // @synthesize coderQueue=_coderQueue;
@property(copy, nonatomic) NSDictionary *context; // @synthesize context=_context;
@property(retain, nonatomic) NSURLCredential *credential; // @synthesize credential=_credential;
@property(retain, nonatomic) NSURLSessionTask *dataTask; // @synthesize dataTask=_dataTask;
- (void)done;
@property(nonatomic) unsigned long long expectedSize; // @synthesize expectedSize=_expectedSize;
@property(retain, nonatomic) NSMutableData *imageData; // @synthesize imageData=_imageData;
- (id)init;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3;
- (id)initWithRequest:(id)arg1 inSession:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4;
- (_Bool)isConcurrent;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) double minimumProgressInterval; // @synthesize minimumProgressInterval=_minimumProgressInterval;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
@property(retain, nonatomic) NSURLSession *ownedSession; // @synthesize ownedSession=_ownedSession;
@property(nonatomic) double previousProgress; // @synthesize previousProgress=_previousProgress;
@property(nonatomic) unsigned long long receivedSize; // @synthesize receivedSize=_receivedSize;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
- (void)reset;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSError *responseError; // @synthesize responseError=_responseError;
@property(nonatomic) __weak NSURLSession *unownedSession; // @synthesize unownedSession=_unownedSession;
- (_Bool)shouldContinueWhenAppEntersBackground;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

