//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BUActionDeepLinkModel-Protocol.h"
#import "BUActionPhoneModel-Protocol.h"
#import "BUActionWebModel-Protocol.h"
#import "BUAd-Protocol.h"
#import "BUSplashBottomViewInterface-Protocol.h"
#import "NSCoding-Protocol.h"

@class BUAdPCMModel, BUAppInfo, BUClickActionModel, BUCloudGameInfo, BUDeepLink, BUDirectLandingPageInfo, BUImage, BUMiddleTplInfo, BUPersonalizationPrompts, BUPlayableInfo, BURenderModel, BURewardAgainModel, BURewardLiveModel, BUSKANADImpressionObject, BUSKANStoreProductModel, BUSkipControlModel, BUSplashControlModel, BUSplashZoomOutModel, BUTplInfo, BUVideoInfo, NSArray, NSDictionary, NSNumber, NSString;

@interface BUMaterialMeta : NSObject <BUSplashBottomViewInterface, BUAd, BUActionDeepLinkModel, BUActionWebModel, BUActionPhoneModel, NSCoding>
{
    _Bool _allowCustomVideoPlayer;
    _Bool _isPlayable;
    _Bool _showDislike;
    _Bool _video_local_prefetch;
    _Bool _isPlayableTestData;
    _Bool _userDidCustomVideoPlayer;
    _Bool _havePushTargetPage;
    _Bool _bu_middleTemplateComplete;
    _Bool _closeOnDislike;
    _Bool _hasSendReward;
    _Bool _blockAutoOpen;
    _Bool _isShakeAction;
    _Bool _validDislikeInputAccessoryView;
    float _shakeValue;
    NSString *AdID;
    NSString *extInfo;
    NSString *mopubAuctionPrice;
    BUDeepLink *deepLink;
    NSString *targetURL;
    NSString *phone;
    NSString *ulink;
    BUVideoInfo *_videoInfo;
    long long _interactionType;
    NSArray *_imageAry;
    BUImage *_icon;
    NSString *_AdTitle;
    NSString *_AdDescription;
    NSString *_source;
    NSString *_buttonText;
    long long _imageMode;
    long long _score;
    long long _commentNum;
    long long _appSize;
    long long _videoDuration;
    NSArray *_filterWords;
    BUPersonalizationPrompts *_personalPrompts;
    NSDictionary *_mediaExt;
    NSString *_ADXName;
    NSArray *_show_urls;
    NSArray *_click_urls;
    long long _unionSpecial;
    long long _countDown;
    double _expireTimestamp;
    long long _saveTimestamp;
    BUAppInfo *_appInfo;
    unsigned long long _video_encode_type;
    BUVideoInfo *_h264VideoInfo;
    BUVideoInfo *_h265VideoInfo;
    CDUnknownBlockType _finishBlock;
    long long _playbarShowtime;
    long long _render_delay_time;
    BUTplInfo *_tplInfo;
    NSString *_creative_extra;
    BUMiddleTplInfo *_middleTplInfo;
    BUImage *_coverImage;
    NSDictionary *_clickAreaDic;
    long long _showAdLogo;
    long long _playBarStyle;
    double _startLoad_interval;
    double _startPlay_interval;
    double _startDownload_interval;
    long long _video_prefetch_size;
    long long _video_prefetch_error_code;
    NSString *_video_prefetch_error_msg;
    NSString *_video_prefetch_server_msg;
    long long _splashShowType;
    NSNumber *_splashIsCache;
    long long _appstoreJumpType;
    long long _playableType;
    long long _feedVideoOpentype;
    NSString *_playableStyle;
    long long _videoAdaptation;
    NSDictionary *_session_params;
    NSDictionary *_materialDictionary;
    long long _cacheSort;
    BUSplashZoomOutModel *_splash_icon;
    NSString *_geckoId;
    long long _adSlotType;
    long long _renderType;
    long long _renderControl;
    long long _all_times;
    long long _hit_times;
    NSString *_rewardName;
    long long _rewardAmount;
    long long _landingScrollPercentage;
    long long _if_both_open;
    long long _if_double_deeplink;
    unsigned long long _landingPageStyle;
    NSString *_bu_middleTemplateData;
    long long _cover_click_area;
    BUPlayableInfo *_playableInfo;
    BUCloudGameInfo *_cloudGameInfo;
    BUDirectLandingPageInfo *_directLandingPageInfo;
    unsigned long long _rewardFullScreenOrientation;
    double _fullScreenAspectRatio;
    NSDictionary *_extension;
    BURenderModel *_render;
    NSString *_adInfo;
    BURewardAgainModel *_rewardAgainModel;
    NSString *_originButtonText;
    long long _playableDurationTime;
    long long _rewardedEndCardCloseTime;
    long long _rewardedPlayableCloseTime;
    BUClickActionModel *_clickActionModel;
    NSNumber *_endcard_skoverlay;
    long long _playableCloseTime;
    long long _watchPercent;
    long long _playableRewardType;
    long long _rewardBrowseType;
    long long _rewardBrowseWebviewDurationTime;
    long long _if_send_click;
    BUSKANStoreProductModel *_skan_product_item;
    BUSKANADImpressionObject *_skan_Impression_Objct;
    BUAdPCMModel *_pcm_model;
    BUSplashControlModel *_splashControlModel;
    BURewardLiveModel *_rewardLiveModel;
    long long _rotationAngle;
    BUSkipControlModel *_skipControlModel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *ADXName; // @synthesize ADXName=_ADXName;
@property(copy, nonatomic) NSString *AdDescription; // @synthesize AdDescription=_AdDescription;
@property(copy, nonatomic) NSString *AdID; // @synthesize AdID;
@property(copy, nonatomic) NSString *AdTitle; // @synthesize AdTitle=_AdTitle;
@property(copy, nonatomic) NSString *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) long long adSlotType; // @synthesize adSlotType=_adSlotType;
@property(nonatomic) long long all_times; // @synthesize all_times=_all_times;
@property(nonatomic) _Bool allowCustomVideoPlayer; // @synthesize allowCustomVideoPlayer=_allowCustomVideoPlayer;
@property(retain, nonatomic) BUAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(nonatomic) long long appSize; // @synthesize appSize=_appSize;
@property(nonatomic) long long appstoreJumpType; // @synthesize appstoreJumpType=_appstoreJumpType;
@property(nonatomic) _Bool blockAutoOpen; // @synthesize blockAutoOpen=_blockAutoOpen;
@property(nonatomic) _Bool bu_middleTemplateComplete; // @synthesize bu_middleTemplateComplete=_bu_middleTemplateComplete;
@property(copy, nonatomic) NSString *bu_middleTemplateData; // @synthesize bu_middleTemplateData=_bu_middleTemplateData;
@property(copy, nonatomic) NSString *buttonText; // @synthesize buttonText=_buttonText;
@property(nonatomic) long long cacheSort; // @synthesize cacheSort=_cacheSort;
@property(retain, nonatomic) BUClickActionModel *clickActionModel; // @synthesize clickActionModel=_clickActionModel;
@property(retain, nonatomic) NSDictionary *clickAreaDic; // @synthesize clickAreaDic=_clickAreaDic;
@property(copy, nonatomic) NSArray *click_urls; // @synthesize click_urls=_click_urls;
@property(nonatomic) _Bool closeOnDislike; // @synthesize closeOnDislike=_closeOnDislike;
@property(retain, nonatomic) BUCloudGameInfo *cloudGameInfo; // @synthesize cloudGameInfo=_cloudGameInfo;
@property(nonatomic) long long commentNum; // @synthesize commentNum=_commentNum;
- (void)correctRenderControl:(long long)arg1;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
@property(retain, nonatomic) BUImage *coverImage; // @synthesize coverImage=_coverImage;
@property(nonatomic) long long cover_click_area; // @synthesize cover_click_area=_cover_click_area;
@property(copy, nonatomic) NSString *creative_extra; // @synthesize creative_extra=_creative_extra;
- (void)dealloc;
@property(retain, nonatomic) BUDeepLink *deepLink; // @synthesize deepLink;
- (long long)defaultCommentNumValue;
- (double)defaultScoreValue;
@property(retain, nonatomic) BUDirectLandingPageInfo *directLandingPageInfo; // @synthesize directLandingPageInfo=_directLandingPageInfo;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSNumber *endcard_skoverlay; // @synthesize endcard_skoverlay=_endcard_skoverlay;
@property(nonatomic) double expireTimestamp; // @synthesize expireTimestamp=_expireTimestamp;
@property(copy) NSString *extInfo; // @synthesize extInfo;
@property(copy, nonatomic) NSDictionary *extension; // @synthesize extension=_extension;
- (id)extraDataDictWithExtraDataType:(long long)arg1;
@property(nonatomic) long long feedVideoOpentype; // @synthesize feedVideoOpentype=_feedVideoOpentype;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
@property(copy) CDUnknownBlockType finishBlock; // @synthesize finishBlock=_finishBlock;
- (struct CGSize)fullScreenAdSizeValidSafeInsets:(_Bool)arg1;
@property(nonatomic) double fullScreenAspectRatio; // @synthesize fullScreenAspectRatio=_fullScreenAspectRatio;
- (void)fullScreenRewardedDislikeIfValidInputAccessoryView;
- (long long)fullScreenRewardedPreferredOrientation;
- (struct CGSize)fullScreenRewardedStyleViewSize;
- (unsigned long long)fullScreenRewardedSupportOrientationMask;
@property(copy, nonatomic) NSString *geckoId; // @synthesize geckoId=_geckoId;
- (id)getAppScheme;
- (double)getRewardExpireTimestamp;
- (id)getRewardLiveLinkParams:(id)arg1;
- (id)getTrackTag;
@property(retain, nonatomic) BUVideoInfo *h264VideoInfo; // @synthesize h264VideoInfo=_h264VideoInfo;
@property(retain, nonatomic) BUVideoInfo *h265VideoInfo; // @synthesize h265VideoInfo=_h265VideoInfo;
@property(nonatomic) _Bool hasSendReward; // @synthesize hasSendReward=_hasSendReward;
@property(nonatomic) _Bool havePushTargetPage; // @synthesize havePushTargetPage=_havePushTargetPage;
@property(nonatomic) long long hit_times; // @synthesize hit_times=_hit_times;
@property(retain, nonatomic) BUImage *icon; // @synthesize icon=_icon;
@property(nonatomic) long long if_both_open; // @synthesize if_both_open=_if_both_open;
@property(nonatomic) long long if_double_deeplink; // @synthesize if_double_deeplink=_if_double_deeplink;
@property(nonatomic) long long if_send_click; // @synthesize if_send_click=_if_send_click;
@property(retain, nonatomic) NSArray *imageAry; // @synthesize imageAry=_imageAry;
@property(nonatomic) long long imageMode; // @synthesize imageMode=_imageMode;
- (id)imageModeWithURLString:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
@property(nonatomic) long long interactionType; // @synthesize interactionType=_interactionType;
- (struct CGSize)intersitialExpectSizeWithWidth:(double)arg1 height:(double)arg2;
- (_Bool)isBothOpen;
- (_Bool)isDoubleDeeplink;
- (_Bool)isFullSizeRatioStyle;
- (_Bool)isImmersiveLandingPage;
- (_Bool)isInterstitialStyle;
- (_Bool)isNativeShowLoading;
@property(nonatomic) _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
- (_Bool)isPlayableLandingPage;
@property(nonatomic) _Bool isPlayableTestData; // @synthesize isPlayableTestData=_isPlayableTestData;
- (_Bool)isPurePlayable;
- (_Bool)isRelatedRecommendation;
- (_Bool)isRewardEcommerce;
- (_Bool)isRewardFullScreenLandscape;
- (_Bool)isRewardFullScreenPortrait;
@property(nonatomic) _Bool isShakeAction; // @synthesize isShakeAction=_isShakeAction;
- (_Bool)isSupportPlayful;
- (_Bool)isVideoImageMode;
- (_Bool)isVideoPlayable;
@property(nonatomic) unsigned long long landingPageStyle; // @synthesize landingPageStyle=_landingPageStyle;
@property(nonatomic) long long landingScrollPercentage; // @synthesize landingScrollPercentage=_landingScrollPercentage;
@property(copy, nonatomic) NSDictionary *materialDictionary; // @synthesize materialDictionary=_materialDictionary;
@property(copy, nonatomic) NSDictionary *mediaExt; // @synthesize mediaExt=_mediaExt;
@property(retain, nonatomic) BUMiddleTplInfo *middleTplInfo; // @synthesize middleTplInfo=_middleTplInfo;
@property(copy, nonatomic) NSString *mopubAuctionPrice; // @synthesize mopubAuctionPrice;
- (id)nativeExpress_AdDescription;
- (id)nativeExpress_AdTitle;
- (_Bool)needReportDynamicShowType;
- (_Bool)needUseMiddleTemplateToRender;
- (_Bool)needUseTemplateToRender;
- (_Bool)needUseTmeplateOrMiddleTemplateToRender;
@property(copy, nonatomic) NSString *originButtonText; // @synthesize originButtonText=_originButtonText;
@property(retain, nonatomic) BUAdPCMModel *pcm_model; // @synthesize pcm_model=_pcm_model;
@property(retain, nonatomic) BUPersonalizationPrompts *personalPrompts; // @synthesize personalPrompts=_personalPrompts;
@property(copy, nonatomic) NSString *phone; // @synthesize phone;
@property(nonatomic) long long playBarStyle; // @synthesize playBarStyle=_playBarStyle;
@property(nonatomic) long long playableCloseTime; // @synthesize playableCloseTime=_playableCloseTime;
@property(nonatomic) long long playableDurationTime; // @synthesize playableDurationTime=_playableDurationTime;
@property(retain, nonatomic) BUPlayableInfo *playableInfo; // @synthesize playableInfo=_playableInfo;
@property(nonatomic) long long playableRewardType; // @synthesize playableRewardType=_playableRewardType;
@property(copy, nonatomic) NSString *playableStyle; // @synthesize playableStyle=_playableStyle;
@property(nonatomic) long long playableType; // @synthesize playableType=_playableType;
@property(nonatomic) long long playbarShowtime; // @synthesize playbarShowtime=_playbarShowtime;
- (long long)playfulPageType;
@property(retain, nonatomic) BURenderModel *render; // @synthesize render=_render;
@property(nonatomic) long long renderControl; // @synthesize renderControl=_renderControl;
@property(nonatomic) long long renderType; // @synthesize renderType=_renderType;
@property(nonatomic) long long render_delay_time; // @synthesize render_delay_time=_render_delay_time;
- (void)reportClickUrls;
@property(retain, nonatomic) BURewardAgainModel *rewardAgainModel; // @synthesize rewardAgainModel=_rewardAgainModel;
@property(nonatomic) long long rewardAmount; // @synthesize rewardAmount=_rewardAmount;
@property(nonatomic) long long rewardBrowseType; // @synthesize rewardBrowseType=_rewardBrowseType;
@property(nonatomic) long long rewardBrowseWebviewDurationTime; // @synthesize rewardBrowseWebviewDurationTime=_rewardBrowseWebviewDurationTime;
@property(nonatomic) unsigned long long rewardFullScreenOrientation; // @synthesize rewardFullScreenOrientation=_rewardFullScreenOrientation;
@property(retain, nonatomic) BURewardLiveModel *rewardLiveModel; // @synthesize rewardLiveModel=_rewardLiveModel;
@property(copy, nonatomic) NSString *rewardName; // @synthesize rewardName=_rewardName;
@property(nonatomic) long long rewardedEndCardCloseTime; // @synthesize rewardedEndCardCloseTime=_rewardedEndCardCloseTime;
- (long long)rewardedPlayTime:(double)arg1;
@property(nonatomic) long long rewardedPlayableCloseTime; // @synthesize rewardedPlayableCloseTime=_rewardedPlayableCloseTime;
- (id)ritInExtInfo;
- (id)ritSettingModelInExtInfo;
@property(nonatomic) long long rotationAngle; // @synthesize rotationAngle=_rotationAngle;
- (struct UIEdgeInsets)safeAreaInsets;
@property(nonatomic) long long saveTimestamp; // @synthesize saveTimestamp=_saveTimestamp;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(copy, nonatomic) NSDictionary *session_params; // @synthesize session_params=_session_params;
@property(nonatomic) float shakeValue; // @synthesize shakeValue=_shakeValue;
@property(nonatomic) long long showAdLogo; // @synthesize showAdLogo=_showAdLogo;
@property(nonatomic) _Bool showDislike; // @synthesize showDislike=_showDislike;
@property(copy, nonatomic) NSArray *show_urls; // @synthesize show_urls=_show_urls;
@property(retain, nonatomic) BUSKANADImpressionObject *skan_Impression_Objct; // @synthesize skan_Impression_Objct=_skan_Impression_Objct;
@property(retain, nonatomic) BUSKANStoreProductModel *skan_product_item; // @synthesize skan_product_item=_skan_product_item;
@property(retain, nonatomic) BUSkipControlModel *skipControlModel; // @synthesize skipControlModel=_skipControlModel;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
@property(retain, nonatomic) BUSplashControlModel *splashControlModel; // @synthesize splashControlModel=_splashControlModel;
@property(retain) NSNumber *splashIsCache; // @synthesize splashIsCache=_splashIsCache;
@property(nonatomic) long long splashShowType; // @synthesize splashShowType=_splashShowType;
@property(retain, nonatomic) BUSplashZoomOutModel *splash_icon; // @synthesize splash_icon=_splash_icon;
@property(nonatomic) double startDownload_interval; // @synthesize startDownload_interval=_startDownload_interval;
@property(nonatomic) double startLoad_interval; // @synthesize startLoad_interval=_startLoad_interval;
@property(nonatomic) double startPlay_interval; // @synthesize startPlay_interval=_startPlay_interval;
@property(copy, nonatomic) NSString *targetURL; // @synthesize targetURL;
@property(retain, nonatomic) BUTplInfo *tplInfo; // @synthesize tplInfo=_tplInfo;
@property(copy, nonatomic) NSString *ulink; // @synthesize ulink;
@property(nonatomic) long long unionSpecial; // @synthesize unionSpecial=_unionSpecial;
@property(nonatomic) _Bool userDidCustomVideoPlayer; // @synthesize userDidCustomVideoPlayer=_userDidCustomVideoPlayer;
@property(nonatomic) _Bool validDislikeInputAccessoryView; // @synthesize validDislikeInputAccessoryView=_validDislikeInputAccessoryView;
@property(nonatomic) long long videoAdaptation; // @synthesize videoAdaptation=_videoAdaptation;
@property(nonatomic) long long videoDuration; // @synthesize videoDuration=_videoDuration;
@property(nonatomic) unsigned long long video_encode_type; // @synthesize video_encode_type=_video_encode_type;
@property(nonatomic) _Bool video_local_prefetch; // @synthesize video_local_prefetch=_video_local_prefetch;
@property(nonatomic) long long video_prefetch_error_code; // @synthesize video_prefetch_error_code=_video_prefetch_error_code;
@property(copy, nonatomic) NSString *video_prefetch_error_msg; // @synthesize video_prefetch_error_msg=_video_prefetch_error_msg;
@property(copy, nonatomic) NSString *video_prefetch_server_msg; // @synthesize video_prefetch_server_msg=_video_prefetch_server_msg;
@property(nonatomic) long long video_prefetch_size; // @synthesize video_prefetch_size=_video_prefetch_size;
@property(nonatomic) long long watchPercent; // @synthesize watchPercent=_watchPercent;
- (void)setupDataWithDictionary:(id)arg1;
- (_Bool)shouldInterstitialDismiss;
- (id)slideArea;
- (double)splashBottomViewAreaBlankHeight;
- (double)splashBottomViewAreaHeight;
- (double)splashBottomViewAreaWidth;
- (id)splashBottomViewBtnBackgroundDestColor;
- (id)splashBottomViewClickText;
- (double)splashBottomViewClickTextFontSize;
- (double)splashBottomViewClickTopTextFontSize;
- (double)splashBottomViewHalfBlankHeight;
- (double)splashBottomViewShakeAmplitude;
- (id)splashBottomViewTopClickText;
- (id)splashCoverImage;
- (long long)splashCoverType;
- (id)splashImage;
- (double)starCount;
- (unsigned long long)statusForSplash;
- (id)timeDiff;
- (long long)twistRotationThreshold;
- (void)updateLinkValue:(id)arg1 forKey:(id)arg2;
- (void)updateRewardLiveLinkParams:(long long)arg1;
- (id)updateUrl:(id)arg1 queryKey:(id)arg2 value:(id)arg3;
- (_Bool)vaildForPurePlayable;
- (_Bool)vaildForRewardedVideo;
- (_Bool)validForRewardedLive;
- (_Bool)validMiddleTemplate;
- (_Bool)validRelateMaterials;
@property(readonly, nonatomic) BUVideoInfo *videoInfo; // @synthesize videoInfo=_videoInfo;
@property(readonly, nonatomic) long long videoResolutionHeight;
@property(readonly, nonatomic) long long videoResolutionWidth;
@property(readonly, copy, nonatomic) NSString *videoUrl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

