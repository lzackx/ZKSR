//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUBUVideoBottomMaskClickDelegate-Protocol.h"
#import "BUBUVideoTopMaskClickDelegate-Protocol.h"
#import "BUFullScreenInterstitialAdDelegate-Protocol.h"
#import "BURewardedVideoDownloadBarDelegate-Protocol.h"
#import "BURewardedVideoTopBarDelegate-Protocol.h"
#import "BUVideoPlayerDelegate-Protocol.h"

@class BUAdSlot, BUDislikeContext, BUFullScreenInterstitialAdView, BUMaterialMeta, BUPlayer, BURewardedLiveCountDownView, BURewardedVideoDownloadBarView, BURewardedVideoTopBarView, BUTimer, BUURitSettingModel, BUVideoAdTracker, BUVideoBottomMask, BUVideoTopMask, NSDictionary, NSString, NSTimer, UIActivityIndicatorView, UILabel, UIView;
@protocol BURewardedVideoDisplayDelegate;

@interface BURewardedVideoDisplayViewController : UIViewController <BUVideoPlayerDelegate, BURewardedVideoDownloadBarDelegate, BUBUVideoTopMaskClickDelegate, BUBUVideoBottomMaskClickDelegate, BURewardedVideoTopBarDelegate, BUFullScreenInterstitialAdDelegate>
{
    _Bool _isTransform;
    _Bool _isRewardedVideo;
    _Bool _storeKitOpened;
    _Bool _isAlreadyPlayed;
    _Bool _isSkipTap;
    _Bool _isReportEvent;
    _Bool _isFirstAnimation;
    _Bool _isPlaying;
    _Bool _playingOnline;
    _Bool _hasPlayed;
    _Bool _isShowAlert;
    _Bool _displayDidDisappear;
    _Bool _resignActivity;
    _Bool _hasAddButtonToPlayerView;
    _Bool _isRewardLive;
    _Bool _liveAlertShowed;
    _Bool _liveJumped;
    _Bool _liveAutoJumping;
    id <BURewardedVideoDisplayDelegate> _delegate;
    BUPlayer *_player;
    BUMaterialMeta *_materialMeta;
    BUAdSlot *_slot;
    double _screenWidth;
    double _screenHeight;
    BURewardedVideoTopBarView *_topBarView;
    NSTimer *_timer;
    long long _repeatsCount;
    UIView *_adlogoView;
    UILabel *_ADXLabel;
    UIView *_playerView;
    UIActivityIndicatorView *_activityIndicator;
    BURewardedVideoDownloadBarView *_downloadView;
    BUVideoTopMask *_topMask;
    BUVideoBottomMask *_bottomMask;
    NSDictionary *_touchDict;
    double _lastTime;
    BUURitSettingModel *_ritModel;
    BUTimer *_quitTimer;
    BUDislikeContext *_dislikeContext;
    BUVideoAdTracker *_videoTracker;
    BUFullScreenInterstitialAdView *_fullScreenInterstitialAdView;
    long long _imageAdLeftSeconds;
    BURewardedLiveCountDownView *_liveCountDownView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ADXLabel; // @synthesize ADXLabel=_ADXLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
- (void)addNotification;
@property(retain, nonatomic) UIView *adlogoView; // @synthesize adlogoView=_adlogoView;
- (void)applicationWillTerminateNotification:(id)arg1;
@property(retain, nonatomic) BUVideoBottomMask *bottomMask; // @synthesize bottomMask=_bottomMask;
- (void)buildCommonView;
- (void)buildImageAdView;
- (void)buildMaskView;
- (void)buildNorlmalView;
- (id)c_xyDict;
- (void)checkRewardLiveBoxOpenState;
- (void)checkToPlayOrPause;
- (void)closeDisplayVC;
- (void)continuePlay;
- (double)currentTime;
- (void)dealloc;
@property(nonatomic) __weak id <BURewardedVideoDisplayDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) BUDislikeContext *dislikeContext; // @synthesize dislikeContext=_dislikeContext;
- (void)dislikeDismissPlayVideo;
- (void)dislikeShowPauseVideo;
@property(nonatomic) _Bool displayDidDisappear; // @synthesize displayDidDisappear=_displayDidDisappear;
@property(readonly, nonatomic) BUPlayer *displayPlayer;
- (void)downloadBarTapped:(id)arg1 extraDic:(id)arg2;
- (void)downloadButtonTapped:(id)arg1 extraDic:(id)arg2;
@property(retain, nonatomic) BURewardedVideoDownloadBarView *downloadView; // @synthesize downloadView=_downloadView;
- (void)downloadViewAnimation;
- (void)forceQuit;
- (void)fullScreenImageAdDidClick:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdPlayerDidPlayFinish:(id)arg1;
- (void)fullScreenInterstitialAdPlayerReadyToPlay:(id)arg1;
- (void)fullScreenInterstitialAdVideoViewDidClick:(id)arg1;
@property(retain, nonatomic) BUFullScreenInterstitialAdView *fullScreenInterstitialAdView; // @synthesize fullScreenInterstitialAdView=_fullScreenInterstitialAdView;
- (void)fullScreenInterstitialAdView:(id)arg1 downloadBarTapped:(id)arg2 extraDic:(id)arg3;
- (void)fullScreenInterstitialAdView:(id)arg1 downloadButtonTapped:(id)arg2 extraDic:(id)arg3;
- (void)fullScreenInterstitialAdView:(id)arg1 videoStateDidChanged:(long long)arg2;
- (void)fullScreenInterstitialAdViewDidClick:(id)arg1 extraDic:(id)arg2;
- (void)fullScreenInterstitialAdViewDidTapLogoImageView:(id)arg1;
- (void)fullScreenInterstitialTypeDidClose;
- (_Bool)fullscreenNotShowEndcard;
- (id)getDurationAndPercentDic;
- (struct CGRect)getLiveCountDownFrame;
- (id)getTrackTag;
- (long long)getdownloadBarShowTime;
- (struct CGSize)handleLandscapeVideoSizeWithVideoAdaption;
- (void)handlePlayFinish;
- (struct CGSize)handlePortraitVideoSizeWithVideoAdaption;
- (double)handlePortraitVideoTopWithVideoAdaption;
- (void)handleSendRewardWhenSwitchToEndcard;
- (void)handleSkip;
@property(nonatomic) _Bool hasAddButtonToPlayerView; // @synthesize hasAddButtonToPlayerView=_hasAddButtonToPlayerView;
@property(nonatomic) _Bool hasPlayed; // @synthesize hasPlayed=_hasPlayed;
@property(nonatomic) long long imageAdLeftSeconds; // @synthesize imageAdLeftSeconds=_imageAdLeftSeconds;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
@property(nonatomic) _Bool isAlreadyPlayed; // @synthesize isAlreadyPlayed=_isAlreadyPlayed;
@property(nonatomic) _Bool isFirstAnimation; // @synthesize isFirstAnimation=_isFirstAnimation;
- (_Bool)isFullScreenImageAd;
- (unsigned long long)isNewDowloadBar;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(nonatomic) _Bool isReportEvent; // @synthesize isReportEvent=_isReportEvent;
@property(nonatomic) _Bool isRewardLive; // @synthesize isRewardLive=_isRewardLive;
@property(nonatomic) _Bool isRewardedVideo; // @synthesize isRewardedVideo=_isRewardedVideo;
@property(nonatomic) _Bool isShowAlert; // @synthesize isShowAlert=_isShowAlert;
@property(nonatomic) _Bool isSkipTap; // @synthesize isSkipTap=_isSkipTap;
@property(nonatomic) _Bool isTransform; // @synthesize isTransform=_isTransform;
- (void)judgeQuit:(id)arg1;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
- (void)layoutFullScreenImage;
- (void)layoutNormalSubviews;
@property(nonatomic) _Bool liveAlertShowed; // @synthesize liveAlertShowed=_liveAlertShowed;
@property(nonatomic) _Bool liveAutoJumping; // @synthesize liveAutoJumping=_liveAutoJumping;
@property(retain, nonatomic) BURewardedLiveCountDownView *liveCountDownView; // @synthesize liveCountDownView=_liveCountDownView;
@property(nonatomic) _Bool liveJumped; // @synthesize liveJumped=_liveJumped;
@property(retain, nonatomic) BUMaterialMeta *materialMeta; // @synthesize materialMeta=_materialMeta;
- (_Bool)needFullScreenVideoAdaptation;
- (void)onRewardLiveBoxOpen;
- (void)openAppStore;
- (void)pbu_safeLogoLayout;
- (void)playRewardedVideo;
@property(retain, nonatomic) BUPlayer *player; // @synthesize player=_player;
- (void)player:(id)arg1 decodeModeChanged:(unsigned long long)arg2;
- (void)player:(id)arg1 stateDidChanged:(long long)arg2;
- (void)playerDidPlayFinish:(id)arg1 error:(id)arg2;
- (double)playerDuration;
- (void)playerReadyToPlay:(id)arg1;
- (void)playerReadyToPlayWhenApplicationEnterBackground:(id)arg1;
- (void)playerTap;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
- (id)playerViewTapyDict;
@property(nonatomic) _Bool playingOnline; // @synthesize playingOnline=_playingOnline;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
- (void)preloadMaterialMeta;
@property(retain, nonatomic) BUTimer *quitTimer; // @synthesize quitTimer=_quitTimer;
- (void)receiveDidEnterBackgroundNotification:(id)arg1;
- (void)receiveWillEnterForegroundNotification:(id)arg1;
- (void)receiveWillResignActiveNotification:(id)arg1;
- (void)receivedidBecomeActiveNotification:(id)arg1;
@property(nonatomic) long long repeatsCount; // @synthesize repeatsCount=_repeatsCount;
- (void)reportEventIsNeedWatchPercent:(_Bool)arg1;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3;
- (void)reportLabel:(id)arg1 extraDic:(id)arg2 adExtraDataType:(long long)arg3 skipType:(long long)arg4;
- (void)reportVideoEndCardTracker;
@property(nonatomic) _Bool resignActivity; // @synthesize resignActivity=_resignActivity;
- (_Bool)rewardShowAlert;
- (long long)rewardWatchPercentForRport;
@property(retain, nonatomic) BUURitSettingModel *ritModel; // @synthesize ritModel=_ritModel;
@property(nonatomic) double screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) double screenWidth; // @synthesize screenWidth=_screenWidth;
- (_Bool)sendClickEventWithArea:(id)arg1;
- (void)setPlayerVideoAdaption;
@property(retain, nonatomic) BUAdSlot *slot; // @synthesize slot=_slot;
@property(nonatomic) _Bool storeKitOpened; // @synthesize storeKitOpened=_storeKitOpened;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) BURewardedVideoTopBarView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) BUVideoTopMask *topMask; // @synthesize topMask=_topMask;
@property(copy, nonatomic) NSDictionary *touchDict; // @synthesize touchDict=_touchDict;
@property(retain, nonatomic) BUVideoAdTracker *videoTracker; // @synthesize videoTracker=_videoTracker;
- (_Bool)shouldAutorotate;
- (void)showDislikeHUD;
- (void)showRewardLiveAlert;
- (void)silentVideo;
- (void)startImageTimer;
- (void)startTimer;
- (void)stopTimer;
- (unsigned long long)supportedInterfaceOrientations;
- (void)tapAdLogo;
- (long long)topBarViewStyle;
- (void)touchEventTrackerForClick;
- (void)touchEventTrackerForClickClose;
- (void)touchEventTrackerWithLabel:(id)arg1 sendClick:(_Bool)arg2;
- (void)unMuteVideo;
- (_Bool)upToThirtySecondsStandard;
- (void)updateImageLeftSeconds;
- (void)updateLeftSeconds:(id)arg1;
- (void)updateRewardLiveCountDown;
- (_Bool)validFullScreenImageAndInterstitial;
- (_Bool)videoAdaptionVideoHeightNotContainBar;
- (void)videoBottomMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoBottomMaskTapped:(id)arg1 extraDic:(id)arg2;
- (long long)videoBufferSecondForClose;
- (_Bool)videoDefaultMute;
- (void)videoTopBarCloseButtonTapped:(id)arg1;
- (void)videoTopBarDislikeButtonTapped:(id)arg1;
- (void)videoTopBarSilentButtonTapped:(id)arg1;
- (void)videoTopBarTapped:(id)arg1 extraDic:(id)arg2;
- (void)videoTopMaskSubViewsTapped:(id)arg1 extraDic:(id)arg2 clickTypeString:(id)arg3;
- (void)videoTopMaskTapped:(id)arg1 extraDic:(id)arg2;
- (_Bool)videoUrlValiable;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (double)watchedDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
