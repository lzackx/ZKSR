//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class LSStatusBarHUD;

@interface UIViewController (YJProgress)
+ (void)bu_handleMethodSwizzle;
+ (id)bu_mainWindowRootViewController;
+ (id)bu_nextNavigationControllerFor:(id)arg1;
+ (id)bu_nextViewControllerFor:(id)arg1;
+ (id)bu_presentingViewController;
+ (id)bu_recursiveFindCurrentShowViewControllerFromViewController:(id)arg1;
+ (id)bu_topViewController;
- (void)bu_addMotionBegan:(long long)arg1 withEvent:(id)arg2;
- (id)bu_presentingViewController;
- (void)bu_safelyPresentViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)bu_swizzleMotionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)bu_windowMotionBegan:(long long)arg1 withEvent:(id)arg2;
@property(nonatomic) _Bool fd_interactivePopDisabled;
@property(nonatomic) double fd_interactivePopMaxAllowedInitialDistanceToLeftEdge;
@property(nonatomic) _Bool fd_prefersNavigationBarHidden;
@property(nonatomic) __weak LSStatusBarHUD *ls_hudWindow;
@property(nonatomic) __weak LSStatusBarHUD *ls_tempWindow;
@property(nonatomic) _Bool wxs_addTransitionFlag;
@property(nonatomic) _Bool wxs_backGestureEnable;
@property(copy, nonatomic) CDUnknownBlockType wxs_callBackTransition;
@property(nonatomic) _Bool wxs_delegateFlag;
@property(nonatomic) __weak id wxs_tempNavDelegate;
@property(nonatomic) __weak id wxs_transitioningDelegate;
- (void)setYJK_animationLayer:(id)arg1;
- (void)setYJK_endLayer:(id)arg1;
@property(nonatomic) double yjk_setOffSet;
- (id)umpNavigationController;
- (id)yjk_animationLayer;
- (id)yjk_endLayer;
- (void)yjk_finishProgressAndRemoveLayer:(_Bool)arg1;
- (id)yjk_generateShapeLayer;
- (id)yjk_layerPath;
- (void)yjk_removeAnimationLayer;
- (void)yjk_startProgress;
- (double)yjk_topNavigationHeight;
@end

