//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUCNAuxiliaryManager : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)appID;
+ (id)appName;
+ (id)benginAddress;
+ (id)bodyEncry:(id)arg1;
+ (long long)bu_AdEnable;
+ (id)bu_CONSENT_URL_key;
+ (id)bu_DY_ENGINE_URL_key;
+ (id)bu_GDPR_URL;
+ (id)bu_GDPR_key;
+ (id)bu_IS_GDPR_USER_key;
+ (id)bu_LastDeeplinkJumpTimeKey;
+ (id)bu_NET_CONFIG_TNC_CMD;
+ (id)bu_NET_CONFIG_TNC_VERSION;
+ (id)bu_SettingKey;
+ (id)bu_TrackInfoDicKey;
+ (id)bu_URI_Batch;
+ (id)bu_URI_Dislike;
+ (id)bu_URI_RewardedLive;
+ (id)bu_URI_RewardedVideoPlayFinish;
+ (id)bu_URI_Setting;
+ (id)bu_URI_SplashCheckCacheVaild;
+ (id)bu_URI_Stats;
+ (id)bu_URI_TNC_GetDomins;
+ (id)bu_URI_UnionAd;
+ (id)bu_URL_BASE_AD;
+ (id)bu_URL_BASE_AD_BACKUP;
+ (id)bu_URL_BASE_Extlog;
+ (id)bu_URL_BASE_Extlog_ForETTest;
+ (id)bu_URL_BASE_TNC;
+ (id)bu_URL_template;
+ (id)bu_aem_upload_url;
+ (long long)bu_app_log_enable;
+ (id)bu_countryOrderNum;
+ (long long)bu_debugLog_enable;
+ (_Bool)bu_fields_allowed:(id)arg1;
+ (id)bu_fields_allowed_array;
+ (id)bu_fileCacheParentDirectoryName;
+ (id)bu_getInformation:(id)arg1;
+ (id)bu_getOriginalIDFA;
+ (long long)bu_personalized_ad;
+ (id)bu_playable_test_icon_url;
+ (id)bu_playable_test_video_url;
+ (long long)bu_sec_enable;
+ (void)bu_setCustomIDFA:(id)arg1;
+ (void)bu_setPrivacyInfo:(id)arg1;
+ (void)bu_setTelephonyNetworkInfoWithBlock:(CDUnknownBlockType)arg1;
+ (void)bu_setTestLatitude:(id)arg1;
+ (void)bu_setTestLongitude:(id)arg1;
+ (id)bu_skadNetwork_id_array;
+ (long long)bu_sladar_enable;
+ (id)bu_themeStatus_key;
+ (id)doHttpReqSignByUrl:(id)arg1 body:(id)arg2;
+ (id)endAddress;
+ (id)gecko_IESGeckoKitAccessKey;
+ (id)gecko_IESGeckoKitAppId;
+ (id)gecko_IESGeckoKit_CACHE_DIRECTORY;
+ (id)gecko_IESGeckoKit_Domains;
+ (id)getMsDidToken;
+ (void)initAPMWithRange:(id)arg1 info:(id)arg2;
+ (void)initApplog:(id)arg1 block:(CDUnknownBlockType)arg2;
+ (id)initSecGuardWithDelegate:(id)arg1 appId:(id)arg2;
+ (void)requestLatestStatus;
+ (void)sendToleranceCrashNotificationWithCrashCount:(long long)arg1 crashedSDKIDS:(id)arg2;
+ (void)sendWithDid:(id)arg1;
+ (void)setEBApplogDelegate:(id)arg1;
+ (void)setTerritory:(id)arg1;
+ (id)shareManager;
+ (void)startListenToleranceCrashEvent;
+ (id)territory;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
