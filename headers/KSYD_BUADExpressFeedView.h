//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BUNativeExpressAdViewDelegate-Protocol.h"

@class BUNativeExpressAdManager, BUNativeExpressAdView, KSYD_AdvertConfigModel, KSYD_ReaderSettings, NSMutableArray, NSString;
@protocol KSYD_BUADExpressFeedViewDelegate;

@interface KSYD_BUADExpressFeedView : UIView <BUNativeExpressAdViewDelegate>
{
    KSYD_AdvertConfigModel *_ADModel;
    id <KSYD_BUADExpressFeedViewDelegate> _mydelegate;
    KSYD_ReaderSettings *_settings;
    BUNativeExpressAdView *_nativeExpressAdView;
    BUNativeExpressAdManager *_nativeExpressAdManager;
    NSString *_ADKey;
    NSMutableArray *_expressAdViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ADKey; // @synthesize ADKey=_ADKey;
@property(retain, nonatomic) KSYD_AdvertConfigModel *ADModel; // @synthesize ADModel=_ADModel;
- (void)ReleaseAdView;
- (void)dealloc;
@property(retain, nonatomic) NSMutableArray *expressAdViews; // @synthesize expressAdViews=_expressAdViews;
- (id)getRootNavController;
- (void)initNativeBanner;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <KSYD_BUADExpressFeedViewDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdManager *nativeExpressAdManager; // @synthesize nativeExpressAdManager=_nativeExpressAdManager;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
@property(retain, nonatomic) BUNativeExpressAdView *nativeExpressAdView; // @synthesize nativeExpressAdView=_nativeExpressAdView;
- (void)nativeExpressAdView:(id)arg1 dislikeWithReason:(id)arg2;
- (void)nativeExpressAdViewDidClick:(id)arg1;
- (void)nativeExpressAdViewDidClosed:(id)arg1;
- (void)nativeExpressAdViewPlayerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillPresentScreen:(id)arg1;
- (void)nativeExpressAdViewWillShow:(id)arg1;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

