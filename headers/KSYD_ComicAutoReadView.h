//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class KSYD_Slider, UILabel;

@interface KSYD_ComicAutoReadView : UIView
{
    CDUnknownBlockType _CloseBlock;
    UIView *_contentView;
    KSYD_Slider *_slider;
    UILabel *_speechLabel;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType CloseBlock; // @synthesize CloseBlock=_CloseBlock;
- (void)KSYD_setupUI;
- (void)KSYD_speechSlider:(id)arg1;
- (void)clickExit;
@property(nonatomic) __weak UIView *contentView; // @synthesize contentView=_contentView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak KSYD_Slider *slider; // @synthesize slider=_slider;
@property(nonatomic) __weak UILabel *speechLabel; // @synthesize speechLabel=_speechLabel;

@end

