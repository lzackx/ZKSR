//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUPlayerSettingsProtocol-Protocol.h"
#import "BU_ZFPlayerDelegate-Protocol.h"

@class BUPlayerItem, BU_ZFPlayerView, NSString, NSURL, UIView;
@protocol BUPlayerControlViewProtocol, BUVideoPlayerDelegate;

@interface BUPlayer : NSObject <BU_ZFPlayerDelegate, BUPlayerSettingsProtocol>
{
    _Bool _isJSBPauseVideo;
    id <BUVideoPlayerDelegate> _delegate;
    long long _state;
    unsigned long long _decodeMode;
    BUPlayerItem *_currentPlayerItem;
    UIView *_controlView;
    UIView *_view;
    BU_ZFPlayerView *_playerView;
}

+ (void)audioSessionSetting;
+ (id)playerControlLocalizedString;
+ (id)playerControlViewImages;
+ (id)playerResourceBundle;
+ (id)playerWithPlayerItem:(id)arg1;
+ (id)videoCachePath;
- (void).cxx_destruct;
- (id)addPeriodicTimeObserverForInterval:(double)arg1 queue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)bindObserver;
- (void)changeOrientationScreen;
@property(readonly, nonatomic) UIView<BUPlayerControlViewProtocol> *controlContainer;
@property(retain, nonatomic) UIView *controlView; // @synthesize controlView=_controlView;
@property(readonly, nonatomic) double currentPlayTime;
@property(readonly, nonatomic) NSURL *currentPlayURL;
@property(retain, nonatomic) BUPlayerItem *currentPlayerItem; // @synthesize currentPlayerItem=_currentPlayerItem;
- (void)dealloc;
@property(nonatomic) unsigned long long decodeMode; // @synthesize decodeMode=_decodeMode;
@property(nonatomic) __weak id <BUVideoPlayerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) double duration;
@property(retain, nonatomic) NSString *endTimestamp;
- (id)init;
- (id)initWithPlayerItem:(id)arg1;
- (void)insertGaosiMohuWithLayer:(id)arg1;
- (void)insertGaosiMohuWithView:(id)arg1;
- (_Bool)isEnterBackground;
@property(readonly, nonatomic) _Bool isFullScreen;
@property(nonatomic) _Bool isJSBPauseVideo; // @synthesize isJSBPauseVideo=_isJSBPauseVideo;
@property(nonatomic) _Bool mute;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) long long option;
- (void)pause;
- (void)play;
@property(readonly, nonatomic) double playableDuration;
@property(nonatomic) long long playerLayerGravity;
- (id)playerModelWithItem:(id)arg1;
@property(retain, nonatomic) BU_ZFPlayerView *playerView; // @synthesize playerView=_playerView;
- (void)removeTimeObserver:(id)arg1;
- (void)replaceCurrentItemWithPlayerItem:(id)arg1;
- (void)replay;
- (void)resetPlayer;
- (void)seekToTime:(double)arg1 completion:(CDUnknownBlockType)arg2;
@property(nonatomic) _Bool shouldAutoRotate;
@property(retain, nonatomic) NSString *startTimestamp;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) UIView *view; // @synthesize view=_view;
- (void)setupConstraints;
- (void)setupContent;
- (void)stop;
@property(readonly, nonatomic) double watchedDuration;
- (void)zf_playerBackAction;
- (void)zf_playerControlViewWillHidden:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_playerControlViewWillShow:(id)arg1 isFullscreen:(_Bool)arg2;
- (void)zf_playerView:(id)arg1 recognizeTapGesture:(id)arg2;
- (void)zf_playerView:(id)arg1 stateDidChanged:(long long)arg2;
- (void)zf_playerViewDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)zf_playerViewReadyToPlay:(id)arg1;
- (void)zf_playerViewReadyToPlayWhenApplicationEnterBackground:(id)arg1;
- (void)zf_playerViewTouchesBegan:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
