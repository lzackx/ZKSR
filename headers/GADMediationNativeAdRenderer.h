//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GADMediatedAdRenderer.h"

#import "GADMAdNetworkConnector-Protocol.h"

@class GADAdRenderingMetadata, GADInternalNativeAd, NSString;

@interface GADMediationNativeAdRenderer : GADMediatedAdRenderer <GADMAdNetworkConnector>
{
    CDUnknownBlockType _renderCompletionHandler;
    GADInternalNativeAd *_internalNativeAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _adLoadCompleted
    GADAdRenderingMetadata *_metadata;
}

- (void).cxx_destruct;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)didReceiveNativeAd:(id)arg1 fromAdapter:(id)arg2;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)viewControllerForPresentingModalView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

