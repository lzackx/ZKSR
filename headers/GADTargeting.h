//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADSignal-Protocol.h"
#import "GADSignalSource-Protocol.h"

@class GADAdInfo, GADLocation, GADRequest, NSArray, NSDictionary, NSMutableDictionary, NSSet, NSString, UIViewController, UIWindowScene;

@interface GADTargeting : NSObject <GADSignalSource, GADSignal>
{
    NSArray *_categoryExclusions;
    NSString *_contentURLString;
    NSArray *_neighboringContentURLStrings;
    NSDictionary *_customTargeting;
    NSDictionary *_networkExtrasMap;
    NSString *_publisherProvidedID;
    NSDictionary *_additionalRequestSignals;
    NSMutableDictionary *_signalSources;
    _Bool _isQueryInfoTargeting;
    NSArray *_adTypes;
    GADAdInfo *_adInfo;
    NSString *_adString;
    GADRequest *_request;
    NSArray *_keywords;
    GADLocation *_publisherProvidedLocation;
    NSString *_requestAgent;
    NSString *_requestOrigin;
    UIViewController *_rootViewController;
    NSSet *_nativeAdTypes;
    NSString *_adUnitID;
    UIWindowScene *_scene;
    struct GADAdSize _adSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) GADAdInfo *adInfo; // @synthesize adInfo=_adInfo;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(readonly, nonatomic) NSArray *adTypes; // @synthesize adTypes=_adTypes;
@property(readonly, nonatomic) NSString *adUnitID; // @synthesize adUnitID=_adUnitID;
- (void)addSignalEntriesToMutableDictionary:(id)arg1;
- (void)getSignalUpdateQueue:(id *)arg1 signalCreationBlock:(CDUnknownBlockType *)arg2;
- (id)initWithRequest:(id)arg1 adUnitID:(id)arg2;
@property(nonatomic) _Bool isQueryInfoTargeting; // @synthesize isQueryInfoTargeting=_isQueryInfoTargeting;
@property(readonly, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) NSSet *nativeAdTypes; // @synthesize nativeAdTypes=_nativeAdTypes;
- (id)networkExtrasForAdapterClass:(Class)arg1;
- (id)networkExtrasForClass:(Class)arg1;
@property(readonly, nonatomic) GADLocation *publisherProvidedLocation; // @synthesize publisherProvidedLocation=_publisherProvidedLocation;
@property(copy, nonatomic) GADRequest *request; // @synthesize request=_request;
@property(readonly, nonatomic) NSString *requestAgent; // @synthesize requestAgent=_requestAgent;
@property(copy, nonatomic) NSString *requestOrigin; // @synthesize requestOrigin=_requestOrigin;
@property(nonatomic) __weak UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(nonatomic) __weak UIWindowScene *scene; // @synthesize scene=_scene;
- (void)setSignalSource:(id)arg1 forKey:(id)arg2;
@property(readonly, nonatomic) NSDictionary *signalSources;
@property(readonly, nonatomic) _Bool testModeEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

