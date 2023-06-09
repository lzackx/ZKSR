//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, UMTIdTracking;

@interface UMBuildPayload : NSObject
{
    UMTIdTracking *_idTracking;
    NSMutableDictionary *_jsonObject;
    NSMutableDictionary *_body;
}

+ (void)buildBaseheader:(id)arg1;
+ (float)calcProbWithSigIndex:(int)arg1;
+ (void)configureExperimentWithString:(id)arg1;
+ (id)generateImprintChecksum:(id)arg1;
+ (id)imprintWithData:(id)arg1 forKey:(id)arg2;
+ (_Bool)processFilterImprintKey:(id)arg1 withImprintValue:(id)arg2;
+ (id)saveUMKid;
+ (void)setFilterImprintKey:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
+ (id)sharedInstance;
+ (void)updateImprint:(id)arg1;
+ (_Bool)validateImprintChecksum:(id)arg1;
- (void).cxx_destruct;
- (void)buildIdTracking;
- (void)generateIdTracking;
- (id)init;
- (void)saveIdTracking;
- (_Bool)verifyResponseData:(id)arg1;
- (_Bool)verifySLResponseData:(id)arg1;

@end

