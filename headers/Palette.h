//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, PriorityBoxArray, UIImage;

@interface Palette : NSObject
{
    _Bool _isNeedColorDic;
    UIImage *_image;
    PriorityBoxArray *_priorityArray;
    NSArray *_swatchArray;
    NSArray *_targetArray;
    long long _maxPopulation;
    NSMutableArray *_distinctColors;
    long long _pixelCount;
    CDUnknownBlockType _getColorBlock;
    long long _mode;
}

- (void).cxx_destruct;
- (void)clearHistArray;
@property(retain, nonatomic) NSMutableArray *distinctColors; // @synthesize distinctColors=_distinctColors;
- (void)findMaxPopulation;
- (id)generateAverageColors:(id)arg1;
- (double)generateScoreForTarget:(id)arg1 swatch:(id)arg2;
@property(copy, nonatomic) CDUnknownBlockType getColorBlock; // @synthesize getColorBlock=_getColorBlock;
- (id)getMaxScoredSwatchForTarget:(id)arg1;
- (void)getSwatchForTarget;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void)initTargetsWithMode:(long long)arg1;
- (id)initWithImage:(id)arg1;
@property(nonatomic) _Bool isNeedColorDic; // @synthesize isNeedColorDic=_isNeedColorDic;
@property(nonatomic) long long maxPopulation; // @synthesize maxPopulation=_maxPopulation;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long pixelCount; // @synthesize pixelCount=_pixelCount;
@property(retain, nonatomic) PriorityBoxArray *priorityArray; // @synthesize priorityArray=_priorityArray;
- (char *)rawPixelDataFromImage:(id)arg1;
- (id)scaleDownImage:(id)arg1;
@property(retain, nonatomic) NSArray *swatchArray; // @synthesize swatchArray=_swatchArray;
@property(retain, nonatomic) NSArray *targetArray; // @synthesize targetArray=_targetArray;
- (_Bool)shouldBeScoredForTarget:(id)arg1 target:(id)arg2;
- (_Bool)shouldIgnoreColor:(long long)arg1;
- (void)splitBoxes:(id)arg1;
- (void)startToAnalyzeForTargetMode:(long long)arg1 withCallBack:(CDUnknownBlockType)arg2;
- (void)startToAnalyzeImage;
- (void)startToAnalyzeImage:(CDUnknownBlockType)arg1;

@end
