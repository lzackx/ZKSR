//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTMediaDownloaderDelegate-Protocol.h"

@class GDTAdBaseModel, NSMutableArray, NSMutableDictionary, NSString;

@interface GDTSplashAdPreloadManager : NSObject <GDTMediaDownloaderDelegate>
{
    NSString *_preSelectVideoFileName;
    NSMutableArray *_downloadArray;
    NSMutableDictionary *_md5Dict;
    GDTAdBaseModel *_adModelForEvent;
}

+ (id)defaultManager;
+ (long long)playRoundValueWithPlacementId:(id)arg1 hotLaunch:(_Bool)arg2;
- (void).cxx_destruct;
- (void)GDTfunctiona2NmZG:(id)arg1;
- (void)GDTfunctiona5gDjI:(id)arg1 adServiceParams:(id)arg2 innerPreload:(_Bool)arg3;
- (_Bool)GDTfunctionb0fEMM:(id)arg1;
- (id)GDTfunctionc6K0pq:(id)arg1 hotLaunch:(_Bool)arg2;
- (id)GDTfunctionf8b5ey;
- (void)GDTfunctiong31jwF:(id)arg1;
- (id)GDTfunctionh0mABZ:(_Bool)arg1;
- (id)GDTfunctionh1ZIKL:(id)arg1 UOID:(id)arg2 hotLaunch:(_Bool)arg3;
- (void)GDTfunctioni1TmcF:(id)arg1 withPlacementID:(id)arg2;
- (id)GDTfunctioni9pomf;
- (id)GDTfunctionj4FpSG:(id)arg1 UOID:(id)arg2 hotLaunch:(_Bool)arg3;
- (_Bool)GDTfunctionj68G08:(id)arg1 toURLString:(id)arg2;
- (id)GDTfunctionm0ovv6:(_Bool)arg1;
- (id)GDTfunctionm5GGyv:(id)arg1 hotLaunch:(_Bool)arg2;
- (void)GDTfunctionm83rGZ:(id)arg1 withPlacementID:(id)arg2 hotLaunch:(_Bool)arg3;
- (id)GDTfunctionp3yErx:(id)arg1;
- (void)GDTfunctionp85xu1:(id)arg1 withPlacementID:(id)arg2 hotLaunch:(_Bool)arg3;
- (_Bool)GDTfunctionp8FAXw;
- (id)GDTfunctionq5Y2sW:(id)arg1;
- (id)GDTfunctions8A3HO:(id)arg1 UOID:(id)arg2 rotIndex:(long long)arg3 hotLaunch:(_Bool)arg4;
- (id)GDTfunctiont93m1a:(id)arg1 modelDict:(id)arg2;
- (id)GDTfunctiont9iDYu:(id)arg1;
- (void)GDTfunctionu3RLJ9:(id)arg1 withPlacementID:(id)arg2;
- (id)GDTfunctionu8FQuC:(id)arg1 hotLaunch:(_Bool)arg2;
- (id)GDTfunctionv1HrFA:(_Bool)arg1;
- (void)GDTfunctionx0Y8MP;
- (id)GDTfunctionx7KGL9:(_Bool)arg1;
- (void)GDTfunctiony077W3:(id)arg1 toPlist:(id)arg2;
- (id)GDTfunctionz8dJ6g:(_Bool)arg1;
- (id)GDTfunctionz8oHLc;
@property(retain, nonatomic) GDTAdBaseModel *adModelForEvent; // @synthesize adModelForEvent=_adModelForEvent;
@property(retain, nonatomic) NSMutableArray *downloadArray; // @synthesize downloadArray=_downloadArray;
@property(retain, nonatomic) NSMutableDictionary *md5Dict; // @synthesize md5Dict=_md5Dict;
- (void)mediaDownloader:(id)arg1 didFinishedWithError:(id)arg2;
@property(copy, nonatomic) NSString *preSelectVideoFileName; // @synthesize preSelectVideoFileName=_preSelectVideoFileName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

