//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BLYCommonUploadLogic.h"

@class BLYExceptionUpload, BLYJceObjectV2;

@interface BLYCrashLogic : BLYCommonUploadLogic
{
    _Bool _isCrashed;
    BLYJceObjectV2 *_jceModel;
    BLYExceptionUpload *_crashModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BLYExceptionUpload *crashModel; // @synthesize crashModel=_crashModel;
- (id)exceptionUploadPackage;
- (id)initWithExceptionModel:(id)arg1;
@property(nonatomic) _Bool isCrashed; // @synthesize isCrashed=_isCrashed;
- (id)jceCMDString;
- (id)jceModel;
- (id)persistFileKey;
- (long long)persistType;
- (void)persistentSuccessed:(_Bool)arg1;
- (void)reportSuccessed:(_Bool)arg1;
- (void)setJceModel:(id)arg1;
- (_Bool)shouldPersist;
- (_Bool)shouldUpload;

@end

