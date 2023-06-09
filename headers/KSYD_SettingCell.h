//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_SQLiteManager, KSYD_SettingItem, UIButton, UIImageView, UILabel, UISwitch;

@interface KSYD_SettingCell : UITableViewCell
{
    KSYD_SettingItem *_item;
    UIButton *_myCheck;
    long long _labelLeft;
    UIImageView *_arrowImgView;
    UISwitch *_mySwitch;
    KSYD_SQLiteManager *_sqliteM;
    UILabel *_titleLabel;
    UILabel *_ArrowLabel;
}

+ (id)cellWithTableView:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *ArrowLabel; // @synthesize ArrowLabel=_ArrowLabel;
- (void)addMyCheckSelectionNotification;
@property(retain, nonatomic) UIImageView *arrowImgView; // @synthesize arrowImgView=_arrowImgView;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) KSYD_SettingItem *item; // @synthesize item=_item;
@property(nonatomic) long long labelLeft; // @synthesize labelLeft=_labelLeft;
- (void)layoutSubviews;
@property(retain, nonatomic) UIButton *myCheck; // @synthesize myCheck=_myCheck;
- (void)myCheckSelection:(id)arg1;
@property(retain, nonatomic) UISwitch *mySwitch; // @synthesize mySwitch=_mySwitch;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(retain, nonatomic) KSYD_SQLiteManager *sqliteM; // @synthesize sqliteM=_sqliteM;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)switchChange:(id)arg1;

@end

