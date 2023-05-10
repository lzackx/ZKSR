//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UIImageView, UILabel;
@protocol BookCacheTableViewCellDelegate;

@interface KSYD_BookCacheTableViewCell : UITableViewCell
{
    _Bool _isComic;
    long long _index;
    id <BookCacheTableViewCellDelegate> _deleagte;
    UIImageView *_bgImageView;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UILabel *_tipsLabel;
    UIButton *_cleanBtn;
    UIButton *_detailBtn;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) UIButton *cleanBtn; // @synthesize cleanBtn=_cleanBtn;
- (void)clickClearn;
- (void)clickDetail;
- (void)configCellWithEntity:(id)arg1 indexPath:(id)arg2;
@property(nonatomic) __weak id <BookCacheTableViewCellDelegate> deleagte; // @synthesize deleagte=_deleagte;
@property(retain, nonatomic) UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(nonatomic) __weak UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isComic; // @synthesize isComic=_isComic;
@property(nonatomic) __weak UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
