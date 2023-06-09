//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class DAReloadActivityButton, NSString, UIButton, UIColor, UILabel;

@interface KSYD_WanBookDetailHeaderView : UIView
{
    NSString *_headerTitle;
    NSString *_rightTitle;
    UIColor *_leftLineColor;
    NSString *_rightFlag;
    CDUnknownBlockType _buttonSelect;
    UIView *_leftRedView;
    UILabel *_titleLabel;
    DAReloadActivityButton *_exchangeButton;
    UIButton *_moreButton;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType buttonSelect; // @synthesize buttonSelect=_buttonSelect;
- (void)clickExchange:(id)arg1;
- (void)clickMore:(id)arg1;
@property(nonatomic) __weak DAReloadActivityButton *exchangeButton; // @synthesize exchangeButton=_exchangeButton;
@property(retain, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *leftLineColor; // @synthesize leftLineColor=_leftLineColor;
@property(nonatomic) __weak UIView *leftRedView; // @synthesize leftRedView=_leftRedView;
@property(retain, nonatomic) UIButton *moreButton; // @synthesize moreButton=_moreButton;
@property(nonatomic) NSString *rightFlag; // @synthesize rightFlag=_rightFlag;
@property(retain, nonatomic) NSString *rightTitle; // @synthesize rightTitle=_rightTitle;
- (void)setIsShowExchange:(_Bool)arg1;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)stopAnimating;

@end

