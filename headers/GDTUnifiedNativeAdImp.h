//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdImpProtocol-Protocol.h"
#import "GDTAdImpS2SProtocol-Protocol.h"
#import "GDTUnifiedNativeAdImpProtocol-Protocol.h"

@class GDTAdBaseModel, GDTLoadAdParams, GDTUnifiedNativeAd, NSArray, NSDictionary, NSString;
@protocol GDTUnifiedNativeAdDelegate;

@interface GDTUnifiedNativeAdImp : NSObject <GDTUnifiedNativeAdImpProtocol, GDTAdImpProtocol, GDTAdImpS2SProtocol>
{
    _Bool isFromS2S;
    _Bool _disableServerMediation;
    _Bool _isVideoAd;
    id <GDTUnifiedNativeAdDelegate> delegate;
    GDTUnifiedNativeAd *unifiedNativeAd;
    NSDictionary *tagDict;
    GDTLoadAdParams *loadAdParams;
    NSString *adNetworkName;
    unsigned long long videoPlayPolicy;
    unsigned long long videoRenderType;
    long long maxVideoDuration;
    long long minVideoDuration;
    NSString *fixedVideoDuration;
    NSString *vastClassName;
    NSDictionary *_mediationExtDict;
    NSString *s2sToken;
    NSString *_placementId;
    NSString *_threadId;
    long long _serverType;
    double _requestBeginTime;
    double _requestEndTime;
    GDTAdBaseModel *_adModelForEvent;
    NSArray *_dataObjects;
}

- (void).cxx_destruct;
- (void)GDTfunctiond4ust7:(long long)arg1;
- (id)GDTfunctiond4wSl1:(long long)arg1;
- (_Bool)GDTfunctionh2gGzw;
- (void)GDTfunctionr4HCME:(unsigned long long)arg1;
- (void)GDTfunctionr4HCME:(unsigned long long)arg1 detailErrorCode:(long long)arg2;
- (void)GDTfunctions2PkDE:(id)arg1;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(nonatomic) __weak NSArray *dataObjects; // @synthesize dataObjects=_dataObjects;
@property(nonatomic) __weak id <GDTUnifiedNativeAdDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(copy, nonatomic) NSString *fixedVideoDuration; // @synthesize fixedVideoDuration;
- (id)initWithPlacementId:(id)arg1;
- (id)initWithPlacementId:(id)arg1 serverType:(long long)arg2;
@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S;
@property(nonatomic) _Bool isVideoAd; // @synthesize isVideoAd=_isVideoAd;
- (void)loadAd;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
- (void)loadAdWithAdCount:(long long)arg1;
@property(nonatomic) long long maxVideoDuration; // @synthesize maxVideoDuration;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict=_mediationExtDict;
@property(nonatomic) long long minVideoDuration; // @synthesize minVideoDuration;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
- (void)setBidECPM:(long long)arg1;
@property(retain, nonatomic) NSDictionary *tagDict; // @synthesize tagDict;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) __weak GDTUnifiedNativeAd *unifiedNativeAd; // @synthesize unifiedNativeAd;
@property(copy, nonatomic) NSString *vastClassName; // @synthesize vastClassName;
@property(nonatomic) unsigned long long videoPlayPolicy; // @synthesize videoPlayPolicy;
@property(nonatomic) unsigned long long videoRenderType; // @synthesize videoRenderType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

