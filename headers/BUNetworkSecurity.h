//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface BUNetworkSecurity : NSObject
{
}

+ (id)decryptAdMarkUp:(id)arg1 error:(id *)arg2;
+ (id)decryptRequestModel:(id)arg1 error:(id *)arg2;
+ (id)decryptSettingModel:(id)arg1 error:(id *)arg2;
+ (id)encryptData:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptJSONObject:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (id)encryptRequestArray:(id)arg1;
+ (id)encryptRequestDictionary:(id)arg1;
+ (id)encryptRequestDictionaryWithOutSign:(id)arg1;
+ (id)encryptRequestModel:(id)arg1 adslot:(id)arg2;
+ (id)encryptString:(id)arg1;
+ (id)encryptString:(id)arg1 key:(id)arg2 iv:(id)arg3;
+ (_Bool)needEncrypt;
+ (long long)pbu_checkNetworkResultWithCypher:(long long)arg1 message:(id)arg2 resultProxy:(id *)arg3;
+ (void)pbu_errorCode:(long long)arg1 error:(id *)arg2;

@end
