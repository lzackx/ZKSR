//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class DALabeledCircularProgressView, KSYD_BookListsDataModel, KSYD_BookStoreBookListsData, KSYD_Themes, UIImageView, UILabel, UIView;

@interface KSYD_BookStoreThemeCell : UICollectionViewCell
{
    KSYD_Themes *_theme;
    KSYD_BookStoreBookListsData *_listData;
    KSYD_BookListsDataModel *_listModel;
    UILabel *_themeNameLabel;
    UILabel *_authorNameLabel;
    UIImageView *_themeCoverImageView;
    UILabel *_shortInfoLabel;
    UILabel *_bookNumberTitle;
    UILabel *_FavNumberTitle;
    DALabeledCircularProgressView *_themeCoverProgress;
    UIView *_lineView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *FavNumberTitle; // @synthesize FavNumberTitle=_FavNumberTitle;
@property(nonatomic) __weak UILabel *authorNameLabel; // @synthesize authorNameLabel=_authorNameLabel;
- (void)awakeFromNib;
@property(nonatomic) __weak UILabel *bookNumberTitle; // @synthesize bookNumberTitle=_bookNumberTitle;
@property(nonatomic) __weak UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KSYD_BookStoreBookListsData *listData; // @synthesize listData=_listData;
@property(retain, nonatomic) KSYD_BookListsDataModel *listModel; // @synthesize listModel=_listModel;
@property(nonatomic) __weak UILabel *shortInfoLabel; // @synthesize shortInfoLabel=_shortInfoLabel;
@property(retain, nonatomic) KSYD_Themes *theme; // @synthesize theme=_theme;
@property(nonatomic) __weak UIImageView *themeCoverImageView; // @synthesize themeCoverImageView=_themeCoverImageView;
@property(nonatomic) __weak DALabeledCircularProgressView *themeCoverProgress; // @synthesize themeCoverProgress=_themeCoverProgress;
@property(nonatomic) __weak UILabel *themeNameLabel; // @synthesize themeNameLabel=_themeNameLabel;

@end

