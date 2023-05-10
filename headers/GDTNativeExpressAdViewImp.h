//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTNativeExpressAdViewAdapterProtocol-Protocol.h"
#import "GDTNativeExpressProAdViewDelegate-Protocol.h"
#import "GDTUnifiedTemplateViewDelegate-Protocol.h"

@class GDTNativeExpressAdView, GDTUnifiedTemplateModel, GDTVideoConfig, NSString, UIView, UIViewController;
@protocol GDTNativeExpressAdDelegete, GDTTemplateViewProtocol;

@interface GDTNativeExpressAdViewImp : NSObject <GDTNativeExpressProAdViewDelegate, GDTUnifiedTemplateViewDelegate, GDTNativeExpressAdViewAdapterProtocol>
{
    _Bool _isReady;
    _Bool _isVideoAd;
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    UIViewController *_controller;
    GDTNativeExpressAdView *_gdtExpressAdView;
    id <GDTNativeExpressAdDelegete> _delegate;
    GDTUnifiedTemplateModel *_adModel;
    GDTVideoConfig *_videoConfig;
    UIView<GDTTemplateViewProtocol> *_innerTemplateView;
}

- (void).cxx_destruct;
- (void)GDTfunctionc4m1Fd;
- (void)GDTfunctiond9quKs:(unsigned long long)arg1 duration:(long long)arg2;
- (void)GDTfunctionf9xKZL;
- (void)GDTfunctiong0bk0B;
- (void)GDTfunctiong0cNiz:(id)arg1;
- (void)GDTfunctiong0rdnd:(id)arg1;
- (void)GDTfunctionh0bYta:(id)arg1 size:(struct CGSize)arg2;
- (void)GDTfunctionh4Tpy2:(id)arg1;
- (void)GDTfunctionj5m6Eu:(id)arg1;
- (void)GDTfunctionk0XlAk:(id)arg1;
- (void)GDTfunctionl3pjJU;
- (void)GDTfunctionm00Elb:(id)arg1;
- (void)GDTfunctionm5DzGw:(id)arg1;
- (void)GDTfunctionn1sXnE;
- (void)GDTfunctiono5SntN;
- (void)GDTfunctionp59a4K;
- (void)GDTfunctionp8bXYr:(id)arg1;
- (void)GDTfunctionr9C5Bf:(id)arg1;
- (void)GDTfunctions55cUV:(unsigned long long)arg1;
- (void)GDTfunctions6WHxQ:(id)arg1;
- (void)GDTfunctiont547ZU:(id)arg1;
- (void)GDTfunctiont6H5yw;
- (void)GDTfunctiont8McWf;
- (void)GDTfunctionu22bPe;
- (void)GDTfunctionu6tIc2;
- (void)GDTfunctionw6zNxK:(id)arg1;
- (void)GDTfunctionx1YNZN:(id)arg1 errorCode:(unsigned long long)arg2 detailCode:(unsigned long long)arg3;
- (void)GDTfunctionx5Svzs:(id)arg1 adSize:(struct CGSize)arg2;
- (void)GDTfunctionz0IUeo:(id)arg1;
- (void)GDTfunctionz8JEev;
@property(retain, nonatomic) GDTUnifiedTemplateModel *adModel; // @synthesize adModel=_adModel;
- (id)adView;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void)dealloc;
@property(nonatomic) __weak id <GDTNativeExpressAdDelegete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
- (long long)eCPM;
- (id)eCPMLevel;
@property(nonatomic) __weak GDTNativeExpressAdView *gdtExpressAdView; // @synthesize gdtExpressAdView=_gdtExpressAdView;
- (void)gdt_NativeExpressProAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_NativeExpressProAdViewClicked:(id)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewExposure:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderFail:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(id)arg1;
- (void)gdt_NativeExpressProAdViewVideoDidFinished:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(id)arg1;
@property(retain, nonatomic) UIView<GDTTemplateViewProtocol> *innerTemplateView; // @synthesize innerTemplateView=_innerTemplateView;
@property(readonly, nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(readonly, nonatomic) _Bool isVideoAd; // @synthesize isVideoAd=_isVideoAd;
- (void)render;
- (void)renderFailCallback;
- (void)renderSuccessCallback;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(retain, nonatomic) GDTVideoConfig *videoConfig; // @synthesize videoConfig=_videoConfig;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
- (double)videoDuration;
- (double)videoPlayTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

