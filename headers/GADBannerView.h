//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADAdSizeDelegate-Protocol.h"
#import "GADAdSizeDelegatePreview-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"

@class GADInternalBannerView, GADRequest, GADResponseInfo, NSString, UIViewController;
@protocol GADAdSizeDelegate, GADBannerViewDelegate;

@interface GADBannerView : UIView <GADBannerViewDelegate, GADAdSizeDelegate, GADAdSizeDelegatePreview>
{
    GADRequest *_lastRequest;
    _Bool _hasInitialized;
    _Bool _autoloadEnabled;
    id <GADBannerViewDelegate> _delegate;
    id <GADAdSizeDelegate> _adSizeDelegate;
    GADInternalBannerView *_bannerView;
    struct GADAdSize _adSize;
}

+ (Class)bannerViewClass;
- (void).cxx_destruct;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @synthesize adSizeDelegate=_adSizeDelegate;
- (struct GADAdSize)adSizeForSize:(struct CGSize)arg1;
@property(copy, nonatomic) NSString *adUnitID;
- (void)adView:(id)arg1 willChangeAdSizeTo:(struct GADAdSize)arg2;
- (void)adViewIntrinsicContentSizeDidChange:(id)arg1;
@property(readonly, nonatomic) GADInternalBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)bannerView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)bannerViewDidDismissScreen:(id)arg1;
- (void)bannerViewDidReceiveAd:(id)arg1;
- (void)bannerViewDidRecordClick:(id)arg1;
- (void)bannerViewDidRecordImpression:(id)arg1;
- (void)bannerViewWillDismissScreen:(id)arg1;
- (void)bannerViewWillPresentScreen:(id)arg1;
- (void)commonInit;
@property(nonatomic) __weak id <GADBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)initWithAdSize:(struct GADAdSize)arg1 ad:(id)arg2 responseInfo:(id)arg3;
- (id)initWithAdSize:(struct GADAdSize)arg1 origin:(struct CGPoint)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic, getter=isAutoloadEnabled) _Bool autoloadEnabled; // @synthesize autoloadEnabled=_autoloadEnabled;
- (void)loadRequest:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler;
- (void)resize:(struct GADAdSize)arg1;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
@property(nonatomic) __weak UIViewController *rootViewController;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeForAdSize:(struct GADAdSize)arg1;
- (void)updateReceivedAdSizeWithPublicUpdate:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

