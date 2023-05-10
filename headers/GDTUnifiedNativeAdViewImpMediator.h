//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTAdViewExposureWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTClickFacadeDelegate-Protocol.h"

@class GDTAdViewClickWithAntiSpamChecker, GDTAdViewExposureWithAntiSpamChecker, GDTAntiSpamClickData, GDTClickFacade, GDTLogoView, GDTMediaView, GDTUnifiedNativeAdDataObject, GDTUnifiedNativeAdViewImp, NSArray, NSString, UIView, UIViewController;

@interface GDTUnifiedNativeAdViewImpMediator : NSObject <GDTAdViewExposureWithAntiSpamCheckerDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate, GDTClickFacadeDelegate>
{
    UIViewController *_viewController;
    GDTClickFacade *_bodyClickFacade;
    UIView *_CTAView;
    GDTMediaView *_mediaView;
    GDTUnifiedNativeAdDataObject *_dataObject;
    GDTLogoView *_logoView;
    GDTUnifiedNativeAdViewImp *_viewComponent;
    GDTAntiSpamClickData *_antiSpamClickData;
    NSArray *_clickableViews;
    NSArray *_customClickableViews;
    long long _playBeginTime;
    GDTAdViewClickWithAntiSpamChecker *_antispamClickChecker;
    GDTAdViewExposureWithAntiSpamChecker *_antispamExposureChecker;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *CTAView; // @synthesize CTAView=_CTAView;
- (void)GDTfunctionb3lP7O;
- (void)GDTfunctiong91sE2;
- (void)GDTfunctionh41Rgz;
- (_Bool)GDTfunctionh4jX5y;
- (void)GDTfunctioni801Em;
- (void)GDTfunctionk4iNd2;
- (void)GDTfunctionl1mmJB;
- (void)GDTfunctionl6ZBlY;
- (void)GDTfunctionn8Dvl0;
- (void)GDTfunctiono6JURV:(id)arg1;
- (void)GDTfunctionp0QQIb:(id)arg1;
- (void)GDTfunctionq6zszL;
- (void)GDTfunctionr0HyKf:(id)arg1;
- (id)GDTfunctionr0qUaV:(id)arg1;
- (void)GDTfunctionr6vzIE;
- (id)GDTfunctiont0cGov;
- (void)GDTfunctionv3qyBJ;
- (void)GDTfunctionw8hxCS;
- (long long)GDTfunctionx1lFtC:(id)arg1;
- (void)GDTfunctiony7oa6X:(id)arg1 fitView:(id)arg2 forbidEnterDetailPage:(_Bool)arg3;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *antispamClickChecker; // @synthesize antispamClickChecker=_antispamClickChecker;
@property(retain, nonatomic) GDTAdViewExposureWithAntiSpamChecker *antispamExposureChecker; // @synthesize antispamExposureChecker=_antispamExposureChecker;
@property(retain, nonatomic) GDTClickFacade *bodyClickFacade; // @synthesize bodyClickFacade=_bodyClickFacade;
- (void)clickHandler:(id)arg1;
@property(retain, nonatomic) NSArray *clickableViews; // @synthesize clickableViews=_clickableViews;
@property(retain, nonatomic) NSArray *customClickableViews; // @synthesize customClickableViews=_customClickableViews;
@property(retain, nonatomic) GDTUnifiedNativeAdDataObject *dataObject; // @synthesize dataObject=_dataObject;
- (void)dealloc;
- (void)gestureView:(id)arg1 didClickWithClickData:(id)arg2;
- (id)initLm5rqr2:(id)arg1 logoView:(id)arg2 dataObject:(id)arg3 clickableViews:(id)arg4 customClickableViews:(id)arg5 viewComponent:(id)arg6 viewController:(id)arg7;
@property(retain, nonatomic) GDTLogoView *logoView; // @synthesize logoView=_logoView;
@property(retain, nonatomic) GDTMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
@property(nonatomic) __weak GDTUnifiedNativeAdViewImp *viewComponent; // @synthesize viewComponent=_viewComponent;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

