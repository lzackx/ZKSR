//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSMutableDictionary;

@interface GADPersistentStateMonitor : NSObject
{
    GADObserverCollection *_observers;
    NSMutableDictionary *_state;
}

- (void).cxx_destruct;
- (id)initWithMessageSource:(id)arg1;
- (void)saveState:(id)arg1;
- (id)savedState;

@end

