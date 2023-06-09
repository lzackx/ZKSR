//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface BU_IESGurdDownloadPackageManager : NSObject
{
    NSObject<OS_dispatch_queue> *_downloadSerialQueue;
    NSOperationQueue *_downloadOperationQueue;
    NSMutableDictionary *_downloadResultsDictionary;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (_Bool)canDownloadPatchPackageForAccessKey:(id)arg1 config:(id)arg2;
- (void)downloadFullPackageForAccessKey:(id)arg1 config:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSOperationQueue *downloadOperationQueue; // @synthesize downloadOperationQueue=_downloadOperationQueue;
- (void)downloadPackageForAccessKey:(id)arg1 config:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (void)downloadPatchPackageForAccessKey:(id)arg1 config:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) NSMutableDictionary *downloadResultsDictionary; // @synthesize downloadResultsDictionary=_downloadResultsDictionary;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *downloadSerialQueue; // @synthesize downloadSerialQueue=_downloadSerialQueue;

@end

