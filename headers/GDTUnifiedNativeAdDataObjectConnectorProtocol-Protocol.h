//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTLogoView, GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdView, NSDictionary, UIView;
@protocol GDTMediaViewConnectorProtocol, GDTUnifiedNativeAdDataObjectAdapterProtocol;

@protocol GDTUnifiedNativeAdDataObjectConnectorProtocol <NSObject>
@property(readonly, nonatomic) GDTLogoView *logoView;
@property(readonly, nonatomic) UIView<GDTMediaViewConnectorProtocol> *mediaView;
@property(readonly, nonatomic) GDTUnifiedNativeAdView *unifiedNativeAdView;

@optional
- (void)adapter_unifiedNativeAdDetailViewClosed:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (void)adapter_unifiedNativeAdDetailViewWillPresentScreen:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (void)adapter_unifiedNativeAdView:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1 originDataObject:(GDTUnifiedNativeAdDataObject *)arg2 vastAdEventType:(long long)arg3;
- (void)adapter_unifiedNativeAdView:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1 playerStatusChanged:(unsigned long long)arg2 userInfo:(NSDictionary *)arg3;
- (void)adapter_unifiedNativeAdViewApplicationWillEnterBackground:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (void)adapter_unifiedNativeAdViewDidClick:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (void)adapter_unifiedNativeAdViewWillExpose:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)relatedDataObject;
@end

