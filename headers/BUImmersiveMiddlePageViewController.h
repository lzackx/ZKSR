//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUImmersiveMiddleExpressDelegate-Protocol.h"

@class BUImmersiveMiddleExpressUtility, BUNativeAd, BUNativeExpressAdView, NSString;

@interface BUImmersiveMiddlePageViewController : UIViewController <BUImmersiveMiddleExpressDelegate>
{
    _Bool _renderImmersiveTemplateSuccesss;
    _Bool _middlePageViewDidAppear;
    CDUnknownBlockType _CloseBlock;
    BUNativeAd *_nativeAd;
    BUImmersiveMiddleExpressUtility *_middleExpressManager;
    BUNativeExpressAdView *_expressAdView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock; // @synthesize CloseBlock=_CloseBlock;
- (void)closeVideoDetailView;
@property(retain, nonatomic) BUNativeExpressAdView *expressAdView; // @synthesize expressAdView=_expressAdView;
- (void)gotDetailPageWith:(id)arg1;
- (id)initImmersiveMiddlePageWith:(id)arg1;
@property(retain, nonatomic) BUImmersiveMiddleExpressUtility *middleExpressManager; // @synthesize middleExpressManager=_middleExpressManager;
- (void)middlePageVideoDetailBackup;
@property(nonatomic) _Bool middlePageViewDidAppear; // @synthesize middlePageViewDidAppear=_middlePageViewDidAppear;
- (void)middleRenderFailBackup;
- (void)middleRenderSuccess:(id)arg1;
@property(retain, nonatomic) BUNativeAd *nativeAd; // @synthesize nativeAd=_nativeAd;
- (void)nativeExpressView:(id)arg1 creativeClickWithMaterial:(id)arg2;
- (void)nativeExpressViewImmersiveMiddlePageBack:(id)arg1;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) _Bool renderImmersiveTemplateSuccesss; // @synthesize renderImmersiveTemplateSuccesss=_renderImmersiveTemplateSuccesss;
- (_Bool)shouldAutorotate;
- (void)showImmersiveMiddlePage;
- (void)showStoreProductWithAppID:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

