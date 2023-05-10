//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, GADWebAdView, NSMutableDictionary;

@interface GADPrecacheMonitor : NSObject
{
    GADWebAdView *_adView;
    GADObserverCollection *_observers;
    NSMutableDictionary *_precacheResourceMonitors;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)handlePrecacheAction:(id)arg1;
- (id)initWithWebAdView:(id)arg1 messageSource:(id)arg2;
- (void)removePrecacheResourceMonitor:(id)arg1;
- (id)resourceBufferForFileSource:(id)arg1;

@end

