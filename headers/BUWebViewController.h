//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUWKWebViewClientResponseDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class BUAdSlot, BUDislikeContext, BUWKWebViewClient, BUWebViewControllerViewModel, BUWebViewProgressView, NSDictionary, NSString;

@interface BUWebViewController : UIViewController <UIScrollViewDelegate, BUWKWebViewClientResponseDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _hasWebViewBeginDrag;
    _Bool _hasNotifyForAnchor;
    CDUnknownBlockType _webViewNotifyForAnchor;
    double _videoViewHeight;
    BUWebViewControllerViewModel *_webViewModel;
    BUDislikeContext *_dislikeContext;
    struct CGPoint _startScrollOffset;
    struct BUWebViewClickStruct _indexClick;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock;
@property(retain, nonatomic) BUAdSlot *adSlot;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (void)bu_loadRequest:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool hasEnterBackground;
@property(copy, nonatomic) CDUnknownBlockType hasLoadLubanListPage;
@property(nonatomic) _Bool hasNotifyForAnchor; // @synthesize hasNotifyForAnchor=_hasNotifyForAnchor;
@property(nonatomic) _Bool hasWebViewBeginDrag; // @synthesize hasWebViewBeginDrag=_hasWebViewBeginDrag;
- (void)hideCloseButton;
@property(nonatomic) struct BUWebViewClickStruct indexClick; // @synthesize indexClick=_indexClick;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4;
- (id)initWithRequestURL:(id)arg1 adinfo:(id)arg2 size:(struct CGSize)arg3 isNavBarHidden:(_Bool)arg4 isNativeExpress:(_Bool)arg5 pageType:(unsigned long long)arg6;
@property(nonatomic) _Bool isLuban;
@property(nonatomic) _Bool isNavBarHidden;
@property(copy, nonatomic) CDUnknownBlockType loadLubanJsonFail;
@property(copy, nonatomic) NSDictionary *luban_json;
- (_Bool)needPlayableSDKWithMeta:(id)arg1 pageType:(unsigned long long)arg2;
- (long long)preferredInterfaceOrientationForPresentation;
@property(retain, nonatomic) BUWebViewProgressView *progressView;
@property(retain, nonatomic) NSDictionary *relatedMaterialMeta;
- (void)responseView:(id)arg1 hitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(nonatomic) struct CGSize size;
@property(nonatomic) struct CGPoint startScrollOffset; // @synthesize startScrollOffset=_startScrollOffset;
@property(nonatomic) double videoViewHeight; // @synthesize videoViewHeight=_videoViewHeight;
@property(copy, nonatomic) NSString *webTitle;
@property(retain, nonatomic) BUWKWebViewClient *webView;
@property(retain, nonatomic) BUWebViewControllerViewModel *webViewModel; // @synthesize webViewModel=_webViewModel;
@property(copy, nonatomic) CDUnknownBlockType webViewNotifyForAnchor; // @synthesize webViewNotifyForAnchor=_webViewNotifyForAnchor;
- (_Bool)shouldAutorotate;
- (void)showCloseButton;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

