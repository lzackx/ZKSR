//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSArray;

@interface GADVideoPingMonitor : NSObject
{
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasHandledVideoEvent
    NSArray *_URLStrings;
    GADObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(id)arg2;
- (void).cxx_destruct;
- (void)handleVideoEvents:(id)arg1;
- (id)initWithAd:(id)arg1 notificationName:(id)arg2 URLStrings:(id)arg3;

@end

