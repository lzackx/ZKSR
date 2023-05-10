//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class KSSplashAdView, NSError;

@protocol KSSplashAdViewDelegate <NSObject>

@optional
- (void)ksad_splashAd:(KSSplashAdView *)arg1 didClick:(_Bool)arg2;
- (void)ksad_splashAd:(KSSplashAdView *)arg1 didFailWithError:(NSError *)arg2;
- (void)ksad_splashAd:(KSSplashAdView *)arg1 didSkip:(double)arg2;
- (void)ksad_splashAd:(KSSplashAdView *)arg1 willMoveTo:(inout struct CGRect *)arg2;
- (void)ksad_splashAd:(KSSplashAdView *)arg1 willZoomTo:(inout struct CGRect *)arg2;
- (void)ksad_splashAdContentDidLoad:(KSSplashAdView *)arg1;
- (void)ksad_splashAdDidAutoDismiss:(KSSplashAdView *)arg1;
- (void)ksad_splashAdDidClose:(KSSplashAdView *)arg1;
- (void)ksad_splashAdDidCloseConversionVC:(KSSplashAdView *)arg1 interactionType:(long long)arg2;
- (void)ksad_splashAdDidLoad:(KSSplashAdView *)arg1;
- (void)ksad_splashAdDidOpenConversionVC:(KSSplashAdView *)arg1 interactionType:(long long)arg2;
- (void)ksad_splashAdDidVisible:(KSSplashAdView *)arg1;
- (void)ksad_splashAdVideoDidBeginPlay:(KSSplashAdView *)arg1;
@end
