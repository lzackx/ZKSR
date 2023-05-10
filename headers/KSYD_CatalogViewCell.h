//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class KSYD_ChapterContentModel, KSYD_ComicCatalogModel, UILabel;

@interface KSYD_CatalogViewCell : UITableViewCell
{
    _Bool _isReadingChapter;
    KSYD_ChapterContentModel *_model;
    long long _count;
    long long _index;
    double _cellWidth;
    KSYD_ComicCatalogModel *_catalogModel;
    UILabel *_catalogLabel;
    UILabel *_cacheLabel;
}

+ (id)catalogViewCellWithTableView:(id)arg1 reuseId:(id)arg2;
- (void).cxx_destruct;
@property(nonatomic) __weak UILabel *cacheLabel; // @synthesize cacheLabel=_cacheLabel;
- (void)catalogFrame;
@property(nonatomic) __weak UILabel *catalogLabel; // @synthesize catalogLabel=_catalogLabel;
@property(retain, nonatomic) KSYD_ComicCatalogModel *catalogModel; // @synthesize catalogModel=_catalogModel;
@property(nonatomic) double cellWidth; // @synthesize cellWidth=_cellWidth;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) long long index; // @synthesize index=_index;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) _Bool isReadingChapter; // @synthesize isReadingChapter=_isReadingChapter;
@property(retain, nonatomic) KSYD_ChapterContentModel *model; // @synthesize model=_model;

@end
