//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdContentViewCheckerDelegate-Protocol.h"
#import "GDTAdImpProtocol-Protocol.h"
#import "GDTAdImpS2SProtocol-Protocol.h"
#import "GDTNativeExpressProAdViewDelegate-Protocol.h"
#import "GDTUnifiedBannerViewImpProtocol-Protocol.h"
#import "GDTUnifiedTemplateViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdViewExposeRuleChecker, GDTBannerAdModel, GDTLoadAdParams, GDTUnifiedBannerView, NSDictionary, NSString, UIView, UIViewController;
@protocol GDTTemplateViewProtocol, GDTUnifiedBannerViewDelegate;

@interface GDTUnifiedBannerViewImp : NSObject <GDTAdContentViewCheckerDelegate, GDTUnifiedTemplateViewDelegate, GDTNativeExpressProAdViewDelegate, GDTUnifiedBannerViewImpProtocol, GDTAdImpS2SProtocol, GDTAdImpProtocol>
{
    _Bool _animated;
    _Bool isFromS2S;
    _Bool _needShow;
    long long _autoSwitchInterval;
    id <GDTUnifiedBannerViewDelegate> _delegate;
    GDTLoadAdParams *_loadAdParams;
    GDTUnifiedBannerView *_unifiedBannerView;
    UIViewController *_currentViewController;
    NSDictionary *_mediationExtDict;
    NSString *s2sToken;
    UIView<GDTTemplateViewProtocol> *_innerTemplateView;
    GDTAdViewExposeRuleChecker *_checker;
    NSString *_placementId;
    GDTAdBaseModel *_adModelForEvent;
    NSString *_threadId;
    double _requestBeginTime;
    double _requestEndTime;
    double _showBeginTime;
    GDTBannerAdModel *_adModel;
}

- (void).cxx_destruct;
- (void)GDTfunctiona6PJBz;
- (void)GDTfunctionb7xEwK;
- (void)GDTfunctionc318z3:(id)arg1;
- (void)GDTfunctiond4ust7:(long long)arg1;
- (void)GDTfunctiong0cNiz:(id)arg1;
- (void)GDTfunctiong0rdnd:(id)arg1;
- (_Bool)GDTfunctionh2gGzw;
- (void)GDTfunctioni0ztGC:(id)arg1;
- (void)GDTfunctionk0XlAk:(id)arg1;
- (void)GDTfunctionk2oBhA;
- (int)GDTfunctionk4xbqv:(long long)arg1;
- (void)GDTfunctionl1bNwa;
- (void)GDTfunctionm00Elb:(id)arg1;
- (void)GDTfunctiono8pxEM;
- (void)GDTfunctionp5gyOx;
- (void)GDTfunctionp8bXYr:(id)arg1;
- (void)GDTfunctionq2PLQE;
- (void)GDTfunctionr4HCME:(unsigned long long)arg1;
- (void)GDTfunctionr4HCME:(unsigned long long)arg1 detailErrorCode:(unsigned long long)arg2;
- (void)GDTfunctionr9C5Bf:(id)arg1;
- (void)GDTfunctionr9JWSj;
- (void)GDTfunctions6WHxQ:(id)arg1;
- (void)GDTfunctions7Hfu7;
- (id)GDTfunctions7xy7p;
- (void)GDTfunctionv5f4p3;
- (void)GDTfunctionw6zNxK:(id)arg1;
- (void)GDTfunctionx7HJWJ;
- (void)GDTfunctiony4Ar1e:(struct CGPoint)arg1;
- (void)GDTfunctionz0IUeo:(id)arg1;
@property(retain, nonatomic) GDTBannerAdModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
- (id)adNetworkName;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
@property(nonatomic) long long autoSwitchInterval; // @synthesize autoSwitchInterval=_autoSwitchInterval;
@property(retain, nonatomic) GDTAdViewExposeRuleChecker *checker; // @synthesize checker=_checker;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void)dealloc;
@property(nonatomic) __weak id <GDTUnifiedBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)eCPM;
- (id)eCPMLevel;
- (void)gdt_NativeExpressProAdView:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(id)arg1;
- (void)gdt_NativeExpressProAdViewClicked:(id)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewExposure:(id)arg1;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(id)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(id)arg1;
- (id)initWithPlacementId:(id)arg1 bannerView:(id)arg2 viewController:(id)arg3 needShow:(_Bool)arg4;
@property(retain, nonatomic) UIView<GDTTemplateViewProtocol> *innerTemplateView; // @synthesize innerTemplateView=_innerTemplateView;
@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S;
- (void)loadAdAndShow;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams=_loadAdParams;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict=_mediationExtDict;
@property(nonatomic) _Bool needShow; // @synthesize needShow=_needShow;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
- (void)setBidECPM:(long long)arg1;
@property(nonatomic) double showBeginTime; // @synthesize showBeginTime=_showBeginTime;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) __weak GDTUnifiedBannerView *unifiedBannerView; // @synthesize unifiedBannerView=_unifiedBannerView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
