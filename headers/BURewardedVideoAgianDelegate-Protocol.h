//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIViewController;

@protocol BURewardedVideoAgianDelegate <NSObject>
- (id)initWithRewardedVideoAd:(id)arg1;
- (void)loadRewardAgianWithSuccess:(void (^)(void))arg1 fail:(void (^)(void))arg2;
- (_Bool)showAdFromRootViewController:(UIViewController *)arg1;
@end
