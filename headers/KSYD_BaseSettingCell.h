//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_SettingItem, UIButton, UIImageView, UILabel, UISwitch;

@interface KSYD_BaseSettingCell : UITableViewCell
{
    double _HomeR;
    double _HomeG;
    double _HomeB;
    double _alpha;
    double _alphaCur;
    KSYD_SettingItem *_item;
    UIButton *_myCheck;
    UIImageView *_arrowImgView;
    UISwitch *_mySwitch;
    UILabel *_arrowLabel;
}

+ (id)cellWithTableView:(id)arg1;
- (void).cxx_destruct;
- (void)addMyCheckSelectionNotification;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
@property(retain, nonatomic) UILabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) KSYD_SettingItem *item; // @synthesize item=_item;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *myCheck; // @synthesize myCheck=_myCheck;
- (void)myCheckSelection:(id)arg1;
@property(retain, nonatomic) UISwitch *mySwitch; // @synthesize mySwitch=_mySwitch;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)shapeLayerUserPath;
- (void)switchChange:(id)arg1;

@end
