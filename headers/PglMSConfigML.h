//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PglMSConfigML : NSObject
{
    NSString *_appID;
    NSString *_deviceID;
    NSString *_installID;
    NSString *__tree_const_iterator_;
    NSString *_sessionID;
    NSString *_channel;
    NSDictionary *_customInfo;
    NSMutableDictionary *_advanceInfo;
    long long _clientType;
    long long _ovRegionType;
    NSString *_subAppID;
    NSString *_BDDeviceID;
    NSString *_sdkID;
    NSString *_licenseStr;
    long long _mode;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *BDDeviceID; // @synthesize BDDeviceID=_BDDeviceID;
@property(copy, nonatomic) NSString *_tree_const_iterator_; // @synthesize _tree_const_iterator_=__tree_const_iterator_;
- (CDUnknownBlockType)addAdvanceInfo;
@property(retain, nonatomic) NSMutableDictionary *advanceInfo; // @synthesize advanceInfo=_advanceInfo;
@property(copy, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(nonatomic) long long clientType; // @synthesize clientType=_clientType;
@property(copy, nonatomic) NSDictionary *customInfo; // @synthesize customInfo=_customInfo;
@property(copy, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
- (id)initWithAppID:(id)arg1 License:(id)arg2;
- (id)initWithAppID:(id)arg1 License:(id)arg2 Mode:(long long)arg3;
- (id)initWithSDKID:(id)arg1 SubAppID:(id)arg2 License:(id)arg3;
- (id)initWithSDKID:(id)arg1 SubAppID:(id)arg2 License:(id)arg3 Mode:(long long)arg4;
@property(copy, nonatomic) NSString *installID; // @synthesize installID=_installID;
@property(copy, nonatomic) NSString *licenseStr; // @synthesize licenseStr=_licenseStr;
- (_Bool)mc_chroma_v_neon_;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long ovRegionType; // @synthesize ovRegionType=_ovRegionType;
@property(copy, nonatomic) NSString *sdkID; // @synthesize sdkID=_sdkID;
@property(copy, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (CDUnknownBlockType)setBDDeviceID;
- (CDUnknownBlockType)setChannel;
- (CDUnknownBlockType)setClientType;
- (CDUnknownBlockType)setCustomInfo;
- (CDUnknownBlockType)setDeviceID;
- (CDUnknownBlockType)setIDFA;
- (CDUnknownBlockType)setInstallID;
- (CDUnknownBlockType)setMode;
- (CDUnknownBlockType)setOvRegionType;
- (CDUnknownBlockType)setSessionID;
@property(copy, nonatomic) NSString *subAppID; // @synthesize subAppID=_subAppID;

@end
