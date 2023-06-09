//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"
#import "BUNativeExpressAdViewDelegate-Protocol.h"
#import "BUNativeExpressAdViewDismissDelegate-Protocol.h"
#import "BUNativeExpressVideoAdDelegate-Protocol.h"
#import "BUVideoAdDelegate-Protocol.h"

@class BUAdSlot, BUDislikeContext, BUFullScreenTransitioningDelegate, BUNativeAd, BUNativeExpressAdManager, BUNativeExpressRewardedVideoAdView, BURewardedVideoModel, NSDictionary, NSString, UIViewController;
@protocol BUNativeExpressFullscreenVideoAdDelegate;

@interface BUNativeExpressFullscreenVideoAd : NSObject <BUNativeExpressAdViewDelegate, BUNativeExpressVideoAdDelegate, BUVideoAdDelegate, BUNativeExpressAdViewDismissDelegate, BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    _Bool isRewardedVideo;
    _Bool _materialMetaIsFromPreload;
    _Bool _isShow;
    _Bool _triggerNativeAdDidLoadCallback;
    _Bool _triggerNativeAdDidDownloadCallback;
    id <BUNativeExpressFullscreenVideoAdDelegate> _delegate;
    BUFullScreenTransitioningDelegate *_fullScreenTrasitionDelegate;
    UIViewController *_rootPresentingVC;
    long long _expireTimestamp;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    BUAdSlot *_adSlot;
    BUNativeAd *_purePlayableNativeAd;
    BUNativeExpressRewardedVideoAdView *_expressAdView;
    BUDislikeContext *_dislikeContext;
    long long _realSlotRenderType;
}

- (void).cxx_destruct;
- (void)actionManager;
@property(retain, nonatomic) BUAdSlot *adSlot; // @synthesize adSlot=_adSlot;
- (id)biddingToken;
@property(nonatomic) __weak id <BUNativeExpressFullscreenVideoAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) long long expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(retain, nonatomic) BUNativeExpressRewardedVideoAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
@property(retain, nonatomic) BUFullScreenTransitioningDelegate *fullScreenTrasitionDelegate; // @synthesize fullScreenTrasitionDelegate=_fullScreenTrasitionDelegate;
- (id)getAdCreativeToken;
- (long long)getExpireTimestamp;
- (void)handleSuccessLoadForPurePlayableWithNativeAd:(id)arg1;
- (id)initWithSlot:(id)arg1;
- (id)initWithSlotID:(id)arg1;
- (void)interstitialAdDidClick;
- (void)interstitialAdDidClose;
- (void)interstitialAdWillClose;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)loadAdData;
- (void)loss:(id)arg1 lossReason:(id)arg2 winBidder:(id)arg3;
@property(nonatomic) _Bool materialMetaIsFromPreload; // @synthesize materialMetaIsFromPreload=_materialMetaIsFromPreload;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewDismiss:(id)arg1;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillDismiss:(id)arg1;
- (void)nativeExpressVideoAdDidClickSkip;
- (void)nativeExpressVideoAdDidPlayFinishWithError:(id)arg1;
- (void)nativeExpressVideoAdEndcardDidClose;
- (void)nativeExpressVideoAdEndcardWillClose;
- (unsigned long long)nativeExpressVideoAdType;
- (_Bool)needUseNativeExpressVC;
- (void)p_showLog:(id)arg1 adModel:(id)arg2 extraDic:(id)arg3;
@property(retain, nonatomic) BUNativeAd *purePlayableNativeAd; // @synthesize purePlayableNativeAd=_purePlayableNativeAd;
- (void)purePlayableShow;
@property(nonatomic) long long realSlotRenderType; // @synthesize realSlotRenderType=_realSlotRenderType;
@property(nonatomic) __weak UIViewController *rootPresentingVC; // @synthesize rootPresentingVC=_rootPresentingVC;
- (void)safeDelegate_nativeExpressFullscreenVideoAdCallback;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidClick;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidClickSkip;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidClose;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidCloseOtherControllerWithInteractionType:(long long)arg1;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidDownLoadVideo;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidLoad;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidPlayFinishWithError:(id)arg1;
- (void)safeDelegate_nativeExpressFullscreenVideoAdDidVisible;
- (void)safeDelegate_nativeExpressFullscreenVideoAdViewRenderFailWithError:(id)arg1;
- (void)safeDelegate_nativeExpressFullscreenVideoAdViewRenderSuccess;
- (void)safeDelegate_nativeExpressFullscreenVideoAdWillClose;
- (void)safeDelegate_nativeExpressFullscreenVideoAdWillVisible;
- (void)safeDelegate_nativeExpressFullscreenVideoAdWithError:(id)arg1;
- (void)setMopubAdMarkUp:(id)arg1;
- (void)setPrice:(id)arg1;
@property(nonatomic) _Bool triggerNativeAdDidDownloadCallback; // @synthesize triggerNativeAdDidDownloadCallback=_triggerNativeAdDidDownloadCallback;
@property(nonatomic) _Bool triggerNativeAdDidLoadCallback; // @synthesize triggerNativeAdDidLoadCallback=_triggerNativeAdDidLoadCallback;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1 ritSceneDescribe:(id)arg2;
- (void)showDataUpload;
- (void)showNewExpressWithRootViewController:(id)arg1 ritSceneStr:(id)arg2;
- (void)showOldExpressWithRootViewController:(id)arg1 ritSceneStr:(id)arg2;
- (void)videoAdDidClick;
- (void)videoAdDidClickSkip;
- (void)videoAdDidClose;
- (void)videoAdDidPlayFinishWithError:(id)arg1;
- (void)videoAdWillClose;
- (void)win:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) BURewardedVideoModel *rewardedVideoModel;
@property(readonly) Class superclass;

@end

