//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADMediaContentDisplaying-Protocol.h"
#import "GADMonitorOwner-Protocol.h"

@class GADAdLoadMonitor, GADAdVideoController, GADEventContext, GADInternalNativeAd, GADNativeAdImage, GADViewVisibilityMonitor, GADWebAdView, NSDictionary, NSMutableArray, NSString, UIView;
@protocol GADVideoControlling, OS_dispatch_queue;

@interface GADHTMLMediaContent : NSObject <GADEventContextSource, GADMediaContentDisplaying, GADMonitorOwner>
{
    NSDictionary *_adConfiguration;
    NSDictionary *_mediaConfiguration;
    GADInternalNativeAd *_internalNativeAd;
    GADWebAdView *_adView;
    NSMutableArray *_adViewMonitors;
    GADAdLoadMonitor *_adLoadMonitor;
    GADViewVisibilityMonitor *_viewVisibilityMonitor;
    GADEventContext *_context;
    GADAdVideoController *_videoController;
    NSDictionary *_videoOptions;
    CDUnknownBlockType _completionHandler;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _completionHandlerExecuted
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADNativeAdImage *_mainImage;
}

- (void).cxx_destruct;
- (void)addMonitor:(id)arg1;
@property(readonly, nonatomic) double aspectRatio;
- (void)attachMonitors;
@property(readonly, nonatomic) GADEventContext *context;
- (void)createAndLoadAdView;
@property(readonly, nonatomic) double currentTime;
@property(readonly, nonatomic) double duration;
- (void)finishLoadingWithError:(id)arg1;
- (id)initWithInternalNativeAd:(id)arg1 adConfiguration:(id)arg2 mediaConfiguration:(id)arg3;
@property(readonly, nonatomic) struct CGSize intrinsicContentSize;
- (_Bool)isVideo;
- (void)loadMediaContentWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) GADNativeAdImage *mainImage;
@property(readonly, nonatomic) UIView *mediaView;
- (void)performPostLoadActions;
- (void)registerOverlayViewObservers:(id)arg1;
@property(readonly, nonatomic) id <GADVideoControlling> videoController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

