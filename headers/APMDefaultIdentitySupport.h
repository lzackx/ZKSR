//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "APMIdentitySupport-Protocol.h"

@class NSString;
@protocol APMIdentitySupport;

@interface APMDefaultIdentitySupport : NSObject <APMIdentitySupport>
{
    id <APMIdentitySupport> _platformIdentitySupport;
}

+ (_Bool)iOS14OrAbove;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) unsigned long long appDataConsentStatus;
@property(readonly, nonatomic) _Bool hasAppDataConsentStatus;
@property(readonly, nonatomic) _Bool hasLimitedAdTracking;
- (id)init;
@property(readonly, nonatomic) _Bool limitedAdTracking;
@property(readonly, nonatomic) NSString *resettableDeviceID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

