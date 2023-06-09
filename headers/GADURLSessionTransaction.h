//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"

@class GADEventContext, NSData, NSError, NSMutableData, NSString, NSURL, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

@interface GADURLSessionTransaction : NSObject <GADEventContextSource>
{
    struct CC_MD5state_st _responseDigestState;
    CDUnknownBlockType _completionHandler;
    NSURLResponse *_response;
    NSMutableData *_responseBody;
    long long _responseLength;
    NSData *_responseDigest;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADEventContext *_context;
    long long _notificationPolicy;
    NSURLRequest *_request;
    NSURL *_redirectURL;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDUnknownBlockType completionHandler;
@property(readonly, nonatomic) GADEventContext *context; // @synthesize context=_context;
- (void)didCompleteWithError:(id)arg1;
- (void)didReceiveData:(id)arg1;
- (void)didReceiveResponse:(id)arg1;
@property(readonly, copy, nonatomic) NSError *error;
- (id)initWithURLRequest:(id)arg1 parentContext:(id)arg2 notificationPolicy:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)initWithURLRequest:(id)arg1 parentContext:(id)arg2 response:(id)arg3 responseBody:(id)arg4 requestError:(id)arg5;
@property(readonly, nonatomic) long long notificationPolicy; // @synthesize notificationPolicy=_notificationPolicy;
@property(readonly, copy, nonatomic) NSURL *redirectURL; // @synthesize redirectURL=_redirectURL;
@property(readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property(readonly, copy, nonatomic) NSURLResponse *response;
@property(readonly, copy, nonatomic) NSData *responseBody;
@property(readonly, copy, nonatomic) NSData *responseDigest;
@property(readonly, nonatomic) long long responseLength;
- (id)successorWithURLRequest:(id)arg1;
- (void)willRedirectToURL:(id)arg1;
- (void)willSendRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

