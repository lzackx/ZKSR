//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDelegate-Protocol.h"

@class NSMutableData, NSString;
@protocol GDTURLSessionDelegateObjectDelegate;

@interface GDTURLSessionDelegateObject : NSObject <NSURLSessionDelegate>
{
    id <GDTURLSessionDelegateObjectDelegate> _delegate;
    NSMutableData *_bufferData;
}

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
@property(retain, nonatomic) NSMutableData *bufferData; // @synthesize bufferData=_bufferData;
@property(nonatomic) __weak id <GDTURLSessionDelegateObjectDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

