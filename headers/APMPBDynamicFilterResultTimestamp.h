//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NANOMessageBase-Protocol.h"

@class NSString;

@interface APMPBDynamicFilterResultTimestamp : NSObject <NANOMessageBase>
{
    CDStruct_e1a27b1c *_messageInfo;
}

@property(readonly, nonatomic) CDUnknownFunctionPointerType copyMessageInfoFn;
- (void)dealloc;
@property(readonly, nonatomic) CDUnknownFunctionPointerType deallocMessageFieldFn;
@property(readonly, nonatomic) CDUnknownFunctionPointerType initMessageInfoFn;
- (id)initWithBuffer:(id)arg1;
- (id)initWithMessageInfo:(CDStruct_e1a27b1c *)arg1;
@property(readonly, nonatomic) const char *messageID;
@property(readonly, nonatomic) CDStruct_e1a27b1c *messageInfo; // @synthesize messageInfo=_messageInfo;
- (id)protoBuffer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

