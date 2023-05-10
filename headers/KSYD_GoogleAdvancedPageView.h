//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADNativeAdDelegate-Protocol.h"
#import "GADNativeAdLoaderDelegate-Protocol.h"
#import "GADVideoControllerDelegate-Protocol.h"

@class GADAdLoader, GADNativeAd, GADNativeAdView, KSYD_AdvertConfigModel, KSYD_ReaderSettings, NSString;
@protocol KSYD_GoogleAdvancedPageViewDelegate;

@interface KSYD_GoogleAdvancedPageView : UIView <GADNativeAdLoaderDelegate, GADVideoControllerDelegate, GADNativeAdDelegate>
{
    GADNativeAd *_nativBannerAd;
    KSYD_AdvertConfigModel *_ADModel;
    id <KSYD_GoogleAdvancedPageViewDelegate> _mydelegate;
    GADAdLoader *_adLoader;
    KSYD_ReaderSettings *_settings;
    GADNativeAdView *_nativeAdView;
    double _contentHeight;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_AdvertConfigModel *ADModel; // @synthesize ADModel=_ADModel;
@property(retain, nonatomic) GADAdLoader *adLoader; // @synthesize adLoader=_adLoader;
- (void)adLoader:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adLoader:(id)arg1 didReceiveNativeAd:(id)arg2;
- (void)adLoaderDidFinishLoading:(id)arg1;
@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void)dealloc;
- (id)getRootNavController;
- (void)initNativeBanner;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <KSYD_GoogleAdvancedPageViewDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
@property(retain, nonatomic) GADNativeAd *nativBannerAd; // @synthesize nativBannerAd=_nativBannerAd;
- (void)nativeAdDidDismissScreen:(id)arg1;
- (void)nativeAdDidRecordClick:(id)arg1;
- (void)nativeAdDidRecordImpression:(id)arg1;
@property(retain, nonatomic) GADNativeAdView *nativeAdView; // @synthesize nativeAdView=_nativeAdView;
- (void)nativeAdWillDismissScreen:(id)arg1;
- (void)nativeAdWillLeaveApplication:(id)arg1;
- (void)nativeAdWillPresentScreen:(id)arg1;
- (void)refreshBackGroundColor;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

