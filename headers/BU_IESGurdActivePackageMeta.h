//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface BU_IESGurdActivePackageMeta : NSObject <NSSecureCoding>
{
    NSString *_accessKey;
    NSString *_channel;
    NSString *_md5;
    unsigned long long _version;
    unsigned long long _packageID;
    long long _packageType;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(copy, nonatomic) NSString *channel; // @synthesize channel=_channel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(copy, nonatomic) NSString *md5; // @synthesize md5=_md5;
@property(nonatomic) unsigned long long packageID; // @synthesize packageID=_packageID;
@property(nonatomic) long long packageType; // @synthesize packageType=_packageType;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;

@end

