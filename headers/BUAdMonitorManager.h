//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BUExpressAdMonitor, BUUserMonitor;

@interface BUAdMonitorManager : NSObject
{
    BUExpressAdMonitor *_expressAdMonitor;
    BUUserMonitor *_userMonitor;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) BUExpressAdMonitor *expressAdMonitor; // @synthesize expressAdMonitor=_expressAdMonitor;
- (id)init;
@property(retain, nonatomic) BUUserMonitor *userMonitor; // @synthesize userMonitor=_userMonitor;

@end

