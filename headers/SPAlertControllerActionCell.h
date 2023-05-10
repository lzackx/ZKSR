//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSMutableArray, SPAlertAction, UILabel;

@interface SPAlertControllerActionCell : UITableViewCell
{
    SPAlertAction *_action;
    UILabel *_titleLabel;
    NSMutableArray *_titleLabelConstraints;
    NSMutableArray *_lineConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
- (void).cxx_destruct;
@property(retain, nonatomic) SPAlertAction *action; // @synthesize action=_action;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) NSMutableArray *lineConstraints; // @synthesize lineConstraints=_lineConstraints;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSMutableArray *titleLabelConstraints; // @synthesize titleLabelConstraints=_titleLabelConstraints;
- (void)updateConstraints;

@end
