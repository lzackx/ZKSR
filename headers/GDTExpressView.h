//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTPlayerControlProtocol-Protocol.h"
#import "GDTWebViewDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdParams, GDTAdWKWebView, GDTPlayer, NSArray, NSDictionary, NSString;
@protocol GDTExpressViewDelegate;

@interface GDTExpressView : UIView <GDTWebViewDelegate, GDTPlayerControlProtocol>
{
    _Bool _isReady;
    _Bool _isRendering;
    _Bool _isDarkMode;
    _Bool _hasRecordedWebviewTerminate;
    _Bool _expressOptimizeEnabled;
    GDTPlayer *player;
    GDTPlayer *_videoPlayer;
    GDTAdBaseModel *_adModel;
    GDTAdParams *_adParams;
    NSDictionary *_businessSetting;
    id <GDTExpressViewDelegate> _delegate;
    CDUnknownBlockType _pressBlock;
    long long _renderTimeline;
    GDTAdWKWebView *_webView;
    double _startRenderingTime;
    double _webViewStartLoadTime;
    double _getAdInfoDelayTime;
    NSArray *_actionArray;
    double _renderDidFinishJSSendTime;
    NSString *_url;
}

- (void).cxx_destruct;
- (id)GDTfunctionb66ixn;
- (void)GDTfunctionc19I26:(id)arg1;
- (void)GDTfunctionc3KlSm:(id)arg1;
- (void)GDTfunctiond1eWjQ:(id)arg1;
- (void)GDTfunctione3LpJw:(id)arg1;
- (void)GDTfunctionf0jnig:(id)arg1;
- (void)GDTfunctionf5YIiv:(id)arg1;
- (id)GDTfunctionh6K5Uo;
- (void)GDTfunctionj1k2Yz;
- (_Bool)GDTfunctionm55QS3:(id)arg1 GDTfunctionh6AJjU:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 didStartProvisionalNavigation:(id)arg2;
- (void)GDTfunctionm55QS3:(id)arg1 handleJsRequest:(id)arg2;
- (void)GDTfunctionn6V5Eo;
- (void)GDTfunctiono0wAi5:(id)arg1 timeout:(double)arg2;
- (void)GDTfunctiono9piIx:(id)arg1;
- (void)GDTfunctionp8lS1O;
- (void)GDTfunctionq4sYvi;
- (id)GDTfunctionq7aGmm:(id)arg1;
- (id)GDTfunctionq8QnT3;
- (void)GDTfunctionr3F3C5;
- (id)GDTfunctionr6yza7;
- (void)GDTfunctions00zlI;
- (void)GDTfunctionv2CpFj:(id)arg1;
- (void)GDTfunctionv9VuWh;
- (void)GDTfunctionx1llCG:(id)arg1 params:(id)arg2;
- (void)GDTfunctionx5w6KV:(_Bool)arg1;
- (void)GDTfunctionx89ntj:(id)arg1;
- (void)GDTfunctiony3HbPY:(id)arg1;
- (void)GDTfunctionz3zoap:(id)arg1;
- (void)GDTfunctionz5owgP:(id)arg1;
@property(retain, nonatomic) NSArray *actionArray; // @synthesize actionArray=_actionArray;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAdParams *adParams; // @synthesize adParams=_adParams;
@property(retain, nonatomic) NSDictionary *businessSetting; // @synthesize businessSetting=_businessSetting;
- (void)dealloc;
@property(nonatomic) __weak id <GDTExpressViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool expressOptimizeEnabled; // @synthesize expressOptimizeEnabled=_expressOptimizeEnabled;
- (void)gdt_player:(id)arg1 currentTime:(double)arg2 totalTime:(double)arg3;
- (void)gdt_player:(id)arg1 playStateChanged:(unsigned long long)arg2;
@property(nonatomic) double getAdInfoDelayTime; // @synthesize getAdInfoDelayTime=_getAdInfoDelayTime;
@property(nonatomic) _Bool hasRecordedWebviewTerminate; // @synthesize hasRecordedWebviewTerminate=_hasRecordedWebviewTerminate;
- (id)initLz6dki4:(id)arg1 adParams:(id)arg2;
@property(nonatomic) _Bool isDarkMode; // @synthesize isDarkMode=_isDarkMode;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(nonatomic) _Bool isRendering; // @synthesize isRendering=_isRendering;
- (void)loadRequest:(id)arg1;
@property(nonatomic) __weak GDTPlayer *player; // @synthesize player;
@property(copy, nonatomic) CDUnknownBlockType pressBlock; // @synthesize pressBlock=_pressBlock;
- (_Bool)render:(id)arg1 timeout:(double)arg2;
@property(nonatomic) double renderDidFinishJSSendTime; // @synthesize renderDidFinishJSSendTime=_renderDidFinishJSSendTime;
@property(nonatomic) long long renderTimeline; // @synthesize renderTimeline=_renderTimeline;
@property(nonatomic) double startRenderingTime; // @synthesize startRenderingTime=_startRenderingTime;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak GDTPlayer *videoPlayer; // @synthesize videoPlayer=_videoPlayer;
@property(retain, nonatomic) GDTAdWKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) double webViewStartLoadTime; // @synthesize webViewStartLoadTime=_webViewStartLoadTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
