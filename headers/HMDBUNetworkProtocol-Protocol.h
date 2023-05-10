//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString;

@protocol HMDBUNetworkProtocol <NSObject>
- (void)asyncRequestForURL:(NSString *)arg1 method:(NSString *)arg2 headerField:(NSDictionary *)arg3 jsonObjParams:(id)arg4 needEcrypt:(_Bool)arg5 callBackWithResponse:(void (^)(NSError *, id, NSURLResponse *))arg6;
- (void)asyncRequestForURL:(NSString *)arg1 method:(NSString *)arg2 headerField:(NSDictionary *)arg3 jsonObjParams:(id)arg4 needEcrypt:(_Bool)arg5 callback:(void (^)(NSError *, id))arg6;
- (void)configEncryptBlock:(NSData * (^)(NSData *))arg1;
- (NSData * (^)(NSData *))encryptBlock;
- (NSDictionary *)synchronizedRequestForURL:(NSString *)arg1 method:(NSString *)arg2 headerField:(NSDictionary *)arg3 jsonObjParams:(id)arg4 needCompress:(_Bool)arg5;
- (void)uploadWithURLString:(NSString *)arg1 formData:(NSData *)arg2 headerField:(NSDictionary *)arg3 progress:(id *)arg4 callBackWithResponse:(void (^)(NSError *, id, NSURLResponse *))arg5;
- (void)uploadWithURLString:(NSString *)arg1 formData:(NSData *)arg2 headerField:(NSDictionary *)arg3 progress:(id *)arg4 callback:(void (^)(NSError *, id))arg5;
@end
