//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTUnifiedNativeAdDelegate-Protocol.h"
#import "GDTUnifiedNativeAdViewDelegate-Protocol.h"

@class GDTUnifiedNativeAd, GDTUnifiedNativeAdDataObject, KSYD_AdvertConfigModel, KSYD_ReaderSettings, NSArray, NSString, NSTimer, UnifiedNativeAdCustomView;
@protocol KSYD_GDTUnifiedNativeViewDelegate;

@interface KSYD_GDTUnifiedNativeView : UIView <GDTUnifiedNativeAdDelegate, GDTUnifiedNativeAdViewDelegate>
{
    KSYD_AdvertConfigModel *_ADModel;
    id <KSYD_GDTUnifiedNativeViewDelegate> _mydelegate;
    NSTimer *_changeBannerTimer;
    KSYD_ReaderSettings *_settings;
    GDTUnifiedNativeAd *_unifiedNativeAd;
    GDTUnifiedNativeAdDataObject *_dataObject;
    NSArray *_adDataArray;
    UnifiedNativeAdCustomView *_adView;
    GDTUnifiedNativeAdDataObject *_LastdataObject;
    UnifiedNativeAdCustomView *_LastadView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_AdvertConfigModel *ADModel; // @synthesize ADModel=_ADModel;
@property(retain, nonatomic) UnifiedNativeAdCustomView *LastadView; // @synthesize LastadView=_LastadView;
@property(retain, nonatomic) GDTUnifiedNativeAdDataObject *LastdataObject; // @synthesize LastdataObject=_LastdataObject;
@property(retain, nonatomic) NSArray *adDataArray; // @synthesize adDataArray=_adDataArray;
@property(retain, nonatomic) UnifiedNativeAdCustomView *adView; // @synthesize adView=_adView;
@property(retain, nonatomic) NSTimer *changeBannerTimer; // @synthesize changeBannerTimer=_changeBannerTimer;
@property(retain, nonatomic) GDTUnifiedNativeAdDataObject *dataObject; // @synthesize dataObject=_dataObject;
- (void)dealloc;
- (void)gdt_unifiedNativeAdDetailViewClosed:(id)arg1;
- (void)gdt_unifiedNativeAdDetailViewWillPresentScreen:(id)arg1;
- (void)gdt_unifiedNativeAdLoaded:(id)arg1 error:(id)arg2;
- (void)gdt_unifiedNativeAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(id)arg3;
- (void)gdt_unifiedNativeAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_unifiedNativeAdViewDidClick:(id)arg1;
- (void)gdt_unifiedNativeAdViewWillExpose:(id)arg1;
- (id)getRootNavController;
- (void)initNativeBanner;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <KSYD_GDTUnifiedNativeViewDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) GDTUnifiedNativeAd *unifiedNativeAd; // @synthesize unifiedNativeAd=_unifiedNativeAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
