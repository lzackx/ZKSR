//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADCloseButton, GADObserverCollection, UIView;

@interface GADCloseButtonMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADCloseButton *_closeButton;
    UIView *_closeButtonContainerView;
}

- (void).cxx_destruct;
- (void)closeButtonPressed:(id)arg1;
- (id)initWithCloseButton:(id)arg1 closeButtonContainerView:(id)arg2;
- (void)positionCloseButton;

@end

