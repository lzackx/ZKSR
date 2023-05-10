//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUAdSlot, BUMaterialMeta, NSDateFormatter, NSError, NSMutableArray, NSMutableDictionary, NSNumber;
@protocol BUAd;

@interface BUSplashPreloader : NSObject
{
    double _timeout;
    BUMaterialMeta<BUAd> *_materialMeta;
    BUAdSlot *_slot;
    NSError *_error;
    NSNumber *_is_cache;
    NSMutableArray *_bu_slotidAry;
    NSMutableDictionary *_downloadTokens;
    NSDateFormatter *_mmDateFormatter;
}

+ (id)defaultPersistence;
+ (id)sharedPreloader;
- (void).cxx_destruct;
- (void)_downloadImageWhenFileCacheNotExistWithSlot:(id)arg1 materailMeta:(id)arg2 imageModel:(id)arg3 durationModel:(id)arg4 success:(CDUnknownBlockType)arg5 failure:(CDUnknownBlockType)arg6;
- (void)_updateResourceImageHTTPHeaderWihtURL:(id)arg1 durationModel:(id)arg2;
@property(retain, nonatomic) NSMutableArray *bu_slotidAry; // @synthesize bu_slotidAry=_bu_slotidAry;
- (void)checkLocalmaterialMeta:(id)arg1 splashGetMateria:(CDUnknownBlockType)arg2;
- (void)checkMaterialMetaValid:(id)arg1 checkVaild:(CDUnknownBlockType)arg2;
- (void)deleteSplashDiskData;
- (void)downLoadImages:(id)arg1 slot:(id)arg2 success:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (void)downLoadResourcesImageFirst:(id)arg1 slot:(id)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (void)downLoadResourcesVideoFirst:(id)arg1 slot:(id)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (void)downLoadVideoWithMaterial:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)downSplashZoomOutImage:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *downloadTokens; // @synthesize downloadTokens=_downloadTokens;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)getMaterialMetaAndImages:(id)arg1 loadTimeInterval:(double)arg2 loadState:(id)arg3 materialSucess:(CDUnknownBlockType)arg4 materialFailure:(CDUnknownBlockType)arg5;
- (void)getMaterialMetaFromNetwork:(id)arg1 loadTimeInterval:(double)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)init;
@property(retain, nonatomic) NSNumber *is_cache; // @synthesize is_cache=_is_cache;
@property(retain, nonatomic) BUMaterialMeta<BUAd> *materialMeta; // @synthesize materialMeta=_materialMeta;
- (void)materialMetaForSplash:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)materialMetaForSplashBase:(id)arg1 loadTimeInterval:(double)arg2 sucess:(CDUnknownBlockType)arg3 failure:(CDUnknownBlockType)arg4;
- (id)materialMetaFromCache:(id)arg1;
@property(retain, nonatomic) NSDateFormatter *mmDateFormatter; // @synthesize mmDateFormatter=_mmDateFormatter;
- (_Bool)needCachedVideo:(id)arg1;
- (void)preLoadMaterialMetaFromNetwork:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)recursivePreLoadMaterialMetaFromNetwork:(id)arg1 sucess:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)saveMaterialToDisk:(id)arg1 slot:(id)arg2;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;

@end
