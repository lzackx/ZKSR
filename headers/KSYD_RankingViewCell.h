//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_RankingModel, UIImageView, UILabel;

@interface KSYD_RankingViewCell : UITableViewCell
{
    _Bool _expand;
    KSYD_RankingModel *_rankingM;
    UIImageView *_rankingImageV;
    UILabel *_titleLabel;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) _Bool expand; // @synthesize expand=_expand;
@property(nonatomic) __weak UIImageView *rankingImageV; // @synthesize rankingImageV=_rankingImageV;
@property(retain, nonatomic) KSYD_RankingModel *rankingM; // @synthesize rankingM=_rankingM;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
