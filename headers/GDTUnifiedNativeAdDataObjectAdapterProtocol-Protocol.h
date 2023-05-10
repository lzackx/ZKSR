//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTUnifiedNativeAdDataObject, GDTVideoConfig, NSArray, NSNumber, NSString, UIView, UIViewController;
@protocol GDTUnifiedNativeAdDataObjectAdapterProtocol, GDTUnifiedNativeAdDataObjectConnectorProtocol;

@protocol GDTUnifiedNativeAdDataObjectAdapterProtocol <NSObject>
@property(readonly, nonatomic) NSNumber *appPrice;
@property(readonly, nonatomic) double appRating;
@property(readonly, copy, nonatomic) NSString *desc;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) long long eCPM;
@property(readonly, copy, nonatomic) NSString *iconUrl;
@property(readonly, nonatomic) long long imageHeight;
@property(readonly, copy, nonatomic) NSString *imageUrl;
@property(readonly, nonatomic) long long imageWidth;
@property(readonly, nonatomic) _Bool isAppAd;
@property(readonly, nonatomic) _Bool isThreeImgsAd;
@property(readonly, nonatomic) _Bool isVideoAd;
@property(readonly, copy, nonatomic) NSArray *mediaUrlList;
@property(retain, nonatomic) GDTVideoConfig *videoConfig;
@property(readonly, copy, nonatomic) NSString *title;

@optional
@property(readonly, copy, nonatomic) NSString *buttonText;
@property(readonly, copy, nonatomic) NSString *callToAction;
- (void)didRecordImpression;
@property(readonly, copy, nonatomic) NSString *eCPMLevel;
- (_Bool)equalsAdData:(id <GDTUnifiedNativeAdDataObjectAdapterProtocol>)arg1;
- (id)initWithUnifiedNativeAdDataObject:(GDTUnifiedNativeAdDataObject *)arg1;
@property(readonly, nonatomic) _Bool isVastAd;
@property(readonly, nonatomic) _Bool isWechatCanvasAd;
- (_Bool)needsToDetectExposure;
- (void)registerClickableCallToActionView:(UIView *)arg1;
- (void)registerConnector:(id <GDTUnifiedNativeAdDataObjectConnectorProtocol>)arg1 clickableViews:(NSArray *)arg2;
- (void)setRootViewController:(UIViewController *)arg1;
@property(readonly, nonatomic) _Bool skippable;
- (void)unregisterView;
@property(readonly, copy, nonatomic) NSString *vastContent;
@property(readonly, copy, nonatomic) NSString *vastTagUrl;
@end
