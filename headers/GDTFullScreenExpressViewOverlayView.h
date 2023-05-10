//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTExpressViewDelegate-Protocol.h"
#import "GDTFullScreenOverlayMediatorViewProtocol-Protocol.h"

@class GDTAdBaseModel, GDTAdParams, GDTExpressView, GDTFullScreenOverlayMediatorViewParam, NSString;
@protocol GDTFullScreenOverlayMediatorViewDelegate;

@interface GDTFullScreenExpressViewOverlayView : UIView <GDTFullScreenOverlayMediatorViewProtocol, GDTExpressViewDelegate>
{
    _Bool _canUseNativeRender;
    float _pressForce;
    float _pressRadius;
    GDTAdBaseModel *_adModel;
    id <GDTFullScreenOverlayMediatorViewDelegate> _delegate;
    GDTFullScreenOverlayMediatorViewParam *_param;
    CDUnknownBlockType _mediatorRenderFailInternalBlock;
    GDTExpressView *_innerExpressView;
    long long _timeout;
    NSString *_url;
    GDTAdParams *_adParams;
    long long _effectiveTime;
    long long _playBeginTime;
}

- (void).cxx_destruct;
- (void)GDTfunctiona2I3wj:(id)arg1 clickParamsFromH5:(id)arg2 CTAType:(long long)arg3;
- (void)GDTfunctiond75jNz:(id)arg1 error:(unsigned long long)arg2;
- (void)GDTfunctione7vULB:(id)arg1;
- (void)GDTfunctionf6UQ40:(id)arg1 finalAdSize:(struct CGSize)arg2 playerFrame:(struct CGRect)arg3;
- (void)GDTfunctionp3dzmG;
- (void)GDTfunctions58b2M;
- (void)GDTfunctionw213EI:(id)arg1 forceCloseAd:(_Bool)arg2;
- (void)GDTfunctionw82i9l;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
- (id)businessSetting;
@property(nonatomic) _Bool canUseNativeRender; // @synthesize canUseNativeRender=_canUseNativeRender;
@property(nonatomic) __weak id <GDTFullScreenOverlayMediatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
- (id)initLz6dki4:(id)arg1;
@property(retain, nonatomic) GDTExpressView *innerExpressView; // @synthesize innerExpressView=_innerExpressView;
@property(copy, nonatomic) CDUnknownBlockType mediatorRenderFailInternalBlock; // @synthesize mediatorRenderFailInternalBlock=_mediatorRenderFailInternalBlock;
@property(retain, nonatomic) GDTFullScreenOverlayMediatorViewParam *param; // @synthesize param=_param;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(nonatomic) float pressForce; // @synthesize pressForce=_pressForce;
@property(nonatomic) float pressRadius; // @synthesize pressRadius=_pressRadius;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
- (void)setVideoMuted:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
