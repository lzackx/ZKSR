//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewController;
@protocol GDTNativeExpressAdViewAdapterProtocol;

@interface GDTNativeExpressAdView : UIView
{
    id <GDTNativeExpressAdViewAdapterProtocol> _mediator;
}

- (void).cxx_destruct;
- (id)GDTfunctions7xy7p;
- (id)adModel;
@property(nonatomic) __weak UIViewController *controller;
- (long long)eCPM;
- (id)eCPMLevel;
@property(readonly, nonatomic) _Bool isReady;
@property(readonly, nonatomic) _Bool isVideoAd;
@property(retain, nonatomic) id <GDTNativeExpressAdViewAdapterProtocol> mediator; // @synthesize mediator=_mediator;
- (void)render;
- (void)setFrame:(struct CGRect)arg1;
- (double)videoDuration;
- (double)videoPlayTime;

@end

