//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSYD_Slider, NSMutableArray, UIButton, UISwitch;

@interface KSYD_ComicSettingView : UIView
{
    _Bool _isShow;
    CDUnknownBlockType _ClickBlock;
    KSYD_Slider *_slider;
    UISwitch *_timeSwitch;
    UIButton *_scrollSelBtn;
    UIButton *_autoBtn;
    UIButton *_rotateBtn;
    UIView *_bigView;
    NSMutableArray *_btnsArr;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType ClickBlock; // @synthesize ClickBlock=_ClickBlock;
- (void)KSYD_barrageChange:(id)arg1;
- (void)KSYD_resetSettingView;
- (void)KSYD_timeChanged:(id)arg1;
@property(nonatomic) __weak UIButton *autoBtn; // @synthesize autoBtn=_autoBtn;
@property(nonatomic) __weak UIView *bigView; // @synthesize bigView=_bigView;
@property(retain, nonatomic) NSMutableArray *btnsArr; // @synthesize btnsArr=_btnsArr;
- (void)buildUI;
- (void)chapterSliderAction:(id)arg1;
- (void)clickAutoRead:(id)arg1;
- (void)clickBarrageSetting;
- (void)clickRotate:(id)arg1;
- (void)clickScroll:(id)arg1;
- (void)dealloc;
- (id)init;
@property(nonatomic) _Bool isShow; // @synthesize isShow=_isShow;
- (void)layoutSubviews;
@property(nonatomic) __weak UIButton *rotateBtn; // @synthesize rotateBtn=_rotateBtn;
@property(nonatomic) __weak UIButton *scrollSelBtn; // @synthesize scrollSelBtn=_scrollSelBtn;
@property(nonatomic) __weak KSYD_Slider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak UISwitch *timeSwitch; // @synthesize timeSwitch=_timeSwitch;
- (id)titleLabelWithTitle:(id)arg1 index:(long long)arg2 view:(id)arg3;
- (id)titleTextColor;

@end
