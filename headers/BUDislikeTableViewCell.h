//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface BUDislikeTableViewCell : UITableViewCell
{
    UIImageView *_nextImg;
    UILabel *_titleLable;
    UIView *_sepLine;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) UIImageView *nextImg; // @synthesize nextImg=_nextImg;
- (void)refleshUIWithModel:(id)arg1 hiddenSep:(_Bool)arg2;
@property(retain, nonatomic) UIView *sepLine; // @synthesize sepLine=_sepLine;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;

@end

