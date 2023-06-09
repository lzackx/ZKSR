//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import "NSURLConnectionDataDelegate-Protocol.h"

@class NSMutableData, NSSet, NSString, NSURLConnection, NSURLRequest, NSURLResponse;

@interface GDTRQOperation : NSOperation <NSURLConnectionDataDelegate>
{
    _Bool _executing;
    _Bool _finished;
    _Bool _cancelled;
    _Bool _autoRetry;
    NSURLRequest *_request;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _uploadProgressHandler;
    CDUnknownBlockType _downloadProgressHandler;
    CDUnknownBlockType _authenticationChallengeHandler;
    NSSet *_autoRetryErrorCodes;
    double _autoRetryDelay;
    NSURLConnection *_connection;
    NSURLResponse *_responseReceived;
    NSMutableData *_accumulatedData;
}

+ (id)operationWithRequest:(id)arg1;
- (void).cxx_destruct;
- (_Bool)GDTfunctiong0Yc5w;
@property(retain, nonatomic) NSMutableData *accumulatedData; // @synthesize accumulatedData=_accumulatedData;
@property(copy, nonatomic) CDUnknownBlockType authenticationChallengeHandler; // @synthesize authenticationChallengeHandler=_authenticationChallengeHandler;
@property(nonatomic) _Bool autoRetry; // @synthesize autoRetry=_autoRetry;
@property(nonatomic) double autoRetryDelay; // @synthesize autoRetryDelay=_autoRetryDelay;
@property(copy, nonatomic) NSSet *autoRetryErrorCodes; // @synthesize autoRetryErrorCodes=_autoRetryErrorCodes;
- (void)cancel;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (void)connectionDidFinishLoading:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType downloadProgressHandler; // @synthesize downloadProgressHandler=_downloadProgressHandler;
- (void)finish;
- (id)initWithRequest:(id)arg1;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(retain, nonatomic) NSURLResponse *responseReceived; // @synthesize responseReceived=_responseReceived;
@property(copy, nonatomic) CDUnknownBlockType uploadProgressHandler; // @synthesize uploadProgressHandler=_uploadProgressHandler;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

