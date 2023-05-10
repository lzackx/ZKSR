//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;
@protocol GADAdNetworkExtras;

@protocol GADMediationAdRequest <NSObject>
- (NSNumber *)childDirectedTreatment;
- (NSDictionary *)credentials;
- (NSString *)maxAdContentRating;
- (id <GADAdNetworkExtras>)networkExtras;
- (NSString *)publisherId;
- (_Bool)testMode;
- (NSNumber *)underAgeOfConsent;
- (NSDate *)userBirthday;
- (long long)userGender;
- (_Bool)userHasLocation;
- (NSArray *)userKeywords;
- (double)userLatitude;
- (double)userLocationAccuracyInMeters;
- (NSString *)userLocationDescription;
- (double)userLongitude;
@end
