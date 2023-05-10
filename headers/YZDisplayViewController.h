//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UICollectionView, UIColor, UIFont, UIScrollView, UIView;

@interface YZDisplayViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    UIColor *_norColor;
    UIColor *_selColor;
    _Bool _isfullScreen;
    _Bool _isUnderLineEqualTitleWidth;
    _Bool _isShowUnderLine;
    _Bool _isShowTitleGradient;
    _Bool _isShowTitleScale;
    _Bool _isShowTitleCover;
    _Bool _isClickTitle;
    _Bool _isAniming;
    _Bool _isInitial;
    _Bool _isDelayScroll;
    long long _selectIndex;
    UIColor *_titleScrollViewColor;
    double _titleHeight;
    double _titleWidth;
    UIFont *_titleFont;
    UIView *_contentView;
    UIScrollView *_titleScrollView;
    UICollectionView *_contentScrollView;
    NSMutableArray *_titleLabels;
    NSMutableArray *_titleWidths;
    UIView *_underLine;
    UIView *_coverView;
    double _lastOffsetX;
    double _titleMargin;
    long long _selIndex;
    unsigned long long _titleColorGradientStyle;
    double _titleScale;
    UIColor *_coverColor;
    double _coverCornerRadius;
    UIColor *_underLineColor;
    double _underLineH;
    double _startR;
    double _startG;
    double _startB;
    double _endR;
    double _endG;
    double _endB;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
@property(nonatomic) __weak UICollectionView *contentScrollView; // @synthesize contentScrollView=_contentScrollView;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIColor *coverColor; // @synthesize coverColor=_coverColor;
@property(nonatomic) double coverCornerRadius; // @synthesize coverCornerRadius=_coverCornerRadius;
@property(nonatomic) __weak UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) double endB; // @synthesize endB=_endB;
@property(nonatomic) double endG; // @synthesize endG=_endG;
@property(nonatomic) double endR; // @synthesize endR=_endR;
- (void)getRGBComponents:(double [3])arg1 forColor:(id)arg2;
- (id)init;
- (void)initial;
@property(nonatomic) _Bool isAniming; // @synthesize isAniming=_isAniming;
@property(nonatomic) _Bool isClickTitle; // @synthesize isClickTitle=_isClickTitle;
@property(nonatomic) _Bool isDelayScroll; // @synthesize isDelayScroll=_isDelayScroll;
@property(nonatomic) _Bool isInitial; // @synthesize isInitial=_isInitial;
@property(nonatomic) _Bool isShowTitleCover; // @synthesize isShowTitleCover=_isShowTitleCover;
@property(nonatomic) _Bool isShowTitleGradient; // @synthesize isShowTitleGradient=_isShowTitleGradient;
@property(nonatomic) _Bool isShowTitleScale; // @synthesize isShowTitleScale=_isShowTitleScale;
@property(nonatomic) _Bool isShowUnderLine; // @synthesize isShowUnderLine=_isShowUnderLine;
@property(nonatomic) _Bool isUnderLineEqualTitleWidth; // @synthesize isUnderLineEqualTitleWidth=_isUnderLineEqualTitleWidth;
@property(nonatomic) _Bool isfullScreen; // @synthesize isfullScreen=_isfullScreen;
@property(nonatomic) double lastOffsetX; // @synthesize lastOffsetX=_lastOffsetX;
@property(retain, nonatomic) UIColor *norColor;
- (void)refreshDisplay;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) UIColor *selColor;
@property(nonatomic) long long selIndex; // @synthesize selIndex=_selIndex;
@property(nonatomic) long long selectIndex; // @synthesize selectIndex=_selectIndex;
- (void)selectLabel:(id)arg1;
- (void)setLabelTitleCenter:(id)arg1;
@property(nonatomic) double startB; // @synthesize startB=_startB;
@property(nonatomic) double startG; // @synthesize startG=_startG;
@property(nonatomic) double startR; // @synthesize startR=_startR;
@property(nonatomic) unsigned long long titleColorGradientStyle; // @synthesize titleColorGradientStyle=_titleColorGradientStyle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(nonatomic) double titleHeight; // @synthesize titleHeight=_titleHeight;
@property(retain, nonatomic) NSMutableArray *titleLabels; // @synthesize titleLabels=_titleLabels;
@property(nonatomic) double titleMargin; // @synthesize titleMargin=_titleMargin;
@property(nonatomic) double titleScale; // @synthesize titleScale=_titleScale;
@property(nonatomic) __weak UIScrollView *titleScrollView; // @synthesize titleScrollView=_titleScrollView;
@property(retain, nonatomic) UIColor *titleScrollViewColor; // @synthesize titleScrollViewColor=_titleScrollViewColor;
@property(nonatomic) double titleWidth; // @synthesize titleWidth=_titleWidth;
@property(retain, nonatomic) NSMutableArray *titleWidths; // @synthesize titleWidths=_titleWidths;
@property(nonatomic) __weak UIView *underLine; // @synthesize underLine=_underLine;
@property(retain, nonatomic) UIColor *underLineColor; // @synthesize underLineColor=_underLineColor;
@property(nonatomic) double underLineH; // @synthesize underLineH=_underLineH;
- (void)setUpAllTitle;
- (void)setUpContentViewFrame:(CDUnknownBlockType)arg1;
- (void)setUpCoverEffect:(CDUnknownBlockType)arg1;
- (void)setUpCoverOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpCoverView:(id)arg1;
- (void)setUpTitleColorGradientWithOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpTitleEffect:(CDUnknownBlockType)arg1;
- (void)setUpTitleGradient:(CDUnknownBlockType)arg1;
- (void)setUpTitleScale:(CDUnknownBlockType)arg1;
- (void)setUpTitleScaleWithOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setUpTitleWidth;
- (void)setUpUnderLine:(id)arg1;
- (void)setUpUnderLineEffect:(CDUnknownBlockType)arg1;
- (void)setUpUnderLineOffset:(double)arg1 rightLabel:(id)arg2 leftLabel:(id)arg3;
- (void)setupEndColor:(id)arg1;
- (void)setupStartColor:(id)arg1;
- (void)titleClick:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (double)widthDeltaWithRightLabel:(id)arg1 leftLabel:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

