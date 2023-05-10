//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSMutableArray, UIColor, UIImage;
@protocol TAPageControlDelegate;

@interface TAPageControl : UIControl
{
    _Bool _hidesForSinglePage;
    _Bool _shouldResizeFromCenter;
    Class _dotViewClass;
    UIImage *_dotImage;
    UIImage *_currentDotImage;
    UIColor *_dotColor;
    long long _spacingBetweenDots;
    id <TAPageControlDelegate> _delegate;
    long long _numberOfPages;
    long long _currentPage;
    NSMutableArray *_dots;
    struct CGSize _dotSize;
}

- (void).cxx_destruct;
- (void)changeActivity:(_Bool)arg1 atIndex:(long long)arg2;
@property(retain, nonatomic) UIImage *currentDotImage; // @synthesize currentDotImage=_currentDotImage;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(nonatomic) id <TAPageControlDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIColor *dotColor; // @synthesize dotColor=_dotColor;
@property(retain, nonatomic) UIImage *dotImage; // @synthesize dotImage=_dotImage;
@property(nonatomic) struct CGSize dotSize; // @synthesize dotSize=_dotSize;
@property(retain, nonatomic) Class dotViewClass; // @synthesize dotViewClass=_dotViewClass;
@property(retain, nonatomic) NSMutableArray *dots; // @synthesize dots=_dots;
- (id)generateDotView;
- (void)hideForSinglePage;
@property(nonatomic) _Bool hidesForSinglePage; // @synthesize hidesForSinglePage=_hidesForSinglePage;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initialization;
@property(nonatomic) long long numberOfPages; // @synthesize numberOfPages=_numberOfPages;
- (void)resetDotViews;
@property(nonatomic) _Bool shouldResizeFromCenter; // @synthesize shouldResizeFromCenter=_shouldResizeFromCenter;
@property(nonatomic) long long spacingBetweenDots; // @synthesize spacingBetweenDots=_spacingBetweenDots;
- (struct CGSize)sizeForNumberOfPages:(long long)arg1;
- (void)sizeToFit;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)updateDotFrame:(id)arg1 atIndex:(long long)arg2;
- (void)updateDots;
- (void)updateFrame:(_Bool)arg1;

@end

