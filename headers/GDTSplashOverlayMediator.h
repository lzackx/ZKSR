//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTSplashAdModel, GDTSplashOverlayBaseView, NSTimer;
@protocol GDTSplashOverlayProtocol;

@interface GDTSplashOverlayMediator : NSObject
{
    GDTSplashOverlayBaseView<GDTSplashOverlayProtocol> *_overlayView;
    CDUnknownBlockType _leftTimeBlock;
    GDTSplashAdModel *_adModel;
    double _leftTime;
    NSTimer *_timer;
}

+ (long long)splashOverlayTypeWithAdModel:(id)arg1;
- (void).cxx_destruct;
- (void)GDTfunctiona6oemd;
- (void)GDTfunctionk8vC0U;
- (void)GDTfunctionv7Sahq;
- (void)GDTfunctionw9wJUA;
@property(retain, nonatomic) GDTSplashAdModel *adModel; // @synthesize adModel=_adModel;
- (void)dealloc;
- (id)initLz6dki4:(id)arg1 adProviderView:(id)arg2 skipView:(id)arg3;
@property(nonatomic) double leftTime; // @synthesize leftTime=_leftTime;
@property(copy, nonatomic) CDUnknownBlockType leftTimeBlock; // @synthesize leftTimeBlock=_leftTimeBlock;
@property(retain, nonatomic) GDTSplashOverlayBaseView<GDTSplashOverlayProtocol> *overlayView; // @synthesize overlayView=_overlayView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;

@end

