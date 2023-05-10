//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BUTimer, NSAttributedString, UIButton, UIImageView, UILabel;

@interface BURewardedLiveAlertView : UIView
{
    _Bool _autoJump;
    NSAttributedString *_attrTitleText;
    double _titleTextHeight;
    long long _countDown;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _confirm;
    CDUnknownBlockType _refuse;
    BUTimer *_timer;
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UIButton *_confirmBtn;
    UIButton *_refuseBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSAttributedString *attrTitleText; // @synthesize attrTitleText=_attrTitleText;
@property(nonatomic) _Bool autoJump; // @synthesize autoJump=_autoJump;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType confirm; // @synthesize confirm=_confirm;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) long long countDown; // @synthesize countDown=_countDown;
- (void)creatSubViews;
- (void)dealloc;
- (void)disappear;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2 duration:(long long)arg3 autoJump:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)onBecomeActive;
- (void)onConfirm;
- (void)onEnterBackground;
- (void)onRefuse;
@property(copy, nonatomic) CDUnknownBlockType refuse; // @synthesize refuse=_refuse;
@property(retain, nonatomic) UIButton *refuseBtn; // @synthesize refuseBtn=_refuseBtn;
@property(retain, nonatomic) BUTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) double titleTextHeight; // @synthesize titleTextHeight=_titleTextHeight;
- (void)showInView:(id)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateLeftSeconds:(id)arg1;
- (void)updateRefuseText;

@end
