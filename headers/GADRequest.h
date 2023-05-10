//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GADAdInfo, GADLocation, NSArray, NSDictionary, NSMutableDictionary, NSNumber, NSString, UIWindowScene;

@interface GADRequest : NSObject <NSCopying>
{
    NSMutableDictionary *_networkExtrasMap;
    unsigned int _previousRequestCount;
    NSNumber *_childDirectedTreatment;
    GADLocation *_location;
    NSArray *_adTypes;
    GADAdInfo *_adInfo;
    NSString *_adString;
    NSArray *_testDevices;
    UIWindowScene *_scene;
    NSArray *_keywords;
    NSString *_contentURL;
    NSArray *_neighboringContentURLStrings;
    NSString *_requestAgent;
    NSString *_requestOrigin;
    NSString *_prefetchRequestID;
    NSDictionary *_customTargeting;
    NSString *_publisherProvidedID;
    NSArray *_categoryExclusions;
}

+ (id)request;
- (void).cxx_destruct;
- (id)adInfo;
- (id)adNetworkExtrasFor:(Class)arg1;
- (id)adString;
@property(copy, nonatomic) NSArray *adTypes; // @synthesize adTypes=_adTypes;
@property(readonly, nonatomic) NSDictionary *additionalSignals;
@property(copy, nonatomic) NSArray *categoryExclusions; // @synthesize categoryExclusions=_categoryExclusions;
- (id)childDirectedTreatment;
@property(copy, nonatomic) NSString *contentURL; // @synthesize contentURL=_contentURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSDictionary *customTargeting; // @synthesize customTargeting=_customTargeting;
- (id)init;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(readonly, nonatomic) GADLocation *location;
@property(copy, nonatomic) NSArray *neighboringContentURLStrings; // @synthesize neighboringContentURLStrings=_neighboringContentURLStrings;
@property(readonly, nonatomic) NSDictionary *networkExtrasMap;
@property(copy, nonatomic) NSString *prefetchRequestID; // @synthesize prefetchRequestID=_prefetchRequestID;
@property(copy, nonatomic) NSString *publisherProvidedID; // @synthesize publisherProvidedID=_publisherProvidedID;
- (void)registerAdNetworkExtras:(id)arg1;
- (void)removeAdNetworkExtrasFor:(Class)arg1;
@property(copy, nonatomic) NSString *requestAgent; // @synthesize requestAgent=_requestAgent;
@property(copy, nonatomic) NSString *requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(nonatomic) __weak UIWindowScene *scene; // @synthesize scene=_scene;
- (void)setAdInfo:(id)arg1;
- (void)setAdString:(id)arg1;
- (void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2 accuracy:(double)arg3;
- (void)setTestDevices:(id)arg1;
- (void)tagForChildDirectedTreatment:(_Bool)arg1;
- (id)testDevices;

@end

