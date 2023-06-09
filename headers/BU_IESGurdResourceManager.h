//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BU_IESGurdDefaultNetworkDelegate;

@interface BU_IESGurdResourceManager : NSObject
{
    BU_IESGurdDefaultNetworkDelegate *_defaultNetworkDelegate;
}

+ (void)GETWithURLString:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)POSTWithURLString:(id)arg1 params:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)configResponseFromDataDictionary:(id)arg1;
+ (void)downloadPackageWithURLStrings:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)gurdDidFetchConfigWithResponse:(id)arg1 configsDictionary:(id)arg2;
+ (void)handleUniversalStrategies:(id)arg1;
+ (void)ies_fetchConfigWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)innerRequestConfigWithParams:(id)arg1 businessDomain:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)innerRequestWithMethod:(id)arg1 URLString:(id)arg2 params:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (id)networkDelegateForDownload;
+ (id)networkDelegateForRequest;
+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain, nonatomic) BU_IESGurdDefaultNetworkDelegate *defaultNetworkDelegate; // @synthesize defaultNetworkDelegate=_defaultNetworkDelegate;

@end

