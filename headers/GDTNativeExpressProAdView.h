//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"
#import "GDTExpressViewDelegate-Protocol.h"
#import "GDTTemplateViewProtocol-Protocol.h"
#import "GDTVideoPlayerViewDelegate-Protocol.h"

@class GDTAdParams, GDTAdViewExposureWithAntiSpamChecker, GDTAntiSpamClickData, GDTClickFacade, GDTExpressView, GDTUnifiedTemplateModel, GDTVideoEndCardView, GDTVideoPlayProgressReporter, GDTVideoPlayerView, NSString, UIViewController;
@protocol GDTNativeExpressProAdViewDelegate;

@interface GDTNativeExpressProAdView : UIView <GDTTemplateViewProtocol, GDTVideoPlayerViewDelegate, GDTExpressViewDelegate, GDTClickFacadeDelegate, GDTAdViewExposureWithAntiSpamCheckerDelegate>
{
    _Bool _isVideoAd;
    _Bool _viewable;
    _Bool _renderFinished;
    float _pressForce;
    float _pressRadius;
    id <GDTNativeExpressProAdViewDelegate> _delegate;
    UIViewController *_controller;
    GDTUnifiedTemplateModel *_adModel;
    GDTAdParams *_adParams;
    GDTVideoPlayerView *_videoPlayerView;
    GDTAdViewExposureWithAntiSpamChecker *_viewExposureChecker;
    GDTClickFacade *_clickFacade;
    GDTAntiSpamClickData *_antiSpamClickData;
    GDTExpressView *_expressView;
    GDTVideoEndCardView *_endcardView;
    GDTVideoPlayProgressReporter *_playProgressReporter;
}

- (void).cxx_destruct;
- (void)GDTfunctiona2I3wj:(id)arg1 clickParamsFromH5:(id)arg2 CTAType:(long long)arg3;
- (void)GDTfunctionb3lP7O;
- (void)GDTfunctionb9dpC4;
- (void)GDTfunctionc5PB5T:(id)arg1;
- (void)GDTfunctiond75jNz:(id)arg1 error:(unsigned long long)arg2;
- (void)GDTfunctionf3prAp:(unsigned long long)arg1 duration:(long long)arg2;
- (void)GDTfunctionf6UQ40:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctiong2wp1f:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctionh41Rgz;
- (void)GDTfunctioni6eKiP:(_Bool)arg1;
- (_Bool)GDTfunctionj34OUt;
- (void)GDTfunctionl1mmJB;
- (void)GDTfunctionl6ZBlY;
- (void)GDTfunctionm760MR;
- (void)GDTfunctionn1ab4f:(id)arg1;
- (long long)GDTfunctionn9BWFR;
- (double)GDTfunctionn9ecFI;
- (void)GDTfunctionp2v63S;
- (void)GDTfunctionq6zszL;
- (void)GDTfunctionr0HyKf:(id)arg1;
- (void)GDTfunctionr6vzIE;
- (void)GDTfunctiont6DgtJ;
- (_Bool)GDTfunctionu1oTlP:(_Bool)arg1;
- (_Bool)GDTfunctionu2TL4w;
- (void)GDTfunctionu3qFAd:(id)arg1;
- (void)GDTfunctionu5zvFM:(_Bool)arg1;
- (void)GDTfunctionv16mQd:(_Bool)arg1;
- (void)GDTfunctionw213EI:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctionx0GWL9;
- (_Bool)GDTfunctionx5uY8V;
- (void)GDTfunctionx8HJ4G;
- (double)GDTfunctiony0aJVS;
@property(retain, nonatomic) GDTUnifiedTemplateModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
- (void)autoPlay;
- (void)click:(id)arg1;
@property(retain, nonatomic) GDTClickFacade *clickFacade; // @synthesize clickFacade=_clickFacade;
@property(nonatomic) __weak UIViewController *controller; // @synthesize controller=_controller;
- (void)dealloc;
@property(nonatomic) __weak id <GDTNativeExpressProAdViewDelegate> delegate; // @synthesize delegate=_delegate;
- (long long)eCPM;
- (id)eCPMLevel;
@property(retain, nonatomic) GDTVideoEndCardView *endcardView; // @synthesize endcardView=_endcardView;
@property(retain, nonatomic) GDTExpressView *expressView; // @synthesize expressView=_expressView;
- (void)initLg1L2Cs;
- (id)initLz6dki4:(id)arg1 adParams:(id)arg2;
- (void)inner_render;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, nonatomic) _Bool isVideoAd; // @synthesize isVideoAd=_isVideoAd;
- (void)pause;
- (void)play;
@property(retain, nonatomic) GDTVideoPlayProgressReporter *playProgressReporter; // @synthesize playProgressReporter=_playProgressReporter;
- (id)player;
@property(nonatomic) float pressForce; // @synthesize pressForce=_pressForce;
@property(nonatomic) float pressRadius; // @synthesize pressRadius=_pressRadius;
- (void)render;
@property(nonatomic) _Bool renderFinished; // @synthesize renderFinished=_renderFinished;
@property(retain, nonatomic) GDTVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *viewExposureChecker; // @synthesize viewExposureChecker=_viewExposureChecker;
@property(nonatomic) _Bool viewable; // @synthesize viewable=_viewable;
- (void)stop;
- (_Bool)supportNativeEndcard;
- (double)videoDuration;
- (double)videoPlayTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

