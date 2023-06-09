//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTNativeExpressAdImpDelegate-Protocol.h"

@class GDTLoadAdParams, NSString;
@protocol GDTNativeExpressAdDelegete, GDTNativeExpressAdImpProtocol;

@interface GDTNativeExpressAd : NSObject <GDTNativeExpressAdImpDelegate>
{
    _Bool _videoAutoPlayOnWWAN;
    _Bool _videoMuted;
    _Bool _detailPageVideoMuted;
    id <GDTNativeExpressAdDelegete> _delegate;
    NSString *_placementId;
    id <GDTNativeExpressAdImpProtocol> _mediator;
}

- (void).cxx_destruct;
- (void)GDTfunctiona3wv7T:(id)arg1 playerStatusChanged:(unsigned long long)arg2;
- (void)GDTfunctionb5olEj:(id)arg1;
- (void)GDTfunctionb644Ju:(id)arg1;
- (void)GDTfunctionc6hKrg:(id)arg1;
- (void)GDTfunctionf8GZY2:(id)arg1;
- (void)GDTfunctionj2ELC7:(id)arg1;
- (void)GDTfunctionj2QfPX:(id)arg1;
- (void)GDTfunctionj5dN2i:(id)arg1 views:(id)arg2;
- (void)GDTfunctionk5jtty:(id)arg1;
- (void)GDTfunctionm3BuKP:(id)arg1;
- (void)GDTfunctionn8r3kZ:(id)arg1 error:(id)arg2;
- (void)GDTfunctionp1OVjG:(id)arg1;
- (void)GDTfunctionq3s08J:(id)arg1;
- (void)GDTfunctionq8ai91:(id)arg1;
- (void)GDTfunctionr1TPmg:(id)arg1;
- (void)GDTfunctionr6SOGa:(id)arg1;
- (void)GDTfunctionv5XsUO:(id)arg1;
- (id)adNetworkName;
@property(nonatomic) __weak id <GDTNativeExpressAdDelegete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool detailPageVideoMuted; // @synthesize detailPageVideoMuted=_detailPageVideoMuted;
- (id)initWithAppId:(id)arg1 placementId:(id)arg2 adSize:(struct CGSize)arg3;
- (id)initWithPlacementId:(id)arg1 adSize:(struct CGSize)arg2;
- (id)initWithPlacementId:(id)arg1 s2sToken:(id)arg2 isFromS2S:(_Bool)arg3;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2 adSize:(struct CGSize)arg3;
- (void)loadAd:(long long)arg1;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(nonatomic) long long maxVideoDuration;
@property(retain, nonatomic) id <GDTNativeExpressAdImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(nonatomic) long long minVideoDuration;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
- (void)setBidECPM:(long long)arg1;
@property(nonatomic) _Bool videoAutoPlayOnWWAN; // @synthesize videoAutoPlayOnWWAN=_videoAutoPlayOnWWAN;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

