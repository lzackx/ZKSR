//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADObserverCollection, GADWebAdView;

@interface GADNativeAdSignalMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADInternalNativeAd *_internalNativeAd;
    GADWebAdView *_webAdView;
}

- (void).cxx_destruct;
- (void)handleGetClickMetadataAction;
- (void)handleGetNativeSignalsAction;
- (id)initWithInternalNativeAd:(id)arg1 webAdView:(id)arg2;

@end
