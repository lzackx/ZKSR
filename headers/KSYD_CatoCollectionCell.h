//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, KSYD_BookCategories, NSLayoutConstraint, UIImageView, UILabel, UIView;

@interface KSYD_CatoCollectionCell : UICollectionViewCell
{
    _Bool _isComic;
    KSYD_BookCategories *_cateIndex;
    UILabel *_cateName;
    UIImageView *_cateCovcer;
    UILabel *_ltypeName;
    DALabeledCircularProgressView *_coverProgressView;
    UIImageView *_imageView3;
    UIImageView *_imageView1;
    UIImageView *_imageView2;
    NSLayoutConstraint *_imageW;
    NSLayoutConstraint *_imageRight;
    NSLayoutConstraint *_titleW;
    UIView *_bgView;
    UILabel *_typeLabel;
    UIImageView *_image2;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) __weak UIImageView *cateCovcer; // @synthesize cateCovcer=_cateCovcer;
@property(retain, nonatomic) KSYD_BookCategories *cateIndex; // @synthesize cateIndex=_cateIndex;
@property(nonatomic) __weak UILabel *cateName; // @synthesize cateName=_cateName;
@property(nonatomic) __weak DALabeledCircularProgressView *coverProgressView; // @synthesize coverProgressView=_coverProgressView;
@property(nonatomic) __weak UIImageView *image2; // @synthesize image2=_image2;
@property(nonatomic) __weak NSLayoutConstraint *imageRight; // @synthesize imageRight=_imageRight;
@property(nonatomic) __weak UIImageView *imageView1; // @synthesize imageView1=_imageView1;
@property(nonatomic) __weak UIImageView *imageView2; // @synthesize imageView2=_imageView2;
@property(nonatomic) __weak UIImageView *imageView3; // @synthesize imageView3=_imageView3;
@property(nonatomic) __weak NSLayoutConstraint *imageW; // @synthesize imageW=_imageW;
@property(nonatomic) _Bool isComic; // @synthesize isComic=_isComic;
@property(nonatomic) __weak UILabel *ltypeName; // @synthesize ltypeName=_ltypeName;
@property(nonatomic) __weak NSLayoutConstraint *titleW; // @synthesize titleW=_titleW;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;

@end

