//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GDTBaseAdAdapter.h"

#import "GDTRewardVideoAdNetworkAdapterProtocol-Protocol.h"
#import "GDTRewardedVideoAdImpDelegate-Protocol.h"

@class GDTRewardVideoAdImp, GDTRewardVideoAdMediator, GDTServerSideVerificationOptions, NSString;

@interface GDTRewardVideoAdAdapter : GDTBaseAdAdapter <GDTRewardVideoAdNetworkAdapterProtocol, GDTRewardedVideoAdImpDelegate>
{
    GDTServerSideVerificationOptions *_serverSideVerificationOptions;
    GDTRewardVideoAdMediator *_connector;
    GDTRewardVideoAdImp *_rewardVideoAdImp;
}

+ (void)updateAppId:(id)arg1 extStr:(id)arg2;
- (void).cxx_destruct;
- (void)GDTfunctiona8JpLC:(id)arg1;
- (void)GDTfunctionb5z7mC:(id)arg1 info:(id)arg2;
- (void)GDTfunctionh3tJAW:(id)arg1;
- (void)GDTfunctioni3puRx:(id)arg1;
- (void)GDTfunctioni6MBpJ:(id)arg1 didFailWithError:(id)arg2;
- (void)GDTfunctionn0APfn:(id)arg1;
- (void)GDTfunctionr9wjqr:(id)arg1;
- (void)GDTfunctionv8pRzW:(id)arg1;
- (void)GDTfunctionx32sPy:(id)arg1;
- (id)adImp;
@property(nonatomic) __weak GDTRewardVideoAdMediator *connector; // @synthesize connector=_connector;
- (long long)eCPM;
- (id)eCPMLevel;
- (long long)expiredTimestamp;
- (id)initWithAdNetworkConnector:(id)arg1 posId:(id)arg2;
- (_Bool)isAdValid;
- (_Bool)isContractAd;
- (void)loadAd;
- (id)realMediationPrice;
@property(retain, nonatomic) GDTRewardVideoAdImp *rewardVideoAdImp; // @synthesize rewardVideoAdImp=_rewardVideoAdImp;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions=_serverSideVerificationOptions;
- (void)setMediationExtDict:(id)arg1;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (double)videoDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(nonatomic) _Bool videoMuted;

@end

