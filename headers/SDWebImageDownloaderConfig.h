//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURLCredential, NSURLSessionConfiguration;

@interface SDWebImageDownloaderConfig : NSObject <NSCopying>
{
    long long _maxConcurrentDownloads;
    double _downloadTimeout;
    double _minimumProgressInterval;
    NSURLSessionConfiguration *_sessionConfiguration;
    Class _operationClass;
    long long _executionOrder;
    NSURLCredential *_urlCredential;
    NSString *_username;
    NSString *_password;
}

+ (id)defaultDownloaderConfig;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) double downloadTimeout; // @synthesize downloadTimeout=_downloadTimeout;
@property(nonatomic) long long executionOrder; // @synthesize executionOrder=_executionOrder;
- (id)init;
@property(nonatomic) long long maxConcurrentDownloads; // @synthesize maxConcurrentDownloads=_maxConcurrentDownloads;
@property(nonatomic) double minimumProgressInterval; // @synthesize minimumProgressInterval=_minimumProgressInterval;
@property(nonatomic) Class operationClass; // @synthesize operationClass=_operationClass;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property(copy, nonatomic) NSURLCredential *urlCredential; // @synthesize urlCredential=_urlCredential;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end
