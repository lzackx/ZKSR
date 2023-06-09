//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTAdParams, GDTLoadAdParams, NSDictionary, NSString;

@interface GDTAdServiceParams : NSObject
{
    _Bool _disableServerMediation;
    _Bool _supportRewardPage;
    _Bool _supportTemplate;
    _Bool _supportPreload;
    _Bool _supportTemplateMix;
    _Bool _supportIntersReward;
    _Bool _supportIntersFullImage;
    _Bool _hotLaunch;
    _Bool _needZoomOut;
    _Bool _isIMAX;
    _Bool _supportLongVideo;
    _Bool _supportShake;
    NSString *_placementId;
    NSString *_threadId;
    long long _serverType;
    GDTLoadAdParams *_loadAdParams;
    long long _mc;
    long long _count;
    NSDictionary *_tagDict;
    long long _adType;
    NSString *_s2sToken;
    long long _minVideoDuration;
    long long _maxVideoDuration;
    NSString *_fixedVideoDuration;
    unsigned long long _videoPlayPolicy;
    unsigned long long _videoRenderType;
    NSString *_hybridAdHostUrl;
    NSString *_xFlowPosId;
    double _fetchDelay;
    GDTAdParams *_adParams;
    NSDictionary *_mediationExt;
    struct CGSize _adSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) long long adType; // @synthesize adType=_adType;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(nonatomic) double fetchDelay; // @synthesize fetchDelay=_fetchDelay;
@property(copy, nonatomic) NSString *fixedVideoDuration; // @synthesize fixedVideoDuration=_fixedVideoDuration;
@property(nonatomic) _Bool hotLaunch; // @synthesize hotLaunch=_hotLaunch;
@property(copy, nonatomic) NSString *hybridAdHostUrl; // @synthesize hybridAdHostUrl=_hybridAdHostUrl;
@property(nonatomic) _Bool isIMAX; // @synthesize isIMAX=_isIMAX;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams=_loadAdParams;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration=_maxVideoDuration;
@property(nonatomic) long long mc; // @synthesize mc=_mc;
@property(retain, nonatomic) NSDictionary *mediationExt; // @synthesize mediationExt=_mediationExt;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration=_minVideoDuration;
@property(nonatomic) _Bool needZoomOut; // @synthesize needZoomOut=_needZoomOut;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken=_s2sToken;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(nonatomic) _Bool supportIntersFullImage; // @synthesize supportIntersFullImage=_supportIntersFullImage;
@property(nonatomic) _Bool supportIntersReward; // @synthesize supportIntersReward=_supportIntersReward;
@property(nonatomic) _Bool supportLongVideo; // @synthesize supportLongVideo=_supportLongVideo;
@property(nonatomic) _Bool supportPreload; // @synthesize supportPreload=_supportPreload;
@property(nonatomic) _Bool supportRewardPage; // @synthesize supportRewardPage=_supportRewardPage;
@property(nonatomic) _Bool supportShake; // @synthesize supportShake=_supportShake;
@property(nonatomic) _Bool supportTemplate; // @synthesize supportTemplate=_supportTemplate;
@property(nonatomic) _Bool supportTemplateMix; // @synthesize supportTemplateMix=_supportTemplateMix;
@property(copy, nonatomic) NSDictionary *tagDict; // @synthesize tagDict=_tagDict;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) unsigned long long videoPlayPolicy; // @synthesize videoPlayPolicy=_videoPlayPolicy;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType=_videoRenderType;
@property(copy, nonatomic) NSString *xFlowPosId; // @synthesize xFlowPosId=_xFlowPosId;

@end

