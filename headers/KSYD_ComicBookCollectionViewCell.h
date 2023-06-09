//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, KSYD_ComicBookModel, NSArray, NSIndexPath, NSString, UIButton, UIImageView, UILabel;
@protocol KSYD_ComicCollectionViewCellDelegate;

@interface KSYD_ComicBookCollectionViewCell : UICollectionViewCell
{
    _Bool _isAdd;
    KSYD_ComicBookModel *_book;
    NSIndexPath *_indexPath;
    id <KSYD_ComicCollectionViewCellDelegate> _delegate;
    NSString *_iconUrl;
    UIImageView *_imageV;
    UILabel *_bookName;
    DALabeledCircularProgressView *_progressView;
    UILabel *_bookRead;
    UIImageView *_updateImage;
    UILabel *_timelabel;
    UIImageView *_stickImage;
    UIButton *_detialBtn;
    NSArray *_bookIconCovers;
}

+ (id)cellWithInitialize;
- (void).cxx_destruct;
- (void)awakeFromNib;
@property(retain, nonatomic) KSYD_ComicBookModel *book; // @synthesize book=_book;
@property(retain, nonatomic) NSArray *bookIconCovers; // @synthesize bookIconCovers=_bookIconCovers;
@property(nonatomic) __weak UILabel *bookName; // @synthesize bookName=_bookName;
@property(nonatomic) __weak UILabel *bookRead; // @synthesize bookRead=_bookRead;
- (void)clickDetail;
@property(nonatomic) __weak id <KSYD_ComicCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *detialBtn; // @synthesize detialBtn=_detialBtn;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) __weak UIImageView *imageV; // @synthesize imageV=_imageV;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isAdd; // @synthesize isAdd=_isAdd;
@property(nonatomic) __weak DALabeledCircularProgressView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) __weak UIImageView *stickImage; // @synthesize stickImage=_stickImage;
@property(nonatomic) __weak UILabel *timelabel; // @synthesize timelabel=_timelabel;
@property(nonatomic) __weak UIImageView *updateImage; // @synthesize updateImage=_updateImage;

@end

