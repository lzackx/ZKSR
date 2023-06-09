//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface GADFIRAnalyticsStub : NSObject
{
    NSString *_googleAppID;
    NSString *_analyticsAppID;
    NSString *_appInstanceID;
    NSString *_adEventID;
    NSString *_origin;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *adEventID; // @synthesize adEventID=_adEventID;
@property(readonly, copy, nonatomic) NSString *analyticsAppID; // @synthesize analyticsAppID=_analyticsAppID;
@property(readonly, copy, nonatomic) NSString *appInstanceID; // @synthesize appInstanceID=_appInstanceID;
- (void)beginAdUnitExposure:(id)arg1;
- (void)endAdUnitExposure:(id)arg1;
- (void)getScreenName:(id *)arg1 screenClass:(id *)arg2;
@property(readonly, copy, nonatomic) NSString *googleAppID; // @synthesize googleAppID=_googleAppID;
- (void)logInternalEventWithOrigin:(id)arg1 name:(id)arg2 parameters:(id)arg3;
@property(readonly, copy, nonatomic) NSString *origin; // @synthesize origin=_origin;
- (void)setAnalyticsEnabled:(_Bool)arg1;
- (void)setScreenName:(id)arg1 screenClass:(id)arg2;

@end

