//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTUnifiedInterstitialAdImpDelegate-Protocol.h"

@class GDTLoadAdParams, GDTServerSideVerificationOptions, NSDictionary, NSString;
@protocol GDTUnifiedInterstitialAdDelegate, GDTUnifiedInterstitialAdImpProtocol;

@interface GDTUnifiedInterstitialAd : NSObject <GDTUnifiedInterstitialAdImpDelegate>
{
    id <GDTUnifiedInterstitialAdDelegate> _delegate;
    NSString *_placementId;
    id <GDTUnifiedInterstitialAdImpProtocol> _mediator;
}

- (void).cxx_destruct;
- (void)GDTfunctiona4HlUj:(id)arg1 error:(id)arg2;
- (void)GDTfunctionb5FQTZ:(id)arg1;
- (void)GDTfunctionf1nDgI:(id)arg1;
- (void)GDTfunctiong2snzz:(id)arg1;
- (void)GDTfunctionh8vDrK:(id)arg1;
- (void)GDTfunctioni3WF0o:(id)arg1;
- (void)GDTfunctionj6K3Oc:(id)arg1 info:(id)arg2;
- (void)GDTfunctionk1u7LK:(id)arg1 error:(id)arg2;
- (void)GDTfunctionl5CqJZ:(id)arg1;
- (void)GDTfunctionl5IEgh:(id)arg1;
- (void)GDTfunctionm45Zj4:(id)arg1;
- (void)GDTfunctiono0FIgP:(id)arg1;
- (void)GDTfunctionp2QxAH:(id)arg1;
- (void)GDTfunctionq4SPEr:(id)arg1 error:(id)arg2;
- (void)GDTfunctionq6Q88m:(id)arg1;
- (void)GDTfunctionq97Lm5:(id)arg1;
- (void)GDTfunctionr5oG34:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (id)GDTfunctions7xy7p;
- (void)GDTfunctionv0r4WQ:(id)arg1;
- (void)GDTfunctionw2oTwn:(id)arg1;
- (void)GDTfunctionx1Kani:(id)arg1;
- (void)GDTfunctionx2va85:(id)arg1;
- (void)GDTfunctionx8YQqW:(id)arg1;
- (id)adNetworkName;
@property(nonatomic) __weak id <GDTUnifiedInterstitialAdDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool detailPageVideoMuted;
- (long long)eCPM;
- (id)eCPMLevel;
- (id)initWithAppId:(id)arg1 placementId:(id)arg2;
- (id)initWithPlacementId:(id)arg1;
- (id)initWithPlacementId:(id)arg1 s2sToken:(id)arg2 isFromS2S:(_Bool)arg3;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2;
@property(readonly, nonatomic) _Bool isAdValid;
@property(readonly, nonatomic) _Bool isVideoAd;
- (void)loadAd;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
- (void)loadFullScreenAd;
@property(nonatomic) long long maxVideoDuration;
@property(retain, nonatomic) id <GDTUnifiedInterstitialAdImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(nonatomic) long long minVideoDuration;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (void)presentAdFromRootViewController:(id)arg1;
- (void)presentFullScreenAdFromRootViewController:(id)arg1;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions;
- (void)setBidECPM:(long long)arg1;
@property(retain, nonatomic) NSDictionary *tagDict;
@property(nonatomic) _Bool videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted;
- (double)videoDuration;
- (double)videoPlayTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

