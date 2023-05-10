//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "BUVideoEngine-Protocol.h"
#import "BUVideoPlayerDelegate-Protocol.h"

@class BUAdSlot, BUAudioSessionHandler, BUDislikeContext, BUDrawVideoFinishView, BUMaterialMeta, BUNormalVideoFinishView, BUPlayer, BUReachability, BUTimer, BUVideoAdTracker, NSArray, NSString, UIButton, UITapGestureRecognizer, UIViewController;
@protocol BUVideoAdViewDelegate;

@interface BUVideoAdView : UIView <BUVideoPlayerDelegate, BUVideoEngine>
{
    _Bool _drawVideoClickEnable;
    _Bool _supportAutoPlay;
    _Bool _hasPlaying;
    _Bool _hasStartPlaying;
    _Bool _muteSwitch;
    _Bool _isVideoCompletion;
    _Bool _codeExecuted;
    _Bool _last_paused;
    _Bool _drawVideo_tapPaused;
    _Bool _customPlayImage;
    _Bool _isCustomVideo;
    _Bool _shouldPause;
    id <BUVideoAdViewDelegate> _delegate;
    UIViewController *_rootViewController;
    long long _AdType;
    BUMaterialMeta *_materialMeta;
    UITapGestureRecognizer *_tapGesture;
    double _playedSeconds;
    UIButton *_playButton;
    BUNormalVideoFinishView *_normalfinishView;
    BUDrawVideoFinishView *_drawfinishView;
    unsigned long long _customPlayerType;
    BUTimer *_autoPlayTimer;
    BUPlayer *_player;
    BUReachability *_reachability;
    long long _drawVideoPlayCount;
    BUDislikeContext *_dislikeContext;
    NSArray *_superScrollViewArray;
    BUVideoAdTracker *_videoTracker;
    BUAudioSessionHandler *_sessionHandler;
    BUAdSlot *_adslot;
    long long _drawVideoType;
    long long _videoAutoPlayType;
    unsigned long long _videoFinishMode;
}

+ (id)videoAdViewInstanceArray;
- (void).cxx_destruct;
@property(nonatomic) long long AdType; // @synthesize AdType=_AdType;
- (void)AdViewClose:(id)arg1;
- (void)AdViewdidClick:(id)arg1;
@property(retain, nonatomic) BUAdSlot *adslot; // @synthesize adslot=_adslot;
- (void)applicationWillTerminateNotification:(id)arg1;
- (void)audioSessionHandleWithMute:(_Bool)arg1;
- (void)audioSessionHandlerWhenDissmiss;
@property(retain, nonatomic) BUTimer *autoPlayTimer; // @synthesize autoPlayTimer=_autoPlayTimer;
- (id)c_xyDictIfClick:(_Bool)arg1;
@property(nonatomic) _Bool codeExecuted; // @synthesize codeExecuted=_codeExecuted;
- (void)connectionChanged:(id)arg1;
- (double)currentPlayTime;
@property(nonatomic) _Bool customPlayImage; // @synthesize customPlayImage=_customPlayImage;
@property(nonatomic) unsigned long long customPlayerType; // @synthesize customPlayerType=_customPlayerType;
- (void)dealloc;
@property(nonatomic) __weak id <BUVideoAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToWindow;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
@property(nonatomic) _Bool drawVideoClickEnable; // @synthesize drawVideoClickEnable=_drawVideoClickEnable;
@property(nonatomic) long long drawVideoPlayCount; // @synthesize drawVideoPlayCount=_drawVideoPlayCount;
@property(nonatomic) long long drawVideoType; // @synthesize drawVideoType=_drawVideoType;
@property(nonatomic) _Bool drawVideo_tapPaused; // @synthesize drawVideo_tapPaused=_drawVideo_tapPaused;
@property(retain, nonatomic) BUDrawVideoFinishView *drawfinishView; // @synthesize drawfinishView=_drawfinishView;
- (void)enableControlAndGesture;
- (id)findSupperScrollViews:(id)arg1;
- (void)finishVideoViewInfo;
- (id)getAdExtraDataDict:(long long)arg1;
- (_Bool)getAutoPlayVideoSwitch;
- (void)getSettingValueWithMaterialMeta:(id)arg1;
- (id)getTrackTag;
- (void)goToDetail:(id)arg1;
@property(nonatomic) _Bool hasPlaying; // @synthesize hasPlaying=_hasPlaying;
@property(nonatomic) _Bool hasStartPlaying; // @synthesize hasStartPlaying=_hasStartPlaying;
- (void)hideNonWifiPromptView:(id)arg1;
- (id)init;
- (id)initWithMaterial:(id)arg1;
- (void)innerPause;
- (void)innerPlay;
- (id)innerPlayer;
- (double)innerTotalPlayTime;
@property(nonatomic) _Bool isCustomVideo; // @synthesize isCustomVideo=_isCustomVideo;
@property(nonatomic) _Bool isVideoCompletion; // @synthesize isVideoCompletion=_isVideoCompletion;
@property(nonatomic) _Bool last_paused; // @synthesize last_paused=_last_paused;
- (void)layoutSubviews;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
@property(nonatomic) _Bool muteSwitch; // @synthesize muteSwitch=_muteSwitch;
@property(retain, nonatomic) BUNormalVideoFinishView *normalfinishView; // @synthesize normalfinishView=_normalfinishView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)pause;
- (void)play;
@property(retain, nonatomic) UIButton *playButton; // @synthesize playButton=_playButton;
- (void)playTapped:(id)arg1;
@property(nonatomic) double playedSeconds; // @synthesize playedSeconds=_playedSeconds;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)player:(id)arg1 recognizeTapGesture:(id)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (void)playerDidPlayTimeChanged:(id)arg1 currentTime:(long long)arg2;
- (void)playerPlayIncon:(id)arg1 playInconSize:(struct CGSize)arg2;
- (void)playerReadyToPlay:(id)arg1;
- (void)playerSeekToTime:(double)arg1;
- (void)playerTouchesBegan:(id)arg1;
@property(retain, nonatomic) BUReachability *reachability; // @synthesize reachability=_reachability;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)reportLabel:(id)arg1 adExtraDataType:(long long)arg2;
- (void)reportVideoPlayerUrlEmptyTracker;
- (void)resetCurrentTapPaused;
- (void)resetVideoPLayer;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) BUAudioSessionHandler *sessionHandler; // @synthesize sessionHandler=_sessionHandler;
- (void)setContextBlock:(id)arg1;
- (void)setMute:(_Bool)arg1;
@property(nonatomic) _Bool shouldPause; // @synthesize shouldPause=_shouldPause;
@property(retain, nonatomic) NSArray *superScrollViewArray; // @synthesize superScrollViewArray=_superScrollViewArray;
@property(nonatomic) _Bool supportAutoPlay; // @synthesize supportAutoPlay=_supportAutoPlay;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) long long videoAutoPlayType; // @synthesize videoAutoPlayType=_videoAutoPlayType;
@property(nonatomic) unsigned long long videoFinishMode; // @synthesize videoFinishMode=_videoFinishMode;
@property(retain, nonatomic) BUVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
- (void)tapPlayforDrawVideo;
- (void)tick:(id)arg1;
- (unsigned long long)videoAdViewInstanceCount;
- (void)videoClickTypeConfigWith:(id)arg1 context:(id)arg2;
- (void)videoDetailPageReportLabel:(id)arg1 adExtraDataType:(long long)arg2;
- (void)videoInfoSetting;
- (_Bool)videoPlayerPlaying;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
