//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdPresenting-Protocol.h"
#import "GADAdRendering-Protocol.h"
#import "GADMediationRewardedAdEventDelegate-Protocol.h"

@class GADAdRenderingMetadata, GADFullScreenAdContent, GADMediatedIntermission, GADMediationRewardedAdConfiguration, NSDictionary, NSString;
@protocol GADMediationAdapter, GADMediationRewardedAd;

@interface GADRTBMediationRewardBasedVideoAdRenderer : NSObject <GADAdPresenting, GADMediationRewardedAdEventDelegate, GADAdRendering>
{
    id <GADMediationAdapter> _loadingAdapter;
    GADFullScreenAdContent *_fullScreenAdContent;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    id <GADMediationRewardedAd> _mediatedAd;
    GADMediationRewardedAdConfiguration *_mediatedConfiguration;
    GADMediatedIntermission *_intermission;
    GADAdRenderingMetadata *_metadata;
    NSDictionary *_adConfiguration;
}

- (void).cxx_destruct;
- (id)adEventDelegateForAdapter:(id)arg1 mediatedAd:(id)arg2 adConfiguration:(id)arg3 transaction:(id)arg4 renderCompletionHandler:(CDUnknownBlockType)arg5;
- (_Bool)canPresentFromViewController:(id)arg1 error:(id *)arg2;
- (void)didDismissFullScreenView;
- (void)didEndVideo;
- (void)didFailToPresentWithError:(id)arg1;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didStartVideo;
- (void)presentFromViewController:(id)arg1;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)reportClick;
- (void)reportImpression;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

