//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

@class NSArray, NSString, NSTimer, TXScrollLabel, UIColor, UIFont;
@protocol TXScrollLabelViewDelegate;

@interface TXScrollLabelView : UIScrollView
{
    _Bool _autoWidth;
    _Bool _firstTime;
    _Bool _isArray;
    double _scrollSpace;
    UIFont *_font;
    NSString *_tx_scrollTitle;
    long long _tx_scrollType;
    double _tx_scrollVelocity;
    UIColor *_tx_scrollTitleColor;
    id <TXScrollLabelViewDelegate> _scrollLabelViewDelegate;
    NSString *_scrollTitle;
    long long _scrollType;
    double _scrollVelocity;
    UIColor *_scrollTitleColor;
    long long _textAlignment;
    unsigned long long _options;
    TXScrollLabel *_upLabel;
    TXScrollLabel *_downLabel;
    NSTimer *_scrollTimer;
    NSArray *_scrollArray;
    NSArray *_scrollTexts;
    long long _currentSentence;
    struct CGRect _tx_scrollContentSize;
    struct UIEdgeInsets _scrollInset;
}

+ (id)scrollWithTextArray:(id)arg1 type:(long long)arg2 velocity:(double)arg3 options:(unsigned long long)arg4 inset:(struct UIEdgeInsets)arg5;
+ (id)scrollWithTitle:(id)arg1;
+ (id)scrollWithTitle:(id)arg1 type:(long long)arg2;
+ (id)scrollWithTitle:(id)arg1 type:(long long)arg2 velocity:(double)arg3;
+ (id)scrollWithTitle:(id)arg1 type:(long long)arg2 velocity:(double)arg3 options:(unsigned long long)arg4;
+ (id)scrollWithTitle:(id)arg1 type:(long long)arg2 velocity:(double)arg3 options:(unsigned long long)arg4 inset:(struct UIEdgeInsets)arg5;
+ (id)tx_setScrollTitle:(id)arg1;
+ (id)tx_setScrollTitle:(id)arg1 scrollType:(long long)arg2;
+ (id)tx_setScrollTitle:(id)arg1 scrollType:(long long)arg2 scrollVelocity:(double)arg3;
+ (id)tx_setScrollTitle:(id)arg1 scrollType:(long long)arg2 scrollVelocity:(double)arg3 options:(unsigned long long)arg4;
+ (id)tx_setScrollTitle:(id)arg1 scrollType:(long long)arg2 scrollVelocity:(double)arg3 options:(unsigned long long)arg4 inset:(struct UIEdgeInsets)arg5;
- (void).cxx_destruct;
@property(nonatomic) _Bool autoWidth; // @synthesize autoWidth=_autoWidth;
- (void)beginScrolling;
@property(nonatomic) long long currentSentence; // @synthesize currentSentence=_currentSentence;
- (void)dealloc;
- (void)didTap:(id)arg1;
@property(nonatomic) __weak TXScrollLabel *downLabel; // @synthesize downLabel=_downLabel;
- (void)endScrolling;
- (void)endup;
- (void)flipAnimationWithDelay:(double)arg1;
- (void)flipNoCleAnimationWithDelay:(double)arg1;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
- (id)getSeparatedLinesFromLabel;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTextArray:(id)arg1 type:(long long)arg2 velocity:(double)arg3 options:(unsigned long long)arg4 inset:(struct UIEdgeInsets)arg5;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 velocity:(double)arg3 options:(unsigned long long)arg4 inset:(struct UIEdgeInsets)arg5;
@property(nonatomic) _Bool isArray; // @synthesize isArray=_isArray;
@property(nonatomic, getter=isFirstTime) _Bool firstTime; // @synthesize firstTime=_firstTime;
@property(nonatomic) unsigned long long options; // @synthesize options=_options;
- (void)pauseScrolling;
- (void)resetScrollLabelView;
@property(retain, nonatomic) NSArray *scrollArray; // @synthesize scrollArray=_scrollArray;
@property(nonatomic) struct UIEdgeInsets scrollInset; // @synthesize scrollInset=_scrollInset;
@property(nonatomic) __weak id <TXScrollLabelViewDelegate> scrollLabelViewDelegate; // @synthesize scrollLabelViewDelegate=_scrollLabelViewDelegate;
@property(nonatomic) double scrollSpace; // @synthesize scrollSpace=_scrollSpace;
@property(retain, nonatomic) NSArray *scrollTexts; // @synthesize scrollTexts=_scrollTexts;
@property(retain, nonatomic) NSTimer *scrollTimer; // @synthesize scrollTimer=_scrollTimer;
@property(copy, nonatomic) NSString *scrollTitle; // @synthesize scrollTitle=_scrollTitle;
@property(retain, nonatomic) UIColor *scrollTitleColor; // @synthesize scrollTitleColor=_scrollTitleColor;
@property(nonatomic) long long scrollType; // @synthesize scrollType=_scrollType;
@property(nonatomic) double scrollVelocity; // @synthesize scrollVelocity=_scrollVelocity;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSomePreference;
- (void)setSomeSubviews;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) struct CGRect tx_scrollContentSize; // @synthesize tx_scrollContentSize=_tx_scrollContentSize;
@property(copy, nonatomic) NSString *tx_scrollTitle; // @synthesize tx_scrollTitle=_tx_scrollTitle;
@property(retain, nonatomic) UIColor *tx_scrollTitleColor; // @synthesize tx_scrollTitleColor=_tx_scrollTitleColor;
@property(nonatomic) long long tx_scrollType; // @synthesize tx_scrollType=_tx_scrollType;
@property(nonatomic) double tx_scrollVelocity; // @synthesize tx_scrollVelocity=_tx_scrollVelocity;
@property(nonatomic) __weak TXScrollLabel *upLabel; // @synthesize upLabel=_upLabel;
- (void)setupAttributeTitle:(id)arg1;
- (void)setupInitial;
- (void)setupLRUDTypeLayoutWithMaxSize:(struct CGSize)arg1 width:(double)arg2 height:(double)arg3 completedHandler:(CDUnknownBlockType)arg4;
- (void)setupLRUDTypeLayoutWithTitle:(id)arg1 maxSize:(struct CGSize)arg2 width:(double)arg3 height:(double)arg4 completedHandler:(CDUnknownBlockType)arg5;
- (void)setupSubviewsLayout;
- (void)setupSubviewsLayout_Flip;
- (void)setupSubviewsLayout_LeftRight;
- (void)setupSubviewsLayout_UpDown;
- (void)setupTextColor:(id)arg1;
- (void)setupTitle:(id)arg1;
- (void)startWithVelocity:(double)arg1;
- (void)startup;
- (void)updateLeftRightScrollLabelLayoutWithText:(id)arg1 labelType:(long long)arg2;
- (void)updateRepeatTypeWithOperation:(CDUnknownBlockType)arg1;
- (void)updateScrollText;
- (void)updateScrolling;
- (void)updateScrollingType_FlipNoRepeat;
- (void)updateScrollingType_FlipRepeat;
- (void)updateScrollingType_LeftRight;
- (void)updateScrollingType_UpDown;
- (void)updateTextForScrollViewWithSEL:(SEL)arg1;
- (void)updateUpDownScrollLabelLayoutWithText:(id)arg1 labelType:(long long)arg2;

@end

