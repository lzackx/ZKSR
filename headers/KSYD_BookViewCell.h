//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_DownloadManager, KSYD_ProgressView, NSIndexPath, NSLayoutConstraint, NSString, UIButton, UIImageView, UILabel, UIView, YBookDetailModel;
@protocol KSYD_BookDetailCellDelegate;

@interface KSYD_BookViewCell : UITableViewCell
{
    _Bool _isFatten;
    _Bool _isLastRead;
    NSIndexPath *_indexPath;
    YBookDetailModel *_bookM;
    YBookDetailModel *_fattenBookM;
    NSString *_recordPercent;
    UIButton *_detailBtn;
    id <KSYD_BookDetailCellDelegate> _delegate;
    UIView *_pointView;
    UIImageView *_bookImage;
    UILabel *_titleLabel;
    UILabel *_lastUpdate;
    UIImageView *_updateImage;
    UIImageView *_stickImageV;
    KSYD_ProgressView *_progressView;
    UILabel *_lastChapter;
    UIButton *_turnBack;
    UILabel *_updateLabel;
    UIView *_lineView;
    UILabel *_lastLabel;
    NSLayoutConstraint *_titleX;
    NSLayoutConstraint *_imagex;
    KSYD_DownloadManager *_downloadManager;
    UIButton *_tagBtn;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
@property(nonatomic) __weak UIImageView *bookImage; // @synthesize bookImage=_bookImage;
@property(retain, nonatomic) YBookDetailModel *bookM; // @synthesize bookM=_bookM;
- (void)clickDetail:(id)arg1;
@property(nonatomic) __weak id <KSYD_BookDetailCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIButton *detailBtn; // @synthesize detailBtn=_detailBtn;
@property(retain, nonatomic) KSYD_DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) YBookDetailModel *fattenBookM; // @synthesize fattenBookM=_fattenBookM;
- (double)getStringW:(id)arg1;
- (void)hideProgressView;
@property(nonatomic) __weak NSLayoutConstraint *imagex; // @synthesize imagex=_imagex;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic) _Bool isFatten; // @synthesize isFatten=_isFatten;
@property(nonatomic) _Bool isLastRead; // @synthesize isLastRead=_isLastRead;
@property(nonatomic) __weak UILabel *lastChapter; // @synthesize lastChapter=_lastChapter;
@property(nonatomic) __weak UILabel *lastLabel; // @synthesize lastLabel=_lastLabel;
@property(nonatomic) __weak UILabel *lastUpdate; // @synthesize lastUpdate=_lastUpdate;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
- (void)longPress:(id)arg1;
@property(nonatomic) __weak UIView *pointView; // @synthesize pointView=_pointView;
@property(nonatomic) __weak KSYD_ProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSString *recordPercent; // @synthesize recordPercent=_recordPercent;
- (void)setDownloadBookCallback;
@property(nonatomic) __weak UIImageView *stickImageV; // @synthesize stickImageV=_stickImageV;
@property(nonatomic) __weak UIButton *tagBtn; // @synthesize tagBtn=_tagBtn;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleX; // @synthesize titleX=_titleX;
@property(nonatomic) __weak UIButton *turnBack; // @synthesize turnBack=_turnBack;
@property(nonatomic) __weak UIImageView *updateImage; // @synthesize updateImage=_updateImage;
@property(nonatomic) __weak UILabel *updateLabel; // @synthesize updateLabel=_updateLabel;

@end

