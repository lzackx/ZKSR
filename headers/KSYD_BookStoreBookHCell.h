//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, KSYD_BookIndexBookData, KSYD_ComicBookModel, NSLayoutConstraint, UIImageView, UILabel, YBookDetailModel;

@interface KSYD_BookStoreBookHCell : UICollectionViewCell
{
    _Bool _isComic;
    KSYD_BookIndexBookData *_bookModel;
    YBookDetailModel *_detailModel;
    KSYD_ComicBookModel *_comicModel;
    UIImageView *_bookCoverImageView;
    UILabel *_bookNameTitle;
    UILabel *_isSerializeLabel;
    UILabel *_authorLabel;
    UILabel *_shortInfoLabel;
    DALabeledCircularProgressView *_CoverProgressView;
    UILabel *_tagTitle;
    NSLayoutConstraint *_tagTitleWidth;
    UILabel *_typeLabel;
    UILabel *_statusLabel;
    UILabel *_wordLabel;
}

- (void).cxx_destruct;
@property(nonatomic) __weak DALabeledCircularProgressView *CoverProgressView; // @synthesize CoverProgressView=_CoverProgressView;
@property(nonatomic) __weak UILabel *authorLabel; // @synthesize authorLabel=_authorLabel;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *bookCoverImageView; // @synthesize bookCoverImageView=_bookCoverImageView;
@property(retain, nonatomic) KSYD_BookIndexBookData *bookModel; // @synthesize bookModel=_bookModel;
@property(nonatomic) __weak UILabel *bookNameTitle; // @synthesize bookNameTitle=_bookNameTitle;
- (void)checkLabelState:(id)arg1 string:(id)arg2;
@property(retain, nonatomic) KSYD_ComicBookModel *comicModel; // @synthesize comicModel=_comicModel;
@property(retain, nonatomic) YBookDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(nonatomic) _Bool isComic; // @synthesize isComic=_isComic;
@property(nonatomic) __weak UILabel *isSerializeLabel; // @synthesize isSerializeLabel=_isSerializeLabel;
@property(nonatomic) __weak UILabel *shortInfoLabel; // @synthesize shortInfoLabel=_shortInfoLabel;
@property(nonatomic) __weak UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(nonatomic) __weak UILabel *tagTitle; // @synthesize tagTitle=_tagTitle;
@property(nonatomic) __weak NSLayoutConstraint *tagTitleWidth; // @synthesize tagTitleWidth=_tagTitleWidth;
@property(nonatomic) __weak UILabel *typeLabel; // @synthesize typeLabel=_typeLabel;
@property(nonatomic) __weak UILabel *wordLabel; // @synthesize wordLabel=_wordLabel;

@end

