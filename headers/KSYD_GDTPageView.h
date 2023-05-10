//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTNativeExpressAdDelegete-Protocol.h"
#import "KSYD_GDTPageViewDelegate-Protocol.h"

@class GDTNativeExpressAd, GDTNativeExpressAdView, KSYD_AdvertConfigModel, KSYD_ReaderSettings, NSArray, NSString;
@protocol KSYD_GDTPageViewDelegate;

@interface KSYD_GDTPageView : UIView <GDTNativeExpressAdDelegete, KSYD_GDTPageViewDelegate>
{
    GDTNativeExpressAdView *_nativeExpressAdView;
    GDTNativeExpressAd *_nativeExpressAd;
    KSYD_AdvertConfigModel *_ADModel;
    id <KSYD_GDTPageViewDelegate> _mydelegate;
    NSArray *_expressAdViews;
    KSYD_ReaderSettings *_settings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KSYD_AdvertConfigModel *ADModel; // @synthesize ADModel=_ADModel;
- (void)dealloc;
@property(retain, nonatomic) NSArray *expressAdViews; // @synthesize expressAdViews=_expressAdViews;
- (id)getRootNavController;
- (void)initNativeBanner;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <KSYD_GDTPageViewDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
@property(retain, nonatomic) GDTNativeExpressAd *nativeExpressAd; // @synthesize nativeExpressAd=_nativeExpressAd;
- (void)nativeExpressAdFailToLoad:(id)arg1 error:(id)arg2;
- (void)nativeExpressAdRenderFail:(id)arg1;
- (void)nativeExpressAdSuccessToLoad:(id)arg1 views:(id)arg2;
@property(retain, nonatomic) GDTNativeExpressAdView *nativeExpressAdView; // @synthesize nativeExpressAdView=_nativeExpressAdView;
- (void)nativeExpressAdViewClicked:(id)arg1;
- (void)nativeExpressAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressAdViewWillDissmissScreen:(id)arg1;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

