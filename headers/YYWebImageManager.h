//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSOperationQueue, NSString, YYImageCache;

@interface YYWebImageManager : NSObject
{
    YYImageCache *_cache;
    NSOperationQueue *_queue;
    CDUnknownBlockType _sharedTransformBlock;
    double _timeout;
    NSString *_username;
    NSString *_password;
    NSDictionary *_headers;
    CDUnknownBlockType _headersFilter;
    CDUnknownBlockType _cacheKeyFilter;
}

+ (void)_changeNetworkActivityCount:(long long)arg1;
+ (void)_delaySetActivity:(id)arg1;
+ (id)_networkIndicatorInfo;
+ (void)_setNetworkIndicatorInfo:(id)arg1;
+ (long long)currentNetworkActivityCount;
+ (void)decrementNetworkActivityCount;
+ (void)incrementNetworkActivityCount;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) YYImageCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) CDUnknownBlockType cacheKeyFilter; // @synthesize cacheKeyFilter=_cacheKeyFilter;
- (id)cacheKeyForURL:(id)arg1;
@property(copy, nonatomic) NSDictionary *headers; // @synthesize headers=_headers;
@property(copy, nonatomic) CDUnknownBlockType headersFilter; // @synthesize headersFilter=_headersFilter;
- (id)headersForURL:(id)arg1;
- (id)init;
- (id)initWithCache:(id)arg1 queue:(id)arg2;
@property(copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
- (id)requestImageWithURL:(id)arg1 options:(unsigned long long)arg2 progress:(CDUnknownBlockType)arg3 transform:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
@property(copy, nonatomic) CDUnknownBlockType sharedTransformBlock; // @synthesize sharedTransformBlock=_sharedTransformBlock;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

@end

