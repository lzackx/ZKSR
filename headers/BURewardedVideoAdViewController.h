//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class BURewardFullScreenBaseVM;
@protocol BUVideoAdDelegate;

@interface BURewardedVideoAdViewController : UIViewController
{
    BURewardFullScreenBaseVM *_viewModel;
}

- (void).cxx_destruct;
- (id)initViewControllerWithAd:(id)arg1 slot:(id)arg2;
- (void)openAppStore;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)prefersStatusBarHidden;
@property(retain, nonatomic) id <BUVideoAdDelegate> rewardedVideoAd;
@property(retain, nonatomic) BURewardFullScreenBaseVM *viewModel; // @synthesize viewModel=_viewModel;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)switchToWebViewMute:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
