//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GDTAdBaseModel, UIButton, UILabel, UIView;

@interface GDTPlaceholderEndCard : UIImageView
{
    GDTAdBaseModel *_adModel;
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UIButton *_detailButton;
    UIView *_starLevelView;
    UIView *_maskView;
}

- (void).cxx_destruct;
- (void)GDTfunctionb395il:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) GDTAdBaseModel *adModel; // @synthesize adModel=_adModel;
@property(retain, nonatomic) UIButton *detailButton; // @synthesize detailButton=_detailButton;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) UIView *starLevelView; // @synthesize starLevelView=_starLevelView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

