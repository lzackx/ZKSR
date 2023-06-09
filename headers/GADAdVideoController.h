//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADEventContextSource-Protocol.h"
#import "GADVideoControlling-Protocol.h"

@class GADEventContext, GADVideoMetadataMonitor, GADVideoOptions, GADWebAdView, NSString;
@protocol OS_dispatch_queue;

@interface GADAdVideoController : NSObject <GADVideoControlling, GADEventContextSource>
{
    GADWebAdView *_adView;
    _Bool _videoOptionsCustomControlsRequested;
    _Bool _videoOptionsClickToExpandRequested;
    GADVideoMetadataMonitor *_videoMetadataMonitor;
    GADVideoOptions *_videoOptions;
    NSObject<OS_dispatch_queue> *_lockQueue;
    _Bool _videoMuted;
    _Bool _hasVideoContent;
    _Bool _customControlsEnabled;
    _Bool _clickToExpandEnabled;
    long long _videoPlaybackState;
    double _videoDuration;
    double _currentPlaybackTime;
    double _aspectRatio;
}

- (void).cxx_destruct;
@property(nonatomic) double aspectRatio; // @synthesize aspectRatio=_aspectRatio;
@property(nonatomic) _Bool clickToExpandEnabled; // @synthesize clickToExpandEnabled=_clickToExpandEnabled;
@property(readonly, nonatomic) GADEventContext *context;
@property(nonatomic) double currentPlaybackTime; // @synthesize currentPlaybackTime=_currentPlaybackTime;
- (double)currentTime;
@property(nonatomic) _Bool customControlsEnabled; // @synthesize customControlsEnabled=_customControlsEnabled;
- (double)duration;
@property(nonatomic) _Bool hasVideoContent; // @synthesize hasVideoContent=_hasVideoContent;
- (id)initWithMessageSource:(id)arg1 webAdView:(id)arg2;
- (_Bool)isMuted;
- (void)pause;
- (void)play;
- (void)setCurrentTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (void)setInitialStateWithConfigurations:(id)arg1;
- (void)setIsMuted:(_Bool)arg1;
- (void)setMute:(_Bool)arg1;
@property(nonatomic) double videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted=_videoMuted;
@property(nonatomic) long long videoPlaybackState; // @synthesize videoPlaybackState=_videoPlaybackState;
- (void)stop;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

