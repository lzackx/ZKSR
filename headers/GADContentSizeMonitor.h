//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAdContent, GADObserverCollection, GADWebViewController;

@interface GADContentSizeMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAdContent *_ad;
    GADWebViewController *_webViewController;
    double _lastObservedContentHeight;
}

- (void).cxx_destruct;
- (id)initWithWebAdView:(id)arg1 ad:(id)arg2;
- (void)updateContentHeight:(double)arg1;
- (void)updateContentHeightWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

