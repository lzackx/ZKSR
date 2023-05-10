//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, UIColor, UIFont, UILabel, UITapGestureRecognizer;
@protocol BUVerticalScrollTextViewDelegate;

@interface BUVerticalScrollTextView : UIView
{
    _Bool _touchEnable;
    _Bool _needStop;
    _Bool _isRunning;
    _Bool _isHaveSpace;
    id <BUVerticalScrollTextViewDelegate> _delegate;
    NSArray *_textDataArr;
    double _textStayTime;
    double _scrollAnimationTime;
    UIFont *_textFont;
    UIColor *_textColor;
    long long _textAlignment;
    UITapGestureRecognizer *_tapGesture;
    UILabel *_currentScrollLabel;
    UILabel *_standbyScrollLabel;
    long long _index;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)clickAction;
- (void)createScrollLabelNeedStandbyLabel:(_Bool)arg1;
@property(retain, nonatomic) UILabel *currentScrollLabel; // @synthesize currentScrollLabel=_currentScrollLabel;
@property(nonatomic) id <BUVerticalScrollTextViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)isCurrentViewControllerVisible:(id)arg1;
@property(nonatomic) _Bool isHaveSpace; // @synthesize isHaveSpace=_isHaveSpace;
@property(nonatomic) _Bool isRunning; // @synthesize isRunning=_isRunning;
@property(nonatomic) _Bool needStop; // @synthesize needStop=_needStop;
- (long long)nextIndex:(long long)arg1;
- (void)resetStateToEmpty;
@property(nonatomic) double scrollAnimationTime; // @synthesize scrollAnimationTime=_scrollAnimationTime;
- (void)scrollWithNoSpaceByDirection:(id)arg1;
- (void)scrollWithSpaceByDirection:(id)arg1;
- (void)setInitialSettings;
@property(retain, nonatomic) UILabel *standbyScrollLabel; // @synthesize standbyScrollLabel=_standbyScrollLabel;
@property(retain, nonatomic) UITapGestureRecognizer *tapGesture; // @synthesize tapGesture=_tapGesture;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) NSArray *textDataArr; // @synthesize textDataArr=_textDataArr;
@property(copy, nonatomic) UIFont *textFont; // @synthesize textFont=_textFont;
@property(nonatomic) double textStayTime; // @synthesize textStayTime=_textStayTime;
@property(nonatomic) _Bool touchEnable; // @synthesize touchEnable=_touchEnable;
- (void)startScrollBottomToTopWithNoSpace;
- (void)startScrollBottomToTopWithSpace;
- (void)startScrollTopToBottomWithNoSpace;
- (void)startScrollTopToBottomWithSpace;
- (void)stop;
- (void)stopToEmpty;
- (id)viewController;

@end

