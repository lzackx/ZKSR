//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTLoadAdParams, NSString;
@protocol GDTUnifiedBannerViewDelegate, GDTUnifiedBannerViewImpProtocol;

@interface GDTUnifiedBannerView : UIView
{
    NSString *_placementId;
    id <GDTUnifiedBannerViewImpProtocol> _mediator;
}

- (void).cxx_destruct;
- (id)GDTfunctions7xy7p;
- (id)adNetworkName;
@property(nonatomic) _Bool animated;
@property(nonatomic) int autoSwitchInterval;
@property(nonatomic) __weak id <GDTUnifiedBannerViewDelegate> delegate;
- (long long)eCPM;
- (id)eCPMLevel;
- (id)initWithFrame:(struct CGRect)arg1 placementId:(id)arg2 s2sToken:(id)arg3 isFromS2S:(_Bool)arg4 viewController:(id)arg5;
- (id)initWithFrame:(struct CGRect)arg1 placementId:(id)arg2 viewController:(id)arg3;
- (id)initWithPlacementId:(id)arg1 token:(id)arg2 viewController:(id)arg3;
- (id)initWithPlacementId:(id)arg1 viewController:(id)arg2;
- (void)loadAdAndShow;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams;
@property(retain, nonatomic) id <GDTUnifiedBannerViewImpProtocol> mediator; // @synthesize mediator=_mediator;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
- (void)setBidECPM:(long long)arg1;

@end

