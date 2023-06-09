//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BU_SVGKImage;

@interface BU_SVGKImageView : UIView
{
    _Bool _showBorder;
    BU_SVGKImage *_image;
    double _timeIntervalForLastReRenderOfSVGFromMemory;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool bu_adjustContentMode;
- (void)bu_setImageWithURL:(id)arg1;
- (void)bu_setImageWithURL:(id)arg1 completed:(CDUnknownBlockType)arg2;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 completed:(CDUnknownBlockType)arg3;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 completed:(CDUnknownBlockType)arg4;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 context:(id)arg4 progress:(CDUnknownBlockType)arg5 completed:(CDUnknownBlockType)arg6;
- (void)bu_setImageWithURL:(id)arg1 placeholderImage:(id)arg2 options:(unsigned long long)arg3 progress:(CDUnknownBlockType)arg4 completed:(CDUnknownBlockType)arg5;
@property(retain, nonatomic) BU_SVGKImage *image; // @synthesize image=_image;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithSVGKImage:(id)arg1;
- (struct CGSize)intrinsicContentSize;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(readonly, nonatomic) double timeIntervalForLastReRenderOfSVGFromMemory; // @synthesize timeIntervalForLastReRenderOfSVGFromMemory=_timeIntervalForLastReRenderOfSVGFromMemory;

@end

