//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTMBaseAdMediator.h"

#import "GDTNativeExpressAdImpProtocol-Protocol.h"
#import "GDTNativeExpressAdNetworkConnectorProtocol-Protocol.h"

@class GDTLoadAdParams, GDTNativeExpressAd, NSDictionary, NSMutableDictionary, NSString;
@protocol GDTNativeExpressAdImpDelegate;

@interface GDTNativeExpressAdMediator : GDTMBaseAdMediator <GDTNativeExpressAdImpProtocol, GDTNativeExpressAdNetworkConnectorProtocol>
{
    _Bool detailPageVideoMuted;
    _Bool videoAutoPlayOnWWAN;
    _Bool videoMuted;
    id <GDTNativeExpressAdImpDelegate> delegate;
    NSString *adNetworkName;
    long long maxVideoDuration;
    long long minVideoDuration;
    NSString *fixedVideoDuration;
    GDTNativeExpressAd *nativeExpressAd;
    unsigned long long videoRenderType;
    NSDictionary *mediationExtDict;
    NSMutableDictionary *_adapterMapViewsDict;
    long long _adCount;
    struct CGSize adSize;
}

- (void).cxx_destruct;
- (void)GDTfunctionh8TRVl;
- (id)GDTfunctionq8IHzD;
- (void)GDTfunctions9ozpy;
- (void)GDTfunctionz7YmtL;
@property(nonatomic) long long adCount; // @synthesize adCount=_adCount;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize;
- (void)adapterLoadAd:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *adapterMapViewsDict; // @synthesize adapterMapViewsDict=_adapterMapViewsDict;
- (void)adapter_nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
- (void)adapter_nativeExpressAdSuccessToLoad:(id)arg1 viewAdapters:(id)arg2;
- (void)adapter_nativeExpressAdViewAdapter:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)adapter_nativeExpressAdViewAdapterApplicationWillEnterBackground:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterClicked:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterClosed:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterDidDismissVideoViewController:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterDidDissmissScreen:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterDidPresentScreen:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterDidPresentVideoViewController:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterExposure:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterRenderFail:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterRenderSuccess:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterWillDismissVideoViewController:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterWillDissmissScreen:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterWillPresentScreen:(id)arg1;
- (void)adapter_nativeExpressAdViewAdapterWillPresentVideoViewController:(id)arg1;
@property(nonatomic) __weak id <GDTNativeExpressAdImpDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted;
@property(copy, nonatomic) NSString *fixedVideoDuration; // @synthesize fixedVideoDuration;
- (void)loadAd;
- (void)loadAdWithAdCount:(long long)arg1;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration;
@property(nonatomic) __weak GDTNativeExpressAd *nativeExpressAd; // @synthesize nativeExpressAd;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(readonly) Class superclass;

@end

