//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class GDTLoadAdParams, GDTLoadAdRequestExtData, NSDictionary, NSMutableDictionary, NSString;

@interface GDTLoadAdRequestBaseData : NSObject
{
    _Bool _supportHttps;
    _Bool _supportNewLaunchScreen;
    _Bool _disableServerMediation;
    int _posWidth;
    int _posHeight;
    int _adPosCount;
    NSString *_placementId;
    NSString *_s2sToken;
    long long _count;
    long long _render_type;
    GDTLoadAdRequestExtData *_extReq;
    NSMutableDictionary *_jsExtMap;
    NSMutableDictionary *_splashExtMap;
    NSString *_checksum;
    GDTLoadAdParams *_loadAdParams;
    long long _sdkAdType;
    NSDictionary *_tagDict;
    long long _serverType;
}

- (void).cxx_destruct;
- (void)GDTfunctiona5c7Mn:(id)arg1;
- (void)GDTfunctionb3BSfc:(id)arg1 withJsReqDic:(id)arg2;
- (void)GDTfunctiond8wG6N:(id)arg1;
- (long long)GDTfunctioni95viS:(long long)arg1;
- (void)GDTfunctionn0TaPm:(id)arg1;
- (long long)GDTfunctionn9haxb:(long long)arg1;
- (void)GDTfunctiono36TFP;
- (id)GDTfunctionr3UFRK;
- (id)GDTfunctionv5bC16;
- (_Bool)GDTfunctionv8EvZg;
- (long long)GDTfunctionz8jBaa;
@property(nonatomic) int adPosCount; // @synthesize adPosCount=_adPosCount;
@property(copy, nonatomic) NSString *checksum; // @synthesize checksum=_checksum;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) _Bool disableServerMediation; // @synthesize disableServerMediation=_disableServerMediation;
- (id)extDic;
@property(retain, nonatomic) GDTLoadAdRequestExtData *extReq; // @synthesize extReq=_extReq;
- (id)init;
- (_Bool)isFromS2S;
@property(retain, nonatomic) NSMutableDictionary *jsExtMap; // @synthesize jsExtMap=_jsExtMap;
@property(retain, nonatomic) GDTLoadAdParams *loadAdParams; // @synthesize loadAdParams=_loadAdParams;
@property(copy, nonatomic) NSString *placementId; // @synthesize placementId=_placementId;
@property(nonatomic) int posHeight; // @synthesize posHeight=_posHeight;
@property(nonatomic) int posWidth; // @synthesize posWidth=_posWidth;
@property(nonatomic) long long render_type; // @synthesize render_type=_render_type;
@property(copy, nonatomic) NSString *s2sToken; // @synthesize s2sToken=_s2sToken;
@property(nonatomic) long long sdkAdType; // @synthesize sdkAdType=_sdkAdType;
@property(nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property(retain, nonatomic) NSMutableDictionary *splashExtMap; // @synthesize splashExtMap=_splashExtMap;
@property(nonatomic) _Bool supportHttps; // @synthesize supportHttps=_supportHttps;
@property(nonatomic) _Bool supportNewLaunchScreen; // @synthesize supportNewLaunchScreen=_supportNewLaunchScreen;
@property(retain, nonatomic) NSDictionary *tagDict; // @synthesize tagDict=_tagDict;

@end

