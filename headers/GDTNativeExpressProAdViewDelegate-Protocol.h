//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTNativeExpressProAdView;

@protocol GDTNativeExpressProAdViewDelegate <NSObject>

@optional
- (void)gdt_NativeExpressProAdView:(GDTNativeExpressProAdView *)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)gdt_NativeExpressProAdViewApplicationWillEnterBackground:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewClicked:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewClosed:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewDidDismissVideoVC:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewDidDissmissScreen:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentScreen:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewDidPresentVideoVC:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewExposure:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewRenderFail:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewRenderSuccess:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewVideoDidFinished:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewWillDismissVideoVC:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewWillDissmissScreen:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentScreen:(GDTNativeExpressProAdView *)arg1;
- (void)gdt_NativeExpressProAdViewWillPresentVideoVC:(GDTNativeExpressProAdView *)arg1;
@end

