//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BUDislikeButton, BUNativeExpressAdView, BUNativeExpressInterstitialAd, NSDate;

@interface BUNativeExpressInterstitialAdViewController : UIViewController
{
    BUNativeExpressInterstitialAd *_interstitialAd;
    BUNativeExpressAdView *_interstitialAdView;
    BUDislikeButton *_closeButton;
    double _viewDidAllVisibleTime;
    NSDate *_didEnterBackgroundDate;
    NSDate *_willEnterForegroundDate;
    struct CGSize _adSize;
}

- (void).cxx_destruct;
- (void)_applicationDidEnterBackground;
- (void)_applicationWillEnterForeground;
@property(nonatomic) struct CGSize adSize; // @synthesize adSize=_adSize;
- (void)buidupViews;
- (id)c_xyDictWithTouchObject:(id)arg1;
@property(retain, nonatomic) BUDislikeButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonTapped:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSDate *didEnterBackgroundDate; // @synthesize didEnterBackgroundDate=_didEnterBackgroundDate;
- (id)initViewControllerWithExpressAdView:(id)arg1 adSize:(struct CGSize)arg2;
@property(retain, nonatomic) BUNativeExpressInterstitialAd *interstitialAd; // @synthesize interstitialAd=_interstitialAd;
@property(retain, nonatomic) BUNativeExpressAdView *interstitialAdView; // @synthesize interstitialAdView=_interstitialAdView;
@property(nonatomic) double viewDidAllVisibleTime; // @synthesize viewDidAllVisibleTime=_viewDidAllVisibleTime;
@property(retain, nonatomic) NSDate *willEnterForegroundDate; // @synthesize willEnterForegroundDate=_willEnterForegroundDate;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

