//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CALayer, KSYD_SelectChannelModel, UIButton, UILabel;
@protocol SelectChannelCellDeleteDelegate;

@interface KSYD_SelectChannelCell : UICollectionViewCell
{
    unsigned long long _style;
    UILabel *_title;
    UIButton *_delBtn;
    CALayer *_subLayer;
    id <SelectChannelCellDeleteDelegate> _delegate;
    KSYD_SelectChannelModel *_model;
}

- (void).cxx_destruct;
- (void)addShadowToView:(id)arg1 withColor:(id)arg2;
@property(retain, nonatomic) UIButton *delBtn; // @synthesize delBtn=_delBtn;
@property(nonatomic) id <SelectChannelCellDeleteDelegate> delegate; // @synthesize delegate=_delegate;
- (void)delete:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) KSYD_SelectChannelModel *model; // @synthesize model=_model;
- (void)removeShadowToView:(id)arg1;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(retain, nonatomic) CALayer *subLayer; // @synthesize subLayer=_subLayer;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;

@end

