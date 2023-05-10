//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSOperationQueue;

@interface GADAnalytics : NSObject
{
    id _adExposureReporter;
    id _analyticsIdentifiers;
    id _analytics;
    id _screenViewReporter;
    // Error parsing type: AB, name: _analyticsEnabled
    NSOperationQueue *_operationQueue;
    GADObserverCollection *_observers;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)adEventID;
- (_Bool)analyticsEnabled;
- (id)appIDOrigin;
- (id)appInstanceID;
- (void)beginAdUnitExposure:(id)arg1;
- (void)endAdUnitExposure:(id)arg1;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
- (id)googleAppID;
- (id)initWithAPMFramework;
- (id)initWithFIRFramework;
- (void)logEventWithName:(id)arg1 adEventID:(id)arg2 parameters:(id)arg3;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;
- (void)startAppMeasurementWithOptions:(id)arg1;
- (void)updateConsentConfiguration;
- (void)updateNPABit;
- (_Bool)validateAnalytics;

@end

