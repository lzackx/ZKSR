//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, UIImageView, YBookDetailModel;

@interface KSYD_BookStoreCoverVCell : UICollectionViewCell
{
    YBookDetailModel *_bookModel;
    UIImageView *_CoverImageView;
    DALabeledCircularProgressView *_coverImageProgressView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UIImageView *CoverImageView; // @synthesize CoverImageView=_CoverImageView;
- (void)awakeFromNib;
@property(retain, nonatomic) YBookDetailModel *bookModel; // @synthesize bookModel=_bookModel;
@property(nonatomic) __weak DALabeledCircularProgressView *coverImageProgressView; // @synthesize coverImageProgressView=_coverImageProgressView;

@end

