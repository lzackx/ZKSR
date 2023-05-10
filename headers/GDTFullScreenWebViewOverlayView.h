//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTFullScreenOverlayMediatorViewProtocol-Protocol.h"
#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdWKWebView, GDTFullScreenOverlayMediatorViewParam, GDTFullScreenVideoControl, GDTPlayer, NSString, UILabel, UIProgressView;
@protocol GDTFullScreenOverlayMediatorViewDelegate;

@interface GDTFullScreenWebViewOverlayView : UIView <GDTFullScreenOverlayMediatorViewProtocol, GDTPlayerControlProtocol, GDTWebViewDelegate>
{
    float _pressForce;
    float _pressRadius;
    GDTPlayer *_player;
    GDTAdBaseModel *_adModel;
    id <GDTFullScreenOverlayMediatorViewDelegate> _delegate;
    GDTFullScreenOverlayMediatorViewParam *_param;
    CDUnknownBlockType _mediatorRenderFailInternalBlock;
    GDTFullScreenVideoControl *_videoControl;
    UILabel *_toastLabel;
    long long _toastShowTime;
    long long _effectiveTime;
    GDTAdWKWebView *_bottomCardWebView;
    UIProgressView *_progressView;
    long long _playBeginTime;
}

- (void).cxx_destruct;
- (id)GDTfunctionc5AGfH;
- (struct CGRect)GDTfunctionl0RcoS;
- (_Bool)GDTfunctionm55QS3:(id)arg1 GDTfunctionh6AJjU:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 didFailProvisionalNavigation:(id)arg2 withError:(id)arg3;
- (void)GDTfunctionm55QS3:(id)arg1 didFinishNavigation:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 handleJsRequest:(id)arg2;
- (id)GDTfunctiono66UT8;
- (void)GDTfunctionq9xPQK:(id)arg1;
- (void)GDTfunctionw82i9l;
- (void)GDTfunctiony3HbPY:(id)arg1;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdWKWebView *bottomCardWebView; // @synthesize bottomCardWebView=_bottomCardWebView;
- (void)dealloc;
@property(nonatomic) __weak id <GDTFullScreenOverlayMediatorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long effectiveTime; // @synthesize effectiveTime=_effectiveTime;
- (void)gdt_player:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (id)initLz6dki4:(id)arg1;
- (void)layoutSubviews;
@property(copy, nonatomic) CDUnknownBlockType mediatorRenderFailInternalBlock; // @synthesize mediatorRenderFailInternalBlock=_mediatorRenderFailInternalBlock;
@property(retain, nonatomic) GDTFullScreenOverlayMediatorViewParam *param; // @synthesize param=_param;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player=_player;
@property(nonatomic) float pressForce; // @synthesize pressForce=_pressForce;
@property(nonatomic) float pressRadius; // @synthesize pressRadius=_pressRadius;
@property(retain, nonatomic) UIProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) UILabel *toastLabel; // @synthesize toastLabel=_toastLabel;
@property(nonatomic) long long toastShowTime; // @synthesize toastShowTime=_toastShowTime;
@property(retain, nonatomic) GDTFullScreenVideoControl *videoControl; // @synthesize videoControl=_videoControl;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

