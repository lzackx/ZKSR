//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "BU_SDImageCoder-Protocol.h"

@class NSArray, NSMutableArray, NSString;
@protocol OS_dispatch_semaphore;

@interface BU_SDImageCodersManager : NSObject <BU_SDImageCoder>
{
    NSMutableArray *_imageCoders;
    NSObject<OS_dispatch_semaphore> *_codersLock;
}

+ (id)sharedManager;
- (void).cxx_destruct;
- (void)addCoder:(id)arg1;
- (_Bool)canDecodeFromData:(id)arg1;
- (_Bool)canEncodeToFormat:(long long)arg1;
@property(copy, nonatomic) NSArray *coders;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *codersLock; // @synthesize codersLock=_codersLock;
- (id)decodedImageWithData:(id)arg1 options:(id)arg2;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2 options:(id)arg3;
- (id)init;
- (void)removeCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

