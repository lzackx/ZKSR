//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicRenderStrategy.h"

#import "BUWebViewDelegate-Protocol.h"
#import "BUWebViewDynamicRenderInterface-Protocol.h"

@class BUTimer, BUWKWebViewClient, BUWebViewOwner, NSDictionary, NSMutableDictionary, NSString, UIView;
@protocol BUWebViewDynamicRenderDelegate;

@interface BUDynamicRenderTemplateStrategy : BUDynamicRenderStrategy <BUWebViewDelegate, BUWebViewDynamicRenderInterface>
{
    _Bool _haveDetectBlank;
    id <BUWebViewDynamicRenderDelegate> implementation_delegate;
    BUWebViewOwner *_webViewOwner;
    BUWKWebViewClient *_webview;
    NSDictionary *_relatedMaterialMetaJSON;
    BUTimer *_renderTimer;
    BUTimer *_retryTimer;
    NSMutableDictionary *_webview_time_trackDictionary;
    UIView *_dialogView;
}

- (void).cxx_destruct;
- (void)_onDialogCloseButton;
- (void)_showDialogWithContent:(id)arg1;
- (void)addReopenSKOverlayObserver;
- (id)buJSB3_adInfoDialogWithViewModel:(id)arg1;
- (id)buJSB3_adInfoWithViewModel:(id)arg1;
- (id)buJSB3_changeVideoStateWithViewModel:(id)arg1;
- (id)buJSB3_clickEventWithViewModel:(id)arg1;
- (id)buJSB3_dynamicTrackWithViewModel:(id)arg1;
- (id)buJSB3_getCurrentVideoStateWithViewModel:(id)arg1;
- (id)buJSB3_getMaterialMetaWithViewModel:(id)arg1;
- (id)buJSB3_getTemplateInfoWithViewModel:(id)arg1;
- (id)buJSB3_immersiveVideoPageBackWithViewModel:(id)arg1;
- (id)buJSB3_interactiveFinishWithViewModel:(id)arg1;
- (id)buJSB3_interstitial_webview_closeWithViewModel:(id)arg1;
- (id)buJSB3_muteVideoWithViewModel:(id)arg1;
- (id)buJSB3_openPlayableWithViewModel:(id)arg1;
- (id)buJSB3_openPrivacyWithViewModel:(id)arg1;
- (id)buJSB3_preventTouchEventWithViewModel:(id)arg1;
- (id)buJSB3_renderDidFinishWithViewModel:(id)arg1;
- (id)buJSB3_show_skoverlayWithViewModel:(id)arg1;
- (id)buJSB3_skipVideoWithViewModel:(id)arg1;
- (id)buJSB3_webview_time_trackWithViewModel:(id)arg1;
- (void)connectionChanged:(id)arg1;
- (void)dealloc;
- (void)detectBlankIfNeed;
@property(retain, nonatomic) UIView *dialogView; // @synthesize dialogView=_dialogView;
- (void)fireEventRelatedMaterialMeta;
@property(nonatomic) _Bool haveDetectBlank; // @synthesize haveDetectBlank=_haveDetectBlank;
@property(nonatomic) __weak id <BUWebViewDynamicRenderDelegate> implementation_delegate; // @synthesize implementation_delegate;
- (long long)implementation_renderIndex;
- (void)implementation_render_really;
- (double)implementation_timeOut;
- (id)initWithInfoViewModel:(id)arg1 containerView:(id)arg2;
- (id)jsCallNative_dynamicTrackWithParams:(id)arg1;
- (id)jsCallNative_interactiveFinishWithParams:(id)arg1;
- (void)jsCallNative_openPlayableWithParams:(id)arg1;
- (void)jsCallNative_preventTouchEventWithParams:(id)arg1;
- (id)jsCallNative_renderDidFinishWithParams:(id)arg1;
- (void)jsCallNative_webview_time_trackWithParams:(id)arg1;
- (id)logKeyName;
- (double)memoryUsedPercent;
- (void)pbu_playableRecycle;
- (void)pbu_renderEndWithSuccessView:(id)arg1 error:(id)arg2;
- (void)pbu_resetAndTrigger;
- (void)refreshWKWebViewIfNeed;
- (void)registJS_ClientData;
- (void)registRenderDidFinish;
- (void)registVideoInfo;
- (void)registerAdInfo;
- (void)registerClickEvent;
- (void)registerDynamicTrack;
- (void)registerGetTemplateInfo;
- (void)registerInterstitialWebViewClose;
- (void)registerJSBridge3;
- (void)registerJsBridge;
- (void)registerMiddlePageJSBridge;
- (void)registerOpenPlayable;
- (void)registerOpenPrivacy;
- (void)registerOpenSKOverlay;
- (void)registerPreventTouchEvent;
- (void)registerWebview_time_track;
@property(copy, nonatomic) NSDictionary *relatedMaterialMetaJSON; // @synthesize relatedMaterialMetaJSON=_relatedMaterialMetaJSON;
- (void)render;
@property(retain, nonatomic) BUTimer *renderTimer; // @synthesize renderTimer=_renderTimer;
- (void)renderTimerAction;
- (long long)renderType;
- (void)render_really;
- (void)reopenSKoverlay;
- (void)reportExpressAdShowWithBool:(_Bool)arg1;
- (void)reportMaterialMetaIfNeedWithRelatedMaterialMetaJson:(id)arg1;
- (void)reportShowEventIfNeed;
@property(retain, nonatomic) BUTimer *retryTimer; // @synthesize retryTimer=_retryTimer;
- (void)retryTimerAction;
- (void)safeImplementationDelegate_dynamicRenderTemplateStrategyDidRender:(id)arg1;
- (void)safeImplementationDelegate_dynamicRenderTemplateStrategyWillRender:(id)arg1;
- (void)sendPlayableStateChange:(_Bool)arg1;
- (void)sendShowSkipInLiveScene:(_Bool)arg1;
- (void)sendTrackDataFromURLString:(id)arg1;
@property(retain, nonatomic) BUWebViewOwner *webViewOwner; // @synthesize webViewOwner=_webViewOwner;
@property(retain, nonatomic) BUWKWebViewClient *webview; // @synthesize webview=_webview;
@property(retain, nonatomic) NSMutableDictionary *webview_time_trackDictionary; // @synthesize webview_time_trackDictionary=_webview_time_trackDictionary;
- (void)setupViewWithFrame:(struct CGRect)arg1;
- (void)startRenderTimerWithTimeInterval:(double)arg1;
- (void)startRetryTimer;
- (void)stopRenderTimer;
- (void)stopRetryTimer;
- (double)timeOut;
- (void)updateWithThemeStatus:(long long)arg1;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

