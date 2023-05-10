//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, NSString, UIImage;
@protocol BU_SDWebImageOperation;

@protocol BU_SDImageCache <NSObject>
- (void)clearWithCacheType:(long long)arg1 completion:(void (^)(void))arg2;
- (void)containsImageForKey:(NSString *)arg1 cacheType:(long long)arg2 completion:(void (^)(long long))arg3;
- (id <BU_SDWebImageOperation>)queryImageForKey:(NSString *)arg1 options:(unsigned long long)arg2 context:(NSDictionary *)arg3 completion:(void (^)(UIImage *, NSData *, long long))arg4;
- (void)removeImageForKey:(NSString *)arg1 cacheType:(long long)arg2 completion:(void (^)(void))arg3;
- (void)storeImage:(UIImage *)arg1 imageData:(NSData *)arg2 forKey:(NSString *)arg3 cacheType:(long long)arg4 completion:(void (^)(void))arg5;
@end

