//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "CAAnimationDelegate-Protocol.h"
#import "UIViewControllerAnimatedTransitioning-Protocol.h"

@class NSString;

@interface KSYD_LeftTransitions : NSObject <CAAnimationDelegate, UIViewControllerAnimatedTransitioning>
{
    _Bool _is;
    _Bool _autoShowAndHideNavBar;
    double _transitionDuration;
    double _startingAlpha;
    id _transitionContext;
}

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
@property(nonatomic) _Bool autoShowAndHideNavBar; // @synthesize autoShowAndHideNavBar=_autoShowAndHideNavBar;
- (id)getSysTransitionWithType:(_Bool)arg1;
- (id)initWithTransitionDuration:(double)arg1 StartingAlpha:(double)arg2 isBOOL:(_Bool)arg3;
@property(nonatomic) _Bool is; // @synthesize is=_is;
@property(nonatomic) double startingAlpha; // @synthesize startingAlpha=_startingAlpha;
@property(retain, nonatomic) id transitionContext; // @synthesize transitionContext=_transitionContext;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=_transitionDuration;
- (double)transitionDuration:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

