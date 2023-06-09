//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GDTHandlerContextProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdWKWebView, NSString;
@protocol GDTWebViewControllerDelegate;

@interface GDTWebViewController : UIViewController <GDTWebViewDelegate, GDTHandlerContextProtocol>
{
    _Bool _shouldAutoTurn;
    NSString *_url;
    UIViewController *_rootViewController;
    id <GDTWebViewControllerDelegate> _delegate;
    long long _initialOrientation;
    GDTAdWKWebView *_webView;
}

- (void).cxx_destruct;
- (void)GDTfunctiona9UTIk;
- (void)GDTfunctionh2lw0Y:(id)arg1;
- (void)GDTfunctionm55QS3:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctionm55QS3:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctionm55QS3:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 didReceiveServerRedirectForProvisionalNavigation:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)GDTfunctionm9xuKL:(id)arg1;
- (void)GDTfunctionr42Fxo;
- (void)GDTfunctionw3oiog;
- (void)GDTfunctiony28bK0;
- (void)GDTfunctiony3HbPY:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <GDTWebViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(nonatomic) long long initialOrientation; // @synthesize initialOrientation=_initialOrientation;
- (void)loadRequest;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) _Bool shouldAutoTurn; // @synthesize shouldAutoTurn=_shouldAutoTurn;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) GDTAdWKWebView *webView; // @synthesize webView=_webView;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

