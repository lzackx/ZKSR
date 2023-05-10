//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CTTelephonyNetworkInfo, NSArray, NSDictionary, NSNumber, NSString;

@interface BUCNPrivacy : NSObject
{
    CTTelephonyNetworkInfo *_telephonyNetworkInfo;
    NSDictionary *_privacy;
    long long _ad_enable;
    long long _personalized_ad;
    long long _sladar_enable;
    long long _debugLog_enable;
    long long _app_log_enable;
    long long _sec_enable;
    NSArray *_fields_allowed;
    NSDictionary *_capacityMethod;
    CDUnknownBlockType _getTelephonyNetworkInfoBlock;
    NSNumber *_longitude;
    NSNumber *_latitude;
    NSString *_customIdfaString;
    double _startDeviceTime;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (long long)bu_AdEnable;
+ (long long)bu_app_log_enable;
+ (id)bu_countryOrderNum;
+ (long long)bu_debugLog_enable;
+ (_Bool)bu_fields_allowed:(id)arg1;
+ (id)bu_fields_allowed_array;
+ (id)bu_getInformation:(id)arg1;
+ (id)bu_getOriginalIDFA;
+ (long long)bu_personalized_ad;
+ (long long)bu_sec_enable;
+ (void)bu_setCustomIDFA:(id)arg1;
+ (void)bu_setPrivacyInfo:(id)arg1;
+ (void)bu_setTelephonyNetworkInfoWithBlock:(CDUnknownBlockType)arg1;
+ (void)bu_setTestLatitude:(id)arg1;
+ (void)bu_setTestLongitude:(id)arg1;
+ (id)bu_skadNetwork_id_array;
+ (long long)bu_sladar_enable;
+ (void)checkSettingsForEnable:(id *)arg1;
+ (id)getCarrierMCC;
+ (id)getCarrierMNC;
+ (id)getCurrentIMSI;
+ (id)getDeviceRunTime;
+ (id)getDeviceStartTime;
+ (id)getPhoneName;
+ (id)idfaString;
+ (_Bool)isUnionBundleId;
+ (id)latitude;
+ (id)longitude;
+ (id)md5String:(id)arg1;
+ (id)shareManager;
+ (id)systemUpdateTime;
- (void).cxx_destruct;
@property long long ad_enable; // @synthesize ad_enable=_ad_enable;
@property long long app_log_enable; // @synthesize app_log_enable=_app_log_enable;
- (void)calculateDeviceStartTime;
@property(retain) NSDictionary *capacityMethod; // @synthesize capacityMethod=_capacityMethod;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSString *customIdfaString; // @synthesize customIdfaString=_customIdfaString;
@property long long debugLog_enable; // @synthesize debugLog_enable=_debugLog_enable;
@property(retain) NSArray *fields_allowed; // @synthesize fields_allowed=_fields_allowed;
@property(copy) CDUnknownBlockType getTelephonyNetworkInfoBlock; // @synthesize getTelephonyNetworkInfoBlock=_getTelephonyNetworkInfoBlock;
@property(retain) NSNumber *latitude; // @synthesize latitude=_latitude;
@property(retain) NSNumber *longitude; // @synthesize longitude=_longitude;
@property long long personalized_ad; // @synthesize personalized_ad=_personalized_ad;
@property(retain) NSDictionary *privacy; // @synthesize privacy=_privacy;
@property long long sec_enable; // @synthesize sec_enable=_sec_enable;
@property long long sladar_enable; // @synthesize sladar_enable=_sladar_enable;
@property double startDeviceTime; // @synthesize startDeviceTime=_startDeviceTime;
@property(retain) CTTelephonyNetworkInfo *telephonyNetworkInfo; // @synthesize telephonyNetworkInfo=_telephonyNetworkInfo;

@end

