//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDBUCrashBinaryImage, NSString;

@interface HMDBUCrashFrameInfo : NSObject
{
    _Bool _symbolicated;
    unsigned long long _addr;
    HMDBUCrashBinaryImage *_image;
    NSString *_symbolName;
    unsigned long long _symbolAddress;
}

+ (id)frameInfoWithAddr:(unsigned long long)arg1 images:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) unsigned long long addr; // @synthesize addr=_addr;
@property(retain, nonatomic) HMDBUCrashBinaryImage *image; // @synthesize image=_image;
@property(nonatomic) unsigned long long symbolAddress; // @synthesize symbolAddress=_symbolAddress;
@property(copy, nonatomic) NSString *symbolName; // @synthesize symbolName=_symbolName;
@property(nonatomic) _Bool symbolicated; // @synthesize symbolicated=_symbolicated;

@end

