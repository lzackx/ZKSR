//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTMBaseAdMediator.h"

#import "GDTUnifiedNativeAdImpProtocol-Protocol.h"
#import "GDTUnifiedNativeAdNetworkConnectorProtocol-Protocol.h"

@class GDTLoadAdParams, GDTUnifiedNativeAd, NSDictionary, NSMutableDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@interface GDTUnifiedNativeAdMediator : GDTMBaseAdMediator <GDTUnifiedNativeAdImpProtocol, GDTUnifiedNativeAdNetworkConnectorProtocol>
{
    id <GDTUnifiedNativeAdDelegate> delegate;
    GDTUnifiedNativeAd *unifiedNativeAd;
    NSDictionary *tagDict;
    NSString *adNetworkName;
    unsigned long long videoPlayPolicy;
    unsigned long long videoRenderType;
    long long maxVideoDuration;
    long long minVideoDuration;
    NSString *vastClassName;
    GDTLoadAdParams *loadAdParams;
    NSDictionary *mediationExtDict;
    NSMutableDictionary *_adapterMapDataObjectsDict;
    long long _adCount;
}

- (void).cxx_destruct;
- (id)GDTfunctione3kCbb:(id)arg1;
- (void)GDTfunctionh8TRVl;
- (id)GDTfunctionq8IHzD;
- (void)GDTfunctions9ozpy;
- (void)GDTfunctionz7YmtL;
@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
- (void)adapter:(id)arg1 unifiedNativeAdLoaded:(id)arg2 error:(id)arg3;
- (void)adapterLoadAd:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *adapterMapDataObjectsDict; // @synthesize adapterMapDataObjectsDict=_adapterMapDataObjectsDict;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate; // @synthesize delegate;
- (void)loadAd;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
- (void)loadAdWithAdCount:(long long)arg1;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration;
@property(retain, nonatomic) NSDictionary *tagDict; // @synthesize tagDict;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd; // @synthesize unifiedNativeAd;
@property(copy, nonatomic) NSString *vastClassName; // @synthesize vastClassName;
@property(nonatomic) unsigned long long videoPlayPolicy; // @synthesize videoPlayPolicy;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

