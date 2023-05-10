//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GADAdContent, GADEventContext, NSString, NSURL, UIButton;
@protocol GADDebugOptionsViewControllerDelegate;

@interface GADDebugOptionsViewController : UIViewController
{
    GADAdContent *_ad;
    GADEventContext *_context;
    NSString *_adDebugDialogString;
    NSURL *_debugDeviceLinkingURL;
    UIButton *_closeButton;
    _Bool _debugSignalStatusFetchInProgress;
    _Bool _inAppPreviewTokenFetchInProgress;
    NSString *_adUnitID;
    _Bool _shouldEnableInAppPreview;
    _Bool _shouldEnableDebugSignal;
    id <GADDebugOptionsViewControllerDelegate> _delegate;
}

+ (id)debugOptionsViewControllerWithAdUnitID:(id)arg1;
- (void).cxx_destruct;
- (void)closeButtonPressed:(id)arg1;
- (void)createDeviceIdentifierAndlinkDevice;
- (void)dealloc;
- (id)debugDeviceQueryParameters;
- (id)debugURLRequestForString:(id)arg1;
@property(nonatomic) __weak id <GADDebugOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishedDebugFlow;
- (void)handlePresentAdInspector;
- (void)inAppPreviewSignalStatusReceivedResponse:(id)arg1 data:(id)arg2;
- (id)initWithAd:(id)arg1 adUnitID:(id)arg2 debugDialogString:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)linkDebugSignal;
- (void)linkDevice;
- (void)linkInAppPreview;
- (void)presentAdInspectorSettingsViewController;
- (void)presentDebugOptionsViewController;
- (void)showAlertViewControllerWithTitle:(id)arg1;
- (void)showCreativeInformationAlertView;
- (void)showFeatureNotEnabledAlertView;
- (void)showSystemErrorAlertView;
- (void)updateConfigurationFromSettings;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end

