//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GDTAdViewClickWithAntiSpamCheckerDelegate-Protocol.h"
#import "GDTLandingPageWebViewControllerDelegate-Protocol.h"
#import "GDTVideoEndcardAppearanceProtocol-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class GDTAdBaseModel, GDTAdViewClickWithAntiSpamChecker, GDTAntiSpamClickData, GDTLandingPageWebViewController, GDTPanGestureRecognizer, NSString, UIViewController;

@interface GDTVideoLandingPageView : UIView <GDTLandingPageWebViewControllerDelegate, GDTAdViewClickWithAntiSpamCheckerDelegate, UIGestureRecognizerDelegate, GDTVideoEndcardAppearanceProtocol>
{
    _Bool _hasExposured;
    _Bool _hasReported;
    GDTAdBaseModel *_adModel;
    CDUnknownBlockType _endCardBodyClickedCallback;
    CDUnknownBlockType _loadFailureCallback;
    CDUnknownBlockType _loadSuccessCallback;
    CDUnknownBlockType _endCardCloseButtonClickedCallback;
    long long _playBeginTime;
    unsigned long long _status;
    UIViewController *_rootViewController;
    GDTLandingPageWebViewController *_landingPageWebVC;
    GDTAdViewClickWithAntiSpamChecker *_clickChecker;
    GDTAntiSpamClickData *_antiSpamClickData;
    GDTPanGestureRecognizer *_panGesture;
}

- (void).cxx_destruct;
- (void)GDTfunctionj5BM1Q;
- (void)GDTfunctionl1NSAo:(id)arg1;
- (void)GDTfunctionm55QS3:(id)arg1 loadFailWithError:(id)arg2;
- (void)GDTfunctiono8VRlh;
- (void)GDTfunctionp6HFVg:(id)arg1;
- (void)GDTfunctionq1UPQO;
- (void)GDTfunctionr4ngXh:(_Bool)arg1;
- (void)GDTfunctiont6bT8a:(_Bool)arg1;
- (void)GDTfunctionv3TV5E:(id)arg1;
- (void)GDTfunctiony0eEsr:(_Bool)arg1;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) GDTAntiSpamClickData *antiSpamClickData; // @synthesize antiSpamClickData=_antiSpamClickData;
@property(retain, nonatomic) GDTAdViewClickWithAntiSpamChecker *clickChecker; // @synthesize clickChecker=_clickChecker;
- (struct CGPoint)closeButtonClickPoint;
@property(copy, nonatomic) CDUnknownBlockType endCardBodyClickedCallback; // @synthesize endCardBodyClickedCallback=_endCardBodyClickedCallback;
@property(copy, nonatomic) CDUnknownBlockType endCardCloseButtonClickedCallback; // @synthesize endCardCloseButtonClickedCallback=_endCardCloseButtonClickedCallback;
- (void)gestureView:(id)arg1 didClickWithClickData:(id)arg2;
@property(nonatomic) _Bool hasExposured; // @synthesize hasExposured=_hasExposured;
@property(nonatomic) _Bool hasReported; // @synthesize hasReported=_hasReported;
- (void)initLw6DtHV;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 adModel:(id)arg2;
@property(retain, nonatomic) GDTLandingPageWebViewController *landingPageWebVC; // @synthesize landingPageWebVC=_landingPageWebVC;
@property(copy, nonatomic) CDUnknownBlockType loadFailureCallback; // @synthesize loadFailureCallback=_loadFailureCallback;
- (void)loadRequest;
@property(copy, nonatomic) CDUnknownBlockType loadSuccessCallback; // @synthesize loadSuccessCallback=_loadSuccessCallback;
@property(retain, nonatomic) GDTPanGestureRecognizer *panGesture; // @synthesize panGesture=_panGesture;
@property(nonatomic) long long playBeginTime; // @synthesize playBeginTime=_playBeginTime;
- (void)preloadRequest;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(copy, nonatomic) CDUnknownBlockType deepLinkCallback;
@property(readonly, copy) NSString *description;
@property(copy, nonatomic) CDUnknownBlockType endCardReplayButtonClickedCallback;
@property(readonly) unsigned long long hash;
@property(copy, nonatomic) CDUnknownBlockType jumpToAppstoreCallback;
@property(readonly) Class superclass;
@property(copy, nonatomic) NSString *xjLandingPageUrl;

@end

