//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIGestureRecognizerDelegate-Protocol.h"

@class GADInternalNativeAd, GADObserverCollection, NSString, UITapGestureRecognizer, UIView;

@interface GADNativeClickConfirmingViewMonitor : NSObject <UIGestureRecognizerDelegate>
{
    GADObserverCollection *_internalNativeAdObservers;
    UIView *_trackedView;
    GADInternalNativeAd *_internalNativeAd;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
}

- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)handleTap:(id)arg1;
- (void)handleTrackedView:(id)arg1;
- (void)handleUntrackedView:(id)arg1;
- (id)initWithInternalNativeAd:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

