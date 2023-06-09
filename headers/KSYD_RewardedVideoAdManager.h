//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUNativeExpressRewardedVideoAdDelegate-Protocol.h"
#import "GADFullScreenContentDelegate-Protocol.h"
#import "GDTRewardedVideoAdDelegate-Protocol.h"
#import "KSRewardedVideoAdDelegate-Protocol.h"
#import "KSYD_RewardedVideoAdManagerDelegate-Protocol.h"

@class BUNativeExpressRewardedVideoAd, GADRewardedAd, GDTRewardVideoAd, KSRewardedVideoAd, NSString;
@protocol KSYD_RewardedVideoAdManagerDelegate;

@interface KSYD_RewardedVideoAdManager : NSObject <GADFullScreenContentDelegate, BUNativeExpressRewardedVideoAdDelegate, GDTRewardedVideoAdDelegate, KSRewardedVideoAdDelegate, KSYD_RewardedVideoAdManagerDelegate>
{
    _Bool _isPrelaodStatus;
    _Bool _getReward;
    id <KSYD_RewardedVideoAdManagerDelegate> _mydelegate;
    BUNativeExpressRewardedVideoAd *_BUADrewardedVideoAd;
    GDTRewardVideoAd *_GDTrewardVideoAd;
    GADRewardedAd *_GADrewardedAd;
    KSRewardedVideoAd *_KSRewardedVideoAd;
    long long _ADFailIndex;
}

+ (id)instance;
- (void).cxx_destruct;
@property(nonatomic) long long ADFailIndex; // @synthesize ADFailIndex=_ADFailIndex;
@property(retain, nonatomic) BUNativeExpressRewardedVideoAd *BUADrewardedVideoAd; // @synthesize BUADrewardedVideoAd=_BUADrewardedVideoAd;
- (void)ClearRewardADCache;
@property(retain, nonatomic) GADRewardedAd *GADrewardedAd; // @synthesize GADrewardedAd=_GADrewardedAd;
@property(retain, nonatomic) GDTRewardVideoAd *GDTrewardVideoAd; // @synthesize GDTrewardVideoAd=_GDTrewardVideoAd;
@property(retain, nonatomic) KSRewardedVideoAd *KSRewardedVideoAd; // @synthesize KSRewardedVideoAd=_KSRewardedVideoAd;
- (void)LoadAndShowRewardVideoAD;
- (void)LoadRewardVideoAD:(_Bool)arg1;
- (void)PreloadRewardVideoADWithStatus:(_Bool)arg1;
- (void)ShowRewardVideoADWithPlatForm:(id)arg1;
- (void)ad:(id)arg1 didFailToPresentFullScreenContentWithError:(id)arg2;
- (void)adDidDismissFullScreenContent:(id)arg1;
- (void)adDidPresentFullScreenContent:(id)arg1;
- (_Bool)checkRewardAdDataValid;
- (void)gdt_rewardVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)gdt_rewardVideoAdDidClicked:(id)arg1;
- (void)gdt_rewardVideoAdDidClose:(id)arg1;
- (void)gdt_rewardVideoAdDidExposed:(id)arg1;
- (void)gdt_rewardVideoAdDidLoad:(id)arg1;
- (void)gdt_rewardVideoAdDidPlayFinish:(id)arg1;
- (void)gdt_rewardVideoAdDidRewardEffective:(id)arg1 info:(id)arg2;
- (void)gdt_rewardVideoAdVideoDidLoad:(id)arg1;
- (void)gdt_rewardVideoAdWillVisible:(id)arg1;
@property(nonatomic) _Bool getReward; // @synthesize getReward=_getReward;
@property(nonatomic) _Bool isPrelaodStatus; // @synthesize isPrelaodStatus=_isPrelaodStatus;
@property(nonatomic) __weak id <KSYD_RewardedVideoAdManagerDelegate> mydelegate; // @synthesize mydelegate=_mydelegate;
- (void)nativeExpressRewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressRewardedVideoAdDidClick:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClickSkip:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidDownLoadVideo:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidLoad:(id)arg1;
- (void)nativeExpressRewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeExpressRewardedVideoAdDidVisible:(id)arg1;
- (void)nativeExpressRewardedVideoAdServerRewardDidFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressRewardedVideoAdServerRewardDidSucceed:(id)arg1 verify:(_Bool)arg2;
- (void)nativeExpressRewardedVideoAdViewRenderFail:(id)arg1 error:(id)arg2;
- (void)nativeExpressRewardedVideoAdViewRenderSuccess:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillClose:(id)arg1;
- (void)nativeExpressRewardedVideoAdWillVisible:(id)arg1;
- (void)requestRewardedVideo;
- (void)rewardedVideoAd:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAd:(id)arg1 hasReward:(_Bool)arg2;
- (void)rewardedVideoAdDidClick:(id)arg1;
- (void)rewardedVideoAdDidClickSkip:(id)arg1;
- (void)rewardedVideoAdDidClose:(id)arg1;
- (void)rewardedVideoAdDidLoad:(id)arg1;
- (void)rewardedVideoAdDidPlayFinish:(id)arg1 didFailWithError:(id)arg2;
- (void)rewardedVideoAdDidVisible:(id)arg1;
- (void)rewardedVideoAdStartPlay:(id)arg1;
- (void)rewardedVideoAdVideoDidLoad:(id)arg1;
- (void)rewardedVideoAdWillClose:(id)arg1;
- (void)rewardedVideoAdWillVisible:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

