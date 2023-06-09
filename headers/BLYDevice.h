//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BLYDevice : NSObject
{
    _Bool _developmentDevice;
    float _freeDiskSpace;
    float _totalDiskSpace;
    float _freeMemeory;
    float _totalMemeory;
    NSString *_qIMEI;
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    NSString *_systemName;
    NSString *_systemVersion;
    NSString *_systemVersionCode;
    NSString *_hardwareModel;
    NSString *_cpuArch;
    unsigned long long _jailbrokenStatus;
}

+ (id)countryCode;
+ (unsigned long long)cpuCount;
+ (id)currentDevice;
+ (id)deviceIDFromKeychain;
+ (id)deviceName;
+ (id)freeDiskSpace;
+ (id)freeMemeory;
+ (id)generateDeviceID;
+ (id)hardwareFingerPrint;
+ (id)idfv;
+ (_Bool)isJailBreak;
+ (id)languageList;
+ (id)qIMEIFromKeychain;
+ (id)systemBootTime;
+ (id)systemName;
+ (double)systemUpTime;
+ (id)systemVersion;
+ (id)totalDiskSpace;
+ (id)totalMemeory;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(nonatomic) float freeDiskSpace; // @synthesize freeDiskSpace=_freeDiskSpace;
@property(nonatomic) float freeMemeory; // @synthesize freeMemeory=_freeMemeory;
- (id)fullSystemVersion;
- (id)getHostMemoryUsage;
- (id)getProcessMemoryInfo;
- (id)getThreadInfo;
@property(copy, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property(nonatomic, getter=isDevelopmentDevice) _Bool developmentDevice; // @synthesize developmentDevice=_developmentDevice;
- (_Bool)isJailbroken;
@property(nonatomic) unsigned long long jailbrokenStatus; // @synthesize jailbrokenStatus=_jailbrokenStatus;
@property(copy, nonatomic) NSString *qIMEI; // @synthesize qIMEI=_qIMEI;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *systemVersionCode; // @synthesize systemVersionCode=_systemVersionCode;
@property(nonatomic) float totalDiskSpace; // @synthesize totalDiskSpace=_totalDiskSpace;
@property(nonatomic) float totalMemeory; // @synthesize totalMemeory=_totalMemeory;

@end

