//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdImpProtocol-Protocol.h"
#import "GDTAdImpS2SProtocol-Protocol.h"
#import "GDTFullScreenOverlayMediatorViewDelegate-Protocol.h"
#import "GDTMediaDownloaderDelegate-Protocol.h"
#import "GDTRewardVideoAdImpProtocol-Protocol.h"

@class GDTAdBaseModel, GDTBottomCardViewWebViewRenderConfig, GDTClickFacade, GDTEdgeSwipeBackWebview, GDTLoadAdParams, GDTMediaDownloader, GDTRewardVideoAd, GDTRewardVideoAdModel, GDTRewardVideoMediatorView, GDTServerSideVerificationOptions, NSDictionary, NSString, NSTimer, UIViewController;
@protocol GDTRewardAdPresenterProtocol, GDTRewardedVideoAdImpDelegate;

@interface GDTRewardVideoAdImp : NSObject <GDTFullScreenOverlayMediatorViewDelegate, GDTMediaDownloaderDelegate, GDTRewardVideoAdImpProtocol, GDTAdImpProtocol, GDTAdImpS2SProtocol>
{
    _Bool videoMuted;
    _Bool isFromS2S;
    _Bool _disableServerMediation;
    _Bool _fromExpressCall;
    _Bool _supportRewardPage;
    _Bool _downloadSuccess;
    _Bool _isLoading;
    _Bool _downloadVideoFinished;
    _Bool _hasTriggerVideoDidLoad;
    _Bool _hasTriggerPreload;
    _Bool _shouldPreRender;
    id <GDTRewardedVideoAdImpDelegate> delegate;
    GDTRewardVideoAd *rewardVideoAd;
    NSDictionary *tagDict;
    NSString *adNetworkName;
    GDTLoadAdParams *loadAdParams;
    id adDelegate;
    GDTServerSideVerificationOptions *serverSideVerificationOptions;
    NSDictionary *_mediationExtDict;
    NSString *s2sToken;
    NSString *_hybridAdHostUrl;
    NSString *_xflowPosId;
    NSString *_placementId;
    NSString *_threadId;
    double _requestBeginTime;
    double _requestEndTime;
    double _videoReadyTime;
    double _showBeginTime;
    GDTMediaDownloader *_downloader;
    GDTRewardVideoAdModel *_adModel;
    long long _expiredTimestamp;
    long long _serverType;
    long long _videoAdStartDownloadTimeInteger;
    UIViewController<GDTRewardAdPresenterProtocol> *_rewardAdViewController;
    UIViewController *_rootViewController;
    GDTClickFacade *_clickFacade;
    GDTRewardVideoMediatorView *_expressRewardView;
    GDTBottomCardViewWebViewRenderConfig *_renderConfig;
    long long _renderState;
    GDTAdBaseModel *_adModelForEvent;
    NSTimer *_downloadVideoTimer;
    GDTEdgeSwipeBackWebview *_rewardPlayPreloadView;
}

- (void).cxx_destruct;
- (void)GDTfunctiona0jTK3:(long long)arg1 ext:(id)arg2;
- (id)GDTfunctiona3eehS;
- (void)GDTfunctiona9Nbnz;
- (void)GDTfunctiona9R3lL:(id)arg1 didRenderFailWithError:(id)arg2;
- (void)GDTfunctionb0QrtW;
- (void)GDTfunctionb6uhC7:(id)arg1 ext:(id)arg2;
- (id)GDTfunctiond9eSqS;
- (void)GDTfunctione5CWGa;
- (void)GDTfunctione73rej;
- (void)GDTfunctionf0K8TM;
- (void)GDTfunctionf7njYw:(long long)arg1 resourceSize:(unsigned long long)arg2 duration:(unsigned long long)arg3 ext:(id)arg4;
- (void)GDTfunctiong09EAg:(id)arg1;
- (_Bool)GDTfunctionh5d3rO;
- (void)GDTfunctionl30ZfD;
- (void)GDTfunctionm9TDOe:(id)arg1;
- (void)GDTfunctionn7L0fs;
- (long long)GDTfunctiono0MTxm;
- (void)GDTfunctiono3pToM;
- (void)GDTfunctiono8SDGA:(id)arg1;
- (void)GDTfunctionp6gkEx:(unsigned long long)arg1 detailErrorCode:(unsigned long long)arg2;
- (void)GDTfunctionr4HCME:(id)arg1;
- (_Bool)GDTfunctionr66yw9;
- (id)GDTfunctions7xy7p;
- (void)GDTfunctiont7MBeN;
- (id)GDTfunctiont7hABZ;
- (void)GDTfunctiont8Y4hD:(id)arg1 clickArea:(long long)arg2;
- (void)GDTfunctionu6DCWa;
- (void)GDTfunctionu8BnHd;
- (void)GDTfunctionu8PCjW;
- (void)GDTfunctionv12THH;
- (void)GDTfunctionv7KsTV;
- (void)GDTfunctionw2KJIb;
- (id)GDTfunctionx3LIiJ:(id)arg1 key:(id)arg2;
- (void)GDTfunctionx5XJcT:(id)arg1 errorCode:(long long)arg2;
- (void)GDTfunctiony0kaiq:(long long)arg1 value:(long long)arg2 ext:(id)arg3;
- (void)GDTfunctionz1jmiT;
- (void)X__GDT__;
@property(nonatomic) __weak id adDelegate; // @synthesize adDelegate;
@property(retain, nonatomic) GDTRewardVideoAdModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
@property(copy, nonatomic) NSString *adNetworkName; // @synthesize adNetworkName;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
- (void)dealloc;
@property(nonatomic) __weak id <GDTRewardedVideoAdImpDelegate> delegate; // @synthesize delegate;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
@property(nonatomic) _Bool downloadSuccess; // @synthesize downloadSuccess=_downloadSuccess;
@property(nonatomic) _Bool downloadVideoFinished; // @synthesize downloadVideoFinished=_downloadVideoFinished;
@property(retain, nonatomic) NSTimer *downloadVideoTimer; // @synthesize downloadVideoTimer=_downloadVideoTimer;
@property(retain, nonatomic) GDTMediaDownloader *downloader; // @synthesize downloader=_downloader;
- (long long)eCPM;
- (id)eCPMLevel;
@property(nonatomic) long long expiredTimestamp; // @synthesize expiredTimestamp=_expiredTimestamp;
@property(retain, nonatomic) GDTRewardVideoMediatorView *expressRewardView; // @synthesize expressRewardView=_expressRewardView;
@property(nonatomic) _Bool fromExpressCall; // @synthesize fromExpressCall=_fromExpressCall;
@property(nonatomic) _Bool hasTriggerPreload; // @synthesize hasTriggerPreload=_hasTriggerPreload;
@property(nonatomic) _Bool hasTriggerVideoDidLoad; // @synthesize hasTriggerVideoDidLoad=_hasTriggerVideoDidLoad;
@property(copy, nonatomic) NSString *hybridAdHostUrl; // @synthesize hybridAdHostUrl=_hybridAdHostUrl;
- (id)initWithPlacementId:(id)arg1;
- (id)initWithPlacementId:(id)arg1 serverType:(long long)arg2;
@property(readonly, nonatomic, getter=isAdValid) _Bool adValid;
- (_Bool)isContractAd;
@property(nonatomic) _Bool isFromS2S; // @synthesize isFromS2S;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
- (void)loadAd;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams;
- (void)mediaDownloader:(id)arg1 didFinishedWithError:(id)arg2;
@property(retain, nonatomic) NSDictionary *mediationExtDict; // @synthesize mediationExtDict=_mediationExtDict;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
- (id)realMediationPrice;
@property(retain, nonatomic) GDTBottomCardViewWebViewRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property(nonatomic) long long renderState; // @synthesize renderState=_renderState;
@property(nonatomic) double requestBeginTime; // @synthesize requestBeginTime=_requestBeginTime;
@property(nonatomic) double requestEndTime; // @synthesize requestEndTime=_requestEndTime;
- (unsigned long long)rewardAdType;
@property(retain, nonatomic) UIViewController<GDTRewardAdPresenterProtocol> *rewardAdViewController; // @synthesize rewardAdViewController=_rewardAdViewController;
@property(retain, nonatomic) GDTEdgeSwipeBackWebview *rewardPlayPreloadView; // @synthesize rewardPlayPreloadView=_rewardPlayPreloadView;
@property(nonatomic) __weak GDTRewardVideoAd *rewardVideoAd; // @synthesize rewardVideoAd;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken;
- (void)sendLossNotificationWithWinnerPrice:(long long)arg1 lossReason:(long long)arg2 winnerAdnID:(id)arg3;
- (void)sendWinNotificationWithPrice:(long long)arg1;
@property(retain, nonatomic) GDTServerSideVerificationOptions *serverSideVerificationOptions; // @synthesize serverSideVerificationOptions;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
- (void)setBidECPM:(long long)arg1;
@property(nonatomic) _Bool shouldPreRender; // @synthesize shouldPreRender=_shouldPreRender;
@property(nonatomic) double showBeginTime; // @synthesize showBeginTime=_showBeginTime;
@property(nonatomic) _Bool supportRewardPage; // @synthesize supportRewardPage=_supportRewardPage;
@property(retain, nonatomic) NSDictionary *tagDict; // @synthesize tagDict;
@property(copy, nonatomic) NSString *threadId; // @synthesize threadId=_threadId;
@property(nonatomic) long long videoAdStartDownloadTimeInteger; // @synthesize videoAdStartDownloadTimeInteger=_videoAdStartDownloadTimeInteger;
@property(nonatomic) _Bool videoMuted; // @synthesize videoMuted;
@property(nonatomic) double videoReadyTime; // @synthesize videoReadyTime=_videoReadyTime;
@property(copy, nonatomic) NSString *xflowPosId; // @synthesize xflowPosId=_xflowPosId;
- (_Bool)showAdFromRootViewController:(id)arg1;
- (double)videoDuration;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
