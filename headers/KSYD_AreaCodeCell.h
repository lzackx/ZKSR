//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_AreaCodeDataModel, UILabel, UIView;

@interface KSYD_AreaCodeCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_codeLabel;
    UIView *_lineView;
    KSYD_AreaCodeDataModel *_model;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *codeLabel; // @synthesize codeLabel=_codeLabel;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KSYD_AreaCodeDataModel *model; // @synthesize model=_model;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
