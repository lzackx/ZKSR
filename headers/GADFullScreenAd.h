//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdMetadataProvider-Protocol.h"
#import "GADEventContextSource-Protocol.h"
#import "GADFullScreenPresentingAd-Protocol.h"

@class GADAdReward, GADEventContext, GADFullScreenAdContent, GADObserverCollection, GADResponseInfo, GADServerSideVerificationOptions, NSDictionary, NSString;
@protocol GADAdMetadataDelegate, GADFullScreenAppEventDelegate, GADFullScreenContentDelegate;

@interface GADFullScreenAd : NSObject <GADAdMetadataProvider, GADFullScreenPresentingAd, GADEventContextSource>
{
    GADFullScreenAdContent *_fullScreenAdContent;
    GADObserverCollection *_intermissionObservers;
    GADObserverCollection *_rewardObservers;
    GADObserverCollection *_observers;
    _Bool _hasBeenUsed;
    _Bool _didPresentCalled;
    _Bool _didUnloadMRAID;
    id <GADAdMetadataDelegate> _adMetadataDelegate;
    NSString *_adUnitID;
    GADResponseInfo *_responseInfo;
    CDUnknownBlockType _paidEventHandler;
    id <GADFullScreenContentDelegate> _fullScreenContentDelegate;
    id <GADFullScreenAppEventDelegate> _fullScreenAppEventDelegate;
    GADServerSideVerificationOptions *_serverSideVerificationOptions;
}

+ (void)asyncLoadWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)loadWithTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)updateTargeting:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)adDidDismissFullScreenContent;
@property(readonly, nonatomic) NSDictionary *adMetadata;
@property(nonatomic) __weak id <GADAdMetadataDelegate> adMetadataDelegate; // @synthesize adMetadataDelegate=_adMetadataDelegate;
- (void)adPresentationDidFailWithError:(id)arg1;
@property(readonly, nonatomic) GADAdReward *adReward;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void)adWillDismissFullScreenContent;
- (void)attachCallbackObservers;
- (void)attachIntermissionEventObservers;
- (void)attachRewardObserversWithEarnRewardHandler:(CDUnknownBlockType)arg1;
- (_Bool)canPresentFromRootViewController:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) GADEventContext *context;
@property(nonatomic) __weak id <GADFullScreenAppEventDelegate> fullScreenAppEventDelegate; // @synthesize fullScreenAppEventDelegate=_fullScreenAppEventDelegate;
@property(nonatomic) __weak id <GADFullScreenContentDelegate> fullScreenContentDelegate; // @synthesize fullScreenContentDelegate=_fullScreenContentDelegate;
- (id)initWithInterstitialAd:(id)arg1 adUnitID:(id)arg2 responseInfo:(id)arg3;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler; // @synthesize paidEventHandler=_paidEventHandler;
- (void)presentFromRootViewController:(id)arg1 userDidEarnRewardHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GADResponseInfo *responseInfo; // @synthesize responseInfo=_responseInfo;
@property(copy, nonatomic) GADServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions=_serverSideVerificationOptions;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

