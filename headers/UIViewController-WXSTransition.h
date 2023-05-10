//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UINavigationControllerDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class NSString;

@interface UIViewController (WXSTransition) <UIViewControllerTransitioningDelegate, UINavigationControllerDelegate>
+ (void)load;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)interactionControllerForDismissal:(id)arg1;
- (id)interactionControllerForPresentation:(id)arg1;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (void)wxs_dismissViewControllerAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wxs_presentViewController:(id)arg1 animationType:(long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wxs_presentViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)wxs_presentViewController:(id)arg1 makeTransition:(CDUnknownBlockType)arg2;
- (void)wxs_presentViewController:(id)arg1 makeTransition:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)wxs_viewDidAppear:(_Bool)arg1;
- (void)wxs_viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

