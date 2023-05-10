//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface BLYMartianTracker : BLYAbstractModule
{
    _Bool _autoTrackingEnable;
    NSObject<OS_dispatch_queue> *_trackerQueue;
    NSMutableArray *_trackerMessages;
}

+ (id)constructSelector;
+ (id)currentTimeString;
+ (id)sharedTracker;
+ (id)trackLog;
+ (void)trackPageView:(id)arg1;
- (void).cxx_destruct;
- (id)allLogs;
- (void)didReceiveAppLifeCycleEvent:(id)arg1;
- (_Bool)disableModule;
- (_Bool)enableModule;
- (id)init;
@property(nonatomic, getter=isAutoTrackingEnabled) _Bool autoTrackingEnable; // @synthesize autoTrackingEnable=_autoTrackingEnable;
- (void)registerAppLifeCycleEvents;
@property(retain, nonatomic) NSMutableArray *trackerMessages; // @synthesize trackerMessages=_trackerMessages;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *trackerQueue; // @synthesize trackerQueue=_trackerQueue;
- (void)startTrack;
- (void)trackAppLifeCycleEvent:(id)arg1;
- (void)trackMessage:(id)arg1;

@end

