//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BURewardFullScreenBaseVM.h"

#import "BUPurePlayableLoadingViewControllerDelegate-Protocol.h"

@class NSString;

@interface BUPlayableVM : BURewardFullScreenBaseVM <BUPurePlayableLoadingViewControllerDelegate>
{
}

- (void)clickButtonTapFromPlayableLoading;
- (void)closeBtnControl;
- (void)handlePurePlayablePlayFinish;
- (id)initViewModelWithMeta:(id)arg1 rootViewController:(id)arg2 slot:(id)arg3;
- (_Bool)isPlayableRenderFailed;
- (void)leftLblControl;
- (void)purePlayableRemoveLoadingByTimeout;
- (void)rewardReport;
- (void)startTimer;
- (void)updateLeftSeconds:(id)arg1;
- (void)vmLoadData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

