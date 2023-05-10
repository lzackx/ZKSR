//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CMMotionManager, CTTelephonyNetworkInfo, NSArray, NSDictionary, NSMutableSet, NSNumber, NSString;

@interface GDTDeviceManager : NSObject
{
    _Bool _isJailBroken;
    _Bool _inForeground;
    _Bool _isLockScreen;
    int _deviceType;
    int _ori;
    int _screenWidth;
    int _screenHeight;
    int _dpi;
    int _muidtype;
    NSString *_an;
    NSString *_appn;
    NSString *_appVersionCode;
    NSString *_appId;
    long long _lastRequestTime;
    NSArray *_adxDomainWhiteList;
    long long _seq;
    NSString *_appVersion;
    NSString *_device;
    NSString *_muid;
    NSString *_uid;
    NSString *_md;
    long long _freeDiskSpaceInBytes;
    NSString *_osver;
    NSString *_os;
    NSString *_lg;
    NSString *_m5;
    NSString *_m11;
    NSString *_originalIFA;
    NSString *_formatIFA;
    long long _connType;
    long long _carrier;
    NSString *_client_ip;
    NSString *_wifiBSSID;
    NSString *_qIdfa;
    NSString *_sysBootTimeRealSecond;
    NSString *_languge;
    NSString *_systemHardware;
    NSString *_diskS;
    NSString *_timezone;
    NSString *_mach;
    long long _channel;
    long long _customSDKServerType;
    double _startUpTime;
    CMMotionManager *_motionMgr;
    NSDictionary *_connDict;
    NSString *_QAID;
    CTTelephonyNetworkInfo *_telNetworkInfo;
    NSString *_mobileCountryAndNetworkCode;
    NSString *_crrfo;
    NSString *_hwModel;
    NSString *_hwMachine;
    NSNumber *_hwPhysmem;
    NSString *_crde;
    NSString *_systemFileTime;
    NSString *_currentDeviceName;
    NSString *_sysBootTimeSecond;
    NSMutableSet *_identifiers;
}

+ (id)defaultManager;
- (void).cxx_destruct;
- (void)GDTfunctiona7dNjU:(id)arg1;
- (void)GDTfunctionb4koxD:(id)arg1;
@property(readonly, nonatomic) NSString *GDTfunctionb9VtEm;
- (void)GDTfunctionc6BR40:(id)arg1;
- (void)GDTfunctionc6dHYR:(id)arg1;
- (void)GDTfunctiond321L8:(id)arg1;
- (id)GDTfunctione4jbxs:(const char *)arg1;
- (id)GDTfunctionf07OOH;
- (void)GDTfunctionf3GP7v;
- (id)GDTfunctionf94LYN;
- (void)GDTfunctiong0rOud;
- (id)GDTfunctiong43PRz;
- (void)GDTfunctiong7guIn:(id)arg1;
- (id)GDTfunctionh12AJd;
- (long long)GDTfunctionj17v6d;
- (id)GDTfunctionj1cnEW:(id)arg1;
- (void)GDTfunctionj2CsNe;
- (void)GDTfunctionm2MrPa;
- (id)GDTfunctionn06Bki;
- (long long)GDTfunctionn4x6l9;
- (void)GDTfunctiono4zL5o;
- (_Bool)GDTfunctiono5gzjB;
@property(readonly, nonatomic) unsigned long long GDTfunctiono685gX;
- (id)GDTfunctionp5EBtQ;
- (id)GDTfunctionp5bQyj;
- (void)GDTfunctionr23mhh:(id)arg1;
- (_Bool)GDTfunctionr3s9fg;
- (unsigned long long)GDTfunctionr5RMWM:(unsigned int)arg1;
- (_Bool)GDTfunctions3jyAi;
- (_Bool)GDTfunctiont8UPE3:(id)arg1;
- (id)GDTfunctionu8I2JO;
- (void)GDTfunctionu9H2Ei;
- (void)GDTfunctionv2mIai;
@property(readonly, copy, nonatomic) NSString *GDTfunctionv41z0l;
- (id)GDTfunctionw14Xfg;
- (_Bool)GDTfunctionw9tiLP;
@property(readonly, nonatomic) _Bool GDTfunctionx6KFMo;
- (void)GDTfunctionx7XzWN;
@property(copy, nonatomic) NSString *QAID; // @synthesize QAID=_QAID;
@property(retain, nonatomic) NSArray *adxDomainWhiteList; // @synthesize adxDomainWhiteList=_adxDomainWhiteList;
@property(copy, nonatomic) NSString *an; // @synthesize an=_an;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *appVersionCode; // @synthesize appVersionCode=_appVersionCode;
@property(copy, nonatomic) NSString *appn; // @synthesize appn=_appn;
@property(nonatomic) long long carrier; // @synthesize carrier=_carrier;
@property(nonatomic) long long channel; // @synthesize channel=_channel;
@property(copy, nonatomic) NSString *client_ip; // @synthesize client_ip=_client_ip;
@property(retain, nonatomic) NSDictionary *connDict; // @synthesize connDict=_connDict;
@property(nonatomic) long long connType; // @synthesize connType=_connType;
@property(copy, nonatomic) NSString *crde; // @synthesize crde=_crde;
@property(copy, nonatomic) NSString *crrfo; // @synthesize crrfo=_crrfo;
@property(copy, nonatomic) NSString *currentDeviceName; // @synthesize currentDeviceName=_currentDeviceName;
- (id)currentRadioAccessTechnology;
@property(nonatomic) long long customSDKServerType; // @synthesize customSDKServerType=_customSDKServerType;
- (void)dealloc;
@property(copy, nonatomic) NSString *device; // @synthesize device=_device;
@property(nonatomic) int deviceType; // @synthesize deviceType=_deviceType;
@property(readonly, copy, nonatomic) NSString *diskS; // @synthesize diskS=_diskS;
@property(nonatomic) int dpi; // @synthesize dpi=_dpi;
- (id)dsk;
@property(copy, nonatomic) NSString *formatIFA; // @synthesize formatIFA=_formatIFA;
@property(nonatomic) long long freeDiskSpaceInBytes; // @synthesize freeDiskSpaceInBytes=_freeDiskSpaceInBytes;
@property(copy, nonatomic) NSString *hwMachine; // @synthesize hwMachine=_hwMachine;
@property(copy, nonatomic) NSString *hwModel; // @synthesize hwModel=_hwModel;
@property(copy, nonatomic) NSNumber *hwPhysmem; // @synthesize hwPhysmem=_hwPhysmem;
@property(retain, nonatomic) NSMutableSet *identifiers; // @synthesize identifiers=_identifiers;
- (id)init;
@property(nonatomic, getter=isInForeground) _Bool inForeground; // @synthesize inForeground=_inForeground;
@property(nonatomic) _Bool isJailBroken; // @synthesize isJailBroken=_isJailBroken;
@property(nonatomic) _Bool isLockScreen; // @synthesize isLockScreen=_isLockScreen;
- (id)lange;
@property(readonly, copy, nonatomic) NSString *languge; // @synthesize languge=_languge;
@property(nonatomic) long long lastRequestTime; // @synthesize lastRequestTime=_lastRequestTime;
@property(copy, nonatomic) NSString *lg; // @synthesize lg=_lg;
@property(copy, nonatomic) NSString *m11; // @synthesize m11=_m11;
@property(copy, nonatomic) NSString *m5; // @synthesize m5=_m5;
@property(readonly, copy, nonatomic) NSString *mach; // @synthesize mach=_mach;
@property(copy, nonatomic) NSString *md; // @synthesize md=_md;
@property(readonly, copy, nonatomic) NSString *mnc;
@property(copy, nonatomic) NSString *mobileCountryAndNetworkCode; // @synthesize mobileCountryAndNetworkCode=_mobileCountryAndNetworkCode;
@property(retain, nonatomic) CMMotionManager *motionMgr; // @synthesize motionMgr=_motionMgr;
@property(copy, nonatomic) NSString *muid; // @synthesize muid=_muid;
@property(nonatomic) int muidtype; // @synthesize muidtype=_muidtype;
@property(readonly, nonatomic) long long networkType;
@property(nonatomic) int ori; // @synthesize ori=_ori;
@property(copy, nonatomic) NSString *originalIFA; // @synthesize originalIFA=_originalIFA;
@property(copy, nonatomic) NSString *os; // @synthesize os=_os;
@property(copy, nonatomic) NSString *osver; // @synthesize osver=_osver;
@property(readonly, copy, nonatomic) NSString *qIdfa; // @synthesize qIdfa=_qIdfa;
@property(nonatomic) int screenHeight; // @synthesize screenHeight=_screenHeight;
@property(nonatomic) int screenWidth; // @synthesize screenWidth=_screenWidth;
@property(nonatomic) long long seq; // @synthesize seq=_seq;
- (void)setGDTfunctionf7Nz8O;
- (void)setGDTfunctionm6MWhW;
@property(nonatomic) double startUpTime; // @synthesize startUpTime=_startUpTime;
@property(copy, nonatomic) NSString *sysBootTimeSecond; // @synthesize sysBootTimeSecond=_sysBootTimeSecond;
@property(copy, nonatomic) NSString *systemFileTime; // @synthesize systemFileTime=_systemFileTime;
@property(retain, nonatomic) CTTelephonyNetworkInfo *telNetworkInfo; // @synthesize telNetworkInfo=_telNetworkInfo;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *wifiBSSID; // @synthesize wifiBSSID=_wifiBSSID;
- (id)ssvs;
@property(readonly, copy, nonatomic) NSString *sysBootTimeRealSecond; // @synthesize sysBootTimeRealSecond=_sysBootTimeRealSecond;
@property(readonly, copy, nonatomic) NSString *systemHardware; // @synthesize systemHardware=_systemHardware;
@property(readonly, copy, nonatomic) NSString *timezone; // @synthesize timezone=_timezone;
- (id)tzon;

@end
