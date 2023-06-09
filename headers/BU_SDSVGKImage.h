//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

#import "BU_SDAnimatedImage-Protocol.h"

@class BU_SVGKImage, NSData, NSString;

@interface BU_SDSVGKImage : UIImage <BU_SDAnimatedImage>
{
    BU_SVGKImage *_SVGKImage;
}

+ (id)imageWithContentsOfFile:(id)arg1;
+ (id)imageWithData:(id)arg1;
+ (id)imageWithData:(id)arg1 scale:(double)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) BU_SVGKImage *SVGKImage; // @synthesize SVGKImage=_SVGKImage;
@property(readonly, copy, nonatomic) NSData *animatedImageData;
- (double)animatedImageDurationAtIndex:(unsigned long long)arg1;
- (id)animatedImageFrameAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long animatedImageFrameCount;
@property(readonly, nonatomic) unsigned long long animatedImageLoopCount;
- (id)initWithAnimatedCoder:(id)arg1 scale:(double)arg2;
- (id)initWithContentsOfFile:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithData:(id)arg1 scale:(double)arg2;
- (id)initWithData:(id)arg1 scale:(double)arg2 options:(id)arg3;
- (id)initWithSVGKImage:(id)arg1;
- (long long)sdBu_imageFormat;
- (unsigned long long)sd_imageLoopCount;
- (_Bool)sd_isAnimated;
- (_Bool)sd_isVector;
- (void)setSdBu_imageFormat:(long long)arg1;
- (void)setSd_imageLoopCount:(unsigned long long)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAllFramesLoaded) _Bool allFramesLoaded;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

