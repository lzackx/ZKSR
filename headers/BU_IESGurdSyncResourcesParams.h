//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface BU_IESGurdSyncResourcesParams : NSObject
{
    _Bool _p_forceRequest;
    NSString *_accessKey;
    NSArray *_p_channels;
    NSString *_p_resourceVersion;
    NSString *_p_groupName;
    NSString *_p_businessDomain;
    CDUnknownBlockType _p_completion;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *accessKey; // @synthesize accessKey=_accessKey;
- (CDUnknownBlockType)businessDomain;
- (CDUnknownBlockType)channels;
- (CDUnknownBlockType)completion;
- (CDUnknownBlockType)forceRequest;
- (CDUnknownBlockType)groupName;
@property(copy, nonatomic) NSString *p_businessDomain; // @synthesize p_businessDomain=_p_businessDomain;
@property(copy, nonatomic) NSArray *p_channels; // @synthesize p_channels=_p_channels;
@property(copy, nonatomic) CDUnknownBlockType p_completion; // @synthesize p_completion=_p_completion;
@property(nonatomic) _Bool p_forceRequest; // @synthesize p_forceRequest=_p_forceRequest;
@property(copy, nonatomic) NSString *p_groupName; // @synthesize p_groupName=_p_groupName;
@property(copy, nonatomic) NSString *p_resourceVersion; // @synthesize p_resourceVersion=_p_resourceVersion;
- (CDUnknownBlockType)resourceVersion;
- (CDUnknownBlockType)syncResources;

@end

