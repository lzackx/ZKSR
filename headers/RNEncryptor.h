//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "RNCryptor.h"

@class NSData;

@interface RNEncryptor : RNCryptor
{
    CDStruct_43cfb2c2 _HMACContext;
    _Bool _haveWrittenHeader;
    NSData *_encryptionSalt;
    NSData *_HMACSalt;
    NSData *_IV;
}

+ (id)encryptData:(id)arg1 withSettings:(struct _RNCryptorSettings)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 IV:(id)arg5 error:(id *)arg6;
+ (id)encryptData:(id)arg1 withSettings:(struct _RNCryptorSettings)arg2 encryptionKey:(id)arg3 HMACKey:(id)arg4 error:(id *)arg5;
+ (id)encryptData:(id)arg1 withSettings:(struct _RNCryptorSettings)arg2 password:(id)arg3 IV:(id)arg4 encryptionSalt:(id)arg5 HMACSalt:(id)arg6 error:(id *)arg7;
+ (id)encryptData:(id)arg1 withSettings:(struct _RNCryptorSettings)arg2 password:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
@property(retain, nonatomic) NSData *HMACSalt; // @synthesize HMACSalt=_HMACSalt;
@property(retain, nonatomic) NSData *IV; // @synthesize IV=_IV;
- (void)addData:(id)arg1;
@property(retain, nonatomic) NSData *encryptionSalt; // @synthesize encryptionSalt=_encryptionSalt;
- (void)finish;
@property(nonatomic) _Bool haveWrittenHeader; // @synthesize haveWrittenHeader=_haveWrittenHeader;
- (id)header;
- (id)initWithSettings:(struct _RNCryptorSettings)arg1 encryptionKey:(id)arg2 HMACKey:(id)arg3 IV:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (id)initWithSettings:(struct _RNCryptorSettings)arg1 encryptionKey:(id)arg2 HMACKey:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (id)initWithSettings:(struct _RNCryptorSettings)arg1 password:(id)arg2 IV:(id)arg3 encryptionSalt:(id)arg4 HMACSalt:(id)arg5 handler:(CDUnknownBlockType)arg6;
- (id)initWithSettings:(struct _RNCryptorSettings)arg1 password:(id)arg2 handler:(CDUnknownBlockType)arg3;

@end
