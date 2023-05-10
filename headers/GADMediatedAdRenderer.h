//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADAdRendering-Protocol.h"
#import "GADMAdNetworkConnector-Protocol.h"

@class GADServerTransaction, NSDictionary, NSString;
@protocol GADMAdNetworkAdapter;

@interface GADMediatedAdRenderer : NSObject <GADAdRendering, GADMAdNetworkConnector>
{
    GADServerTransaction *_transaction;
    NSDictionary *_adConfiguration;
    id <GADMAdNetworkAdapter> _adapter;
}

- (void).cxx_destruct;
- (_Bool)adMuted;
- (float)adVolume;
- (void)adapter:(id)arg1 clickDidOccurInBanner:(id)arg2;
- (void)adapter:(id)arg1 didFailAd:(id)arg2;
- (void)adapter:(id)arg1 didFailInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didReceiveAdView:(id)arg2;
- (void)adapter:(id)arg1 didReceiveInterstitial:(id)arg2;
- (void)adapter:(id)arg1 didReceiveMediatedUnifiedNativeAd:(id)arg2;
- (void)adapterDidDismissFullScreenModal:(id)arg1;
- (void)adapterDidDismissInterstitial:(id)arg1;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterDidReceiveInterstitial:(id)arg1;
- (void)adapterWillDismissFullScreenModal:(id)arg1;
- (void)adapterWillDismissInterstitial:(id)arg1;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)adapterWillPresentFullScreenModal:(id)arg1;
- (void)adapterWillPresentInterstitial:(id)arg1;
- (id)childDirectedTreatment;
- (id)credentials;
- (void)dealloc;
- (Class)mainAdapterClass;
- (id)maxAdContentRating;
- (id)networkExtras;
- (id)publisherId;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (_Bool)testMode;
- (id)underAgeOfConsent;
- (id)userBirthday;
- (long long)userGender;
- (_Bool)userHasLocation;
- (id)userKeywords;
- (double)userLatitude;
- (double)userLocationAccuracyInMeters;
- (id)userLocationDescription;
- (double)userLongitude;
- (id)viewControllerForPresentingModalView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

