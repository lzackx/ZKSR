//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BUAdClientBiddingProtocol-Protocol.h"
#import "BUMopubAdMarkUpDelegate-Protocol.h"
#import "BUNativeExpressAdViewDelegate-Protocol.h"
#import "BUNativeExpressSplashVideoAdViewDelegate-Protocol.h"

@class BUAdClientBiddingHandle, BUAdSlot, BUDislikeContext, BUGifImageView, BUMaterialMeta, BUNativeExpressAdManager, BUNativeExpressSplashVideoAdView, BUSkipButton, NSDictionary, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIViewController;
@protocol BUNativeExpressSplashViewDelegate;

@interface BUNativeExpressSplashView : UIView <BUNativeExpressAdViewDelegate, BUNativeExpressSplashVideoAdViewDelegate, BUMopubAdMarkUpDelegate, BUAdClientBiddingProtocol>
{
    _Bool _setTolerateTimeoutDidCall;
    _Bool _hideSkipButton;
    _Bool _isShowed;
    id <BUNativeExpressSplashViewDelegate> _delegate;
    double _tolerateTimeout;
    BUAdClientBiddingHandle *_clientBiddingHandle;
    UIView *_successView;
    UIViewController *_rootViewController;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    BUNativeExpressSplashVideoAdView *_expressVideoAdView;
    BUGifImageView *_splashImageView;
    UITapGestureRecognizer *_tapGesture;
    BUAdSlot *_slot;
    BUMaterialMeta *_materialMetaModel;
    BUSkipButton *_skipButton;
    UIButton *_muteButton;
    UIImageView *_buLogoIcon;
    double _showTime;
    double _splashStartLoad;
    BUDislikeContext *_dislikeContext;
    long long _realSlotRenderType;
    struct CGSize _adSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
- (id)biddingToken;
- (void)bringSubviews;
@property(retain, nonatomic) UIImageView *buLogoIcon; // @synthesize buLogoIcon=_buLogoIcon;
- (void)buildupView;
- (id)c_xyDictWithTouchObject:(id)arg1;
@property(retain, nonatomic) BUAdClientBiddingHandle *clientBiddingHandle; // @synthesize clientBiddingHandle=_clientBiddingHandle;
- (void)dealloc;
@property(nonatomic) __weak id <BUNativeExpressSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(retain, nonatomic) BUNativeExpressSplashVideoAdView *expressVideoAdView; // @synthesize expressVideoAdView=_expressVideoAdView;
- (id)getAdCreativeToken;
- (_Bool)handleNativeSplashViewNeedCallbackLoadSuccess:(_Bool)arg1;
@property(nonatomic) _Bool hideSkipButton; // @synthesize hideSkipButton=_hideSkipButton;
- (id)initWithSlot:(id)arg1 adSize:(struct CGSize)arg2 rootViewController:(id)arg3;
- (id)initWithSlotID:(id)arg1 adSize:(struct CGSize)arg2 rootViewController:(id)arg3;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
@property(nonatomic) _Bool isShowed; // @synthesize isShowed=_isShowed;
- (void)layoutSubviews;
- (void)loadAdData;
- (void)loss:(id)arg1 lossReason:(id)arg2 winBidder:(id)arg3;
@property(retain, nonatomic) BUMaterialMeta *materialMetaModel; // @synthesize materialMetaModel=_materialMetaModel;
@property(readonly, copy, nonatomic) NSDictionary *mediaExt;
@property(retain, nonatomic) UIButton *muteButton; // @synthesize muteButton=_muteButton;
- (void)muteButtonTapped:(id)arg1;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
- (void)nativeExpressSplashVideoAdViewFinishPlayDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressSplashVideoAdViewForceQuit:(id)arg1;
- (void)nativeExpressSplashVideoAdViewReadyToPlay:(id)arg1;
- (void)outer_call_no_rspWithError:(id)arg1;
- (void)outer_call_send;
- (id)player;
@property(nonatomic) long long realSlotRenderType; // @synthesize realSlotRenderType=_realSlotRenderType;
- (void)removeSplashView;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
- (void)safeDelegate_nativeExpressSplashView:(id)arg1 didFailWithError:(id)arg2;
- (void)safeDelegate_nativeExpressSplashViewCountdownToZero:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewDidClick:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewDidClickSkip:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewDidClose:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewDidCloseOtherController:(id)arg1 interactionType:(long long)arg2;
- (void)safeDelegate_nativeExpressSplashViewDidLoad:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewFinishPlayDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)safeDelegate_nativeExpressSplashViewRenderFail:(id)arg1 error:(id)arg2;
- (void)safeDelegate_nativeExpressSplashViewRenderSuccess:(id)arg1;
- (void)safeDelegate_nativeExpressSplashViewWillVisible:(id)arg1;
- (void)setContextBlock:(id)arg1;
- (void)setMopubAdMarkUp:(id)arg1;
- (void)setPrice:(id)arg1;
@property(nonatomic) double showTime; // @synthesize showTime=_showTime;
@property(retain, nonatomic) BUSkipButton *skipButton; // @synthesize skipButton=_skipButton;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(retain, nonatomic) BUGifImageView *splashImageView; // @synthesize splashImageView=_splashImageView;
@property(nonatomic) double splashStartLoad; // @synthesize splashStartLoad=_splashStartLoad;
@property(retain, nonatomic) UIView *successView; // @synthesize successView=_successView;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) double tolerateTimeout; // @synthesize tolerateTimeout=_tolerateTimeout;
- (void)skipTapped:(id)arg1;
- (void)splashTapped;
- (void)startTrackView:(id)arg1;
- (void)tapLogo;
- (double)tolerateTimeoutDetachNativehanderTime;
- (double)tolerateTimeoutNativeTotalTime;
- (void)updateMuteButtonWithMute:(_Bool)arg1;
- (void)updateNewMaterialAndView;
- (void)updateSplashTypeWithModel:(id)arg1;
- (void)updateViewWithModel:(id)arg1;
- (void)win:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
