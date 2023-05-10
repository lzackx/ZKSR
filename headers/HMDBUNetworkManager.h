//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "HMDBUNetworkProtocol-Protocol.h"

@class NSString;
@protocol HMDBUNetworkProtocol;

@interface HMDBUNetworkManager : NSObject <HMDBUNetworkProtocol>
{
    id <HMDBUNetworkProtocol> _ttnetManager;
    id <HMDBUNetworkProtocol> _urlsessionManager;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)asyncRequestForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needEcrypt:(_Bool)arg5 callBackWithResponse:(CDUnknownBlockType)arg6;
- (void)asyncRequestForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needEcrypt:(_Bool)arg5 callback:(CDUnknownBlockType)arg6;
- (void)configEncryptBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDUnknownBlockType)encryptBlock;
- (id)init;
@property(retain, nonatomic) id <HMDBUNetworkProtocol> ttnetManager; // @synthesize ttnetManager=_ttnetManager;
@property(retain, nonatomic) id <HMDBUNetworkProtocol> urlsessionManager; // @synthesize urlsessionManager=_urlsessionManager;
- (id)synchronizedRequestForURL:(id)arg1 method:(id)arg2 headerField:(id)arg3 jsonObjParams:(id)arg4 needCompress:(_Bool)arg5;
- (void)uploadWithURLString:(id)arg1 formData:(id)arg2 headerField:(id)arg3 progress:(id *)arg4 callBackWithResponse:(CDUnknownBlockType)arg5;
- (void)uploadWithURLString:(id)arg1 formData:(id)arg2 headerField:(id)arg3 progress:(id *)arg4 callback:(CDUnknownBlockType)arg5;
- (id)validManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

