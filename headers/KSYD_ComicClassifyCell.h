//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class KSYD_BookCategories, UIImageView, UILabel;

@interface KSYD_ComicClassifyCell : UICollectionViewCell
{
    _Bool _isComic;
    KSYD_BookCategories *_cateIndex;
    UIImageView *_imageV;
    UILabel *_titleLabel;
    UIImageView *_imageV2;
    UIImageView *_imageV3;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(retain, nonatomic) KSYD_BookCategories *cateIndex; // @synthesize cateIndex=_cateIndex;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
@property(nonatomic) __weak UIImageView *imageV2; // @synthesize imageV2=_imageV2;
@property(nonatomic) __weak UIImageView *imageV3; // @synthesize imageV3=_imageV3;
@property(nonatomic) _Bool isComic; // @synthesize isComic=_isComic;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end

