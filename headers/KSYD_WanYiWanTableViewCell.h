//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_AdvertModel, NSLayoutConstraint, UIImageView, UILabel;

@interface KSYD_WanYiWanTableViewCell : UITableViewCell
{
    KSYD_AdvertModel *_advertModel;
    NSLayoutConstraint *_imageX;
    NSLayoutConstraint *_titleX;
    UIImageView *_WanYiWanCover;
    UILabel *_WanYiWanTitle;
    UILabel *_WanYiWanAuthor;
    UILabel *_WanYiWanDes;
    UILabel *_titleLabel;
    UILabel *_authorLabel;
    UILabel *_detailLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *WanYiWanAuthor; // @synthesize WanYiWanAuthor=_WanYiWanAuthor;
@property(nonatomic) __weak UIImageView *WanYiWanCover; // @synthesize WanYiWanCover=_WanYiWanCover;
@property(nonatomic) __weak UILabel *WanYiWanDes; // @synthesize WanYiWanDes=_WanYiWanDes;
@property(nonatomic) __weak UILabel *WanYiWanTitle; // @synthesize WanYiWanTitle=_WanYiWanTitle;
@property(retain, nonatomic) KSYD_AdvertModel *advertModel; // @synthesize advertModel=_advertModel;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) __weak NSLayoutConstraint *imageX; // @synthesize imageX=_imageX;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleX; // @synthesize titleX=_titleX;

@end

