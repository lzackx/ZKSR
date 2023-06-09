//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_IESGurdCacheCleaner-Protocol.h"

@class NSLock, NSMutableArray, NSString;

@interface BU_IESGurdFIFOCacheCleaner : NSObject <BU_IESGurdCacheCleaner>
{
    NSString *_accessKey;
    NSMutableArray *_channelsArray;
    long long _capacity;
    NSLock *_channelsArrayLock;
}

+ (id)cleanerWithAccessKey:(id)arg1 channelsArray:(id)arg2 configuration:(id)arg3;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
@property(nonatomic) long long capacity; // @synthesize capacity=_capacity;
@property(retain, nonatomic) NSMutableArray *channelsArray; // @synthesize channelsArray=_channelsArray;
@property(retain, nonatomic) NSLock *channelsArrayLock; // @synthesize channelsArrayLock=_channelsArrayLock;
- (id)channelsToBeCleaned;
- (id)cleanerTypeString;
- (id)debugInfoDictionary;
- (void)gurdDidAddChannelWhitelist:(id)arg1;
- (void)gurdDidApplyPackageForChannel:(id)arg1;
- (void)gurdDidCleanPackageForChannel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

