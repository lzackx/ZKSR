//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "GADMonitorOwner-Protocol.h"
#import "GADPresenting-Protocol.h"

@class GADCloseButton, GADEventContext, GADObserverCollection, NSMutableArray, NSString, UIView, UIWindowScene;

@interface GADFullScreenAdViewController : UIViewController <GADPresenting, GADMonitorOwner>
{
    _Bool _viewWasConfigured;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _relinquishScreenCalled;
    _Bool _webViewProcessDidTerminate;
    UIView *_adView;
    NSMutableArray *_monitors;
    GADEventContext *_context;
    GADObserverCollection *_observers;
    GADObserverCollection *_willDeactivateObservers;
    long long _lastOrientation;
    double _backgroundTimeIntervalSinceBoot;
    _Bool _adOrientationsOverridesLockedOrientation;
    _Bool _preferHomeIndicatorHidden;
    _Bool _presented;
    _Bool _shouldAdAutoRotate;
    _Bool _useAdViewFrameForContentSizePriorToPresentation;
    GADCloseButton *_closeButton;
    unsigned long long _closeButtonAnimationStyle;
    double _closeButtonAnimationDuration;
    unsigned long long _supportedInterfaceOrientations;
    unsigned long long _adOrientations;
    long long _forcedAdOrientation;
    double _orientationUpdateAnimationDuration;
    double _maxCroppedWidth;
    double _maxCroppedHeight;
    double _maxBackgroundTimeIntervalWithoutDismissing;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long adOrientations; // @synthesize adOrientations=_adOrientations;
@property(nonatomic) _Bool adOrientationsOverridesLockedOrientation; // @synthesize adOrientationsOverridesLockedOrientation=_adOrientationsOverridesLockedOrientation;
- (void)addMonitor:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1 error:(id *)arg2;
@property(readonly, nonatomic) GADCloseButton *closeButton; // @synthesize closeButton=_closeButton;
@property(nonatomic) double closeButtonAnimationDuration; // @synthesize closeButtonAnimationDuration=_closeButtonAnimationDuration;
@property(nonatomic) unsigned long long closeButtonAnimationStyle; // @synthesize closeButtonAnimationStyle=_closeButtonAnimationStyle;
- (void)configureView;
- (_Bool)contentFitsInSize:(struct CGSize)arg1;
@property(readonly, nonatomic) GADEventContext *context;
- (void)dealloc;
@property(nonatomic) long long forcedAdOrientation; // @synthesize forcedAdOrientation=_forcedAdOrientation;
- (void)handleCloseButtonPressed;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithView:(id)arg1 context:(id)arg2;
@property(nonatomic) double maxBackgroundTimeIntervalWithoutDismissing; // @synthesize maxBackgroundTimeIntervalWithoutDismissing=_maxBackgroundTimeIntervalWithoutDismissing;
@property(nonatomic) double maxCroppedHeight; // @synthesize maxCroppedHeight=_maxCroppedHeight;
@property(nonatomic) double maxCroppedWidth; // @synthesize maxCroppedWidth=_maxCroppedWidth;
@property(nonatomic) double orientationUpdateAnimationDuration; // @synthesize orientationUpdateAnimationDuration=_orientationUpdateAnimationDuration;
@property(nonatomic) _Bool preferHomeIndicatorHidden; // @synthesize preferHomeIndicatorHidden=_preferHomeIndicatorHidden;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) _Bool presented; // @synthesize presented=_presented;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
@property(nonatomic) _Bool shouldAdAutoRotate; // @synthesize shouldAdAutoRotate=_shouldAdAutoRotate;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic) _Bool useAdViewFrameForContentSizePriorToPresentation; // @synthesize useAdViewFrameForContentSizePriorToPresentation=_useAdViewFrameForContentSizePriorToPresentation;
- (_Bool)shouldAutorotate;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)updateBackgroundTimeIntervalSinceBoot;
- (void)viewChangedToOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
@property(readonly, nonatomic) __weak UIWindowScene *windowScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

