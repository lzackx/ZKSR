//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DAReloadActivityButton, DMCustomBtn, NSString, UIColor, UIImageView, UILabel;

@interface KSYD_BookStoreHeaderView : UIView
{
    _Bool _needCenter;
    _Bool _isAnimationg;
    NSString *_headerTitle;
    NSString *_rightFlag;
    NSString *_rightTitle;
    UIColor *_leftLineColor;
    long long _page;
    CDUnknownBlockType _buttonSelect;
    UIImageView *_leftRedView;
    UILabel *_titleLabel;
    DAReloadActivityButton *_exchangeButton;
    DMCustomBtn *_moreButton;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buttonSelect; // @synthesize buttonSelect=_buttonSelect;
- (void)clickExchange:(id)arg1;
- (void)clickMore:(id)arg1;
@property(nonatomic) __weak DAReloadActivityButton *exchangeButton; // @synthesize exchangeButton=_exchangeButton;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) _Bool isAnimationg; // @synthesize isAnimationg=_isAnimationg;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *leftLineColor; // @synthesize leftLineColor=_leftLineColor;
@property(nonatomic) __weak UIImageView *leftRedView; // @synthesize leftRedView=_leftRedView;
@property(retain, nonatomic) DMCustomBtn *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) _Bool needCenter; // @synthesize needCenter=_needCenter;
@property(nonatomic) long long page; // @synthesize page=_page;
@property(nonatomic) NSString *rightFlag; // @synthesize rightFlag=_rightFlag;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
- (void)setIsShowExchange:(_Bool)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)stopAnimating;

@end

