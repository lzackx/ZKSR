//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSSet;

@interface BU_AFSecurityPolicy : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _allowInvalidCertificates;
    _Bool _validatesDomainName;
    unsigned long long _SSLPinningMode;
    NSSet *_pinnedCertificates;
    NSSet *_pinnedPublicKeys;
}

+ (id)certificatesInBundle:(id)arg1;
+ (id)defaultPinnedCertificates;
+ (id)defaultPolicy;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned long long)arg1;
+ (id)policyWithPinningMode:(unsigned long long)arg1 withPinnedCertificates:(id)arg2;
+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
@property(nonatomic) _Bool allowInvalidCertificates; // @synthesize allowInvalidCertificates=_allowInvalidCertificates;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(retain, nonatomic) NSSet *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(nonatomic) _Bool validatesDomainName; // @synthesize validatesDomainName=_validatesDomainName;

@end
