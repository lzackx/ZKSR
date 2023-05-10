//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SDProgressiveImageCoder-Protocol.h"

@class NSString;

@interface SDImageIOCoder : NSObject <SDProgressiveImageCoder>
{
    unsigned long long _width;
    unsigned long long _height;
    unsigned int _orientation;
    struct CGImageSource *_imageSource;
    double _scale;
    _Bool _finished;
    _Bool _preserveAspectRatio;
    struct CGSize _thumbnailSize;
}

+ (id)sharedCoder;
- (_Bool)canDecodeFromData:(id)arg1;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (_Bool)canIncrementalDecodeFromData:(id)arg1;
- (void)dealloc;
- (id)decodedImageWithData:(id)arg1 options:(id)arg2;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)encodedDataWithImage:(id)arg1 format:(long long)arg2 options:(id)arg3;
- (id)incrementalDecodedImageWithOptions:(id)arg1;
- (id)initIncrementalWithOptions:(id)arg1;
- (void)updateIncrementalData:(id)arg1 finished:(_Bool)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

