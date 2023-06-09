//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIImageView, UILabel, UIWindow;

@interface BURewardBrowseAlertView : UIView
{
    CDUnknownBlockType _confirmBlock;
    CDUnknownBlockType _cancelBlock;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_msgLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIView *_contentView;
    UIWindow *_bgWindow;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIWindow *bgWindow; // @synthesize bgWindow=_bgWindow;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
- (void)closeBtnClicked;
@property(copy, nonatomic) CDUnknownBlockType confirmBlock; // @synthesize confirmBlock=_confirmBlock;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
- (void)confirmBtnClicked;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)hide;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
- (id)initWith:(id)arg1 msg:(id)arg2;
@property(retain, nonatomic) UILabel *msgLabel; // @synthesize msgLabel=_msgLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)show;

@end

