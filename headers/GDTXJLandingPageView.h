//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTVideoEndcardAppearanceProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdWKWebView, GDTJsRequest, NSString, UIViewController;

@interface GDTXJLandingPageView : UIView <GDTWebViewDelegate, GDTVideoEndcardAppearanceProtocol>
{
    GDTAdBaseModel *_adModel;
    NSString *_xjLandingPageUrl;
    CDUnknownBlockType _loadFailureCallback;
    CDUnknownBlockType _loadSuccessCallback;
    CDUnknownBlockType _jumpToAppstoreCallback;
    CDUnknownBlockType _deepLinkCallback;
    unsigned long long status;
    GDTAdWKWebView *_webView;
    GDTJsRequest *_jumpToAppstoreJsRequest;
}

- (void).cxx_destruct;
- (_Bool)GDTfunctionm55QS3:(id)arg1 GDTfunctionh6AJjU:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctionm55QS3:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 handleJsRequest:(id)arg2;
- (id)GDTfunctionn4AlYP:(_Bool)arg1 error:(id)arg2;
- (void)GDTfunctionu6mbjt:(_Bool)arg1 error:(id)arg2;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(copy, nonatomic) CDUnknownBlockType deepLinkCallback; // @synthesize deepLinkCallback=_deepLinkCallback;
- (_Bool)goBack;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType jumpToAppstoreCallback; // @synthesize jumpToAppstoreCallback=_jumpToAppstoreCallback;
@property(retain, nonatomic) GDTJsRequest *jumpToAppstoreJsRequest; // @synthesize jumpToAppstoreJsRequest=_jumpToAppstoreJsRequest;
@property(copy, nonatomic) CDUnknownBlockType loadFailureCallback; // @synthesize loadFailureCallback=_loadFailureCallback;
- (void)loadRequest;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessCallback; // @synthesize loadSuccessCallback=_loadSuccessCallback;
@property(nonatomic) unsigned long long status; // @synthesize status;
@property(retain, nonatomic) GDTAdWKWebView *webView; // @synthesize webView=_webView;
@property(copy, nonatomic) NSString *xjLandingPageUrl; // @synthesize xjLandingPageUrl=_xjLandingPageUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType endCardBodyClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardCloseButtonClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardReplayButtonClickedCallback;
@property(nonatomic) _Bool hasExposured;
@property(readonly) unsigned long long hash;
@property(nonatomic) long long playBeginTime;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(readonly) Class superclass;

@end

