//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADEventContext, NSURL;

@interface GADBackgroundTaskPinger : NSObject
{
    GADEventContext *_context;
    unsigned long long _backgroundTaskIdentifier;
    NSURL *_URL;
}

- (void).cxx_destruct;
- (void)endBackgroundTask;
- (id)initWithURL:(id)arg1 eventContext:(id)arg2;
- (void)ping;

@end

