//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GDTLoadAdParams, GDTSplashAd, GDTSplashZoomOutView, NSDictionary, NSString, UIColor, UIImage, UIView, UIWindow;
@protocol GDTSplashAdDelegate><GDTSplashZoomOutViewDelegate;

@protocol GDTSplashAdImpProtocol <NSObject>
@property(copy, nonatomic) NSString *adNetworkName;
@property(copy, nonatomic) UIColor *backgroundColor;
@property(retain, nonatomic) UIImage *backgroundImage;
@property(nonatomic) __weak id <GDTSplashAdDelegate><GDTSplashZoomOutViewDelegate> delegate;
- (long long)eCPM;
- (NSString *)eCPMLevel;
@property(nonatomic) double fetchDelay;
- (id)initWithPlacementId:(NSString *)arg1;
- (id)initWithPlacementId:(NSString *)arg1 serverType:(long long)arg2;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) _Bool loading;
@property(retain, nonatomic) NSDictionary *mediationExtDict;
@property(nonatomic) _Bool needZoomOut;
@property(copy, nonatomic) NSString *placementId;
@property(nonatomic) struct CGPoint skipButtonCenter;
@property(nonatomic) __weak GDTSplashAd *splashAd;
@property(retain, nonatomic) GDTSplashZoomOutView *splashZoomOutView;

@optional
- (NSDictionary *)GDTfunctions7xy7p;
- (_Bool)isAdValid;
- (void)loadAd:(_Bool)arg1;
- (void)showAdInWindow:(UIWindow *)arg1 adProviderView:(UIView *)arg2 skipView:(UIView *)arg3;
@end
