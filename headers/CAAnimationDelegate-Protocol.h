//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CAAnimation;

@protocol CAAnimationDelegate <NSObject>

@optional
- (void)animationDidStart:(CAAnimation *)arg1;
- (void)animationDidStop:(CAAnimation *)arg1 finished:(_Bool)arg2;
@end

