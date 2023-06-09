//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class KSYD_AdvertConfigModel, KSYD_AdvertModel, KSYD_BatteryView, KSYD_GDTPageView, KSYD_GoogleAdvancedPageView, KSYD_NetworkManager, KSYD_ReaderManager, KSYD_ReaderSettings, KSYD_ReaderView, NSAttributedString, NSLayoutConstraint, NSMutableArray, NSString, UIImageView, UILabel, UIView;

@interface KSYD_ReadPageViewController : KSYD_BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    _Bool _isOtherAD;
    NSString *_booktitle;
    NSAttributedString *_pageContent;
    unsigned long long _page;
    unsigned long long _totalPage;
    unsigned long long _chapter;
    KSYD_GDTPageView *_ChapterEndGDT;
    KSYD_GoogleAdvancedPageView *_ChapterEndGoogle;
    UIView *_ChaperEndAdvertView;
    KSYD_AdvertConfigModel *_BottomAdVertModel;
    UILabel *_titleLabel;
    UILabel *_pageNumberLabel;
    UILabel *_timeLabel;
    KSYD_BatteryView *_batteryView;
    KSYD_ReaderView *_readerView;
    UIImageView *_themeImageV;
    KSYD_NetworkManager *_netManager;
    KSYD_AdvertModel *_adModel;
    KSYD_ReaderManager *_readerManager;
    NSMutableArray *_ownADs;
    NSLayoutConstraint *_titleTop;
    NSLayoutConstraint *_bottomMenuSpace;
    NSLayoutConstraint *_advertTableViewHeight;
    double _InfoHeight;
    UIView *_AdVertContentView;
    double _ChapterEndInfoHeight;
    double _ChapterEndY;
    UILabel *_firestPageLabel;
    KSYD_ReaderSettings *_setttings;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *AdVertContentView; // @synthesize AdVertContentView=_AdVertContentView;
@property(retain, nonatomic) KSYD_AdvertConfigModel *BottomAdVertModel; // @synthesize BottomAdVertModel=_BottomAdVertModel;
@property(retain, nonatomic) UIView *ChaperEndAdvertView; // @synthesize ChaperEndAdvertView=_ChaperEndAdvertView;
@property(retain, nonatomic) KSYD_GDTPageView *ChapterEndGDT; // @synthesize ChapterEndGDT=_ChapterEndGDT;
@property(retain, nonatomic) KSYD_GoogleAdvancedPageView *ChapterEndGoogle; // @synthesize ChapterEndGoogle=_ChapterEndGoogle;
@property(nonatomic) double ChapterEndInfoHeight; // @synthesize ChapterEndInfoHeight=_ChapterEndInfoHeight;
@property(nonatomic) double ChapterEndY; // @synthesize ChapterEndY=_ChapterEndY;
@property(nonatomic) double InfoHeight; // @synthesize InfoHeight=_InfoHeight;
@property(retain, nonatomic) KSYD_AdvertModel *adModel; // @synthesize adModel=_adModel;
- (void)addTitleHeaderLabel;
@property(nonatomic) __weak NSLayoutConstraint *advertTableViewHeight; // @synthesize advertTableViewHeight=_advertTableViewHeight;
@property(nonatomic) __weak KSYD_BatteryView *batteryView; // @synthesize batteryView=_batteryView;
@property(retain, nonatomic) NSString *booktitle; // @synthesize booktitle=_booktitle;
@property(nonatomic) __weak NSLayoutConstraint *bottomMenuSpace; // @synthesize bottomMenuSpace=_bottomMenuSpace;
@property(nonatomic) unsigned long long chapter; // @synthesize chapter=_chapter;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)exitSpeak;
@property(retain, nonatomic) UILabel *firestPageLabel; // @synthesize firestPageLabel=_firestPageLabel;
@property(nonatomic) _Bool isOtherAD; // @synthesize isOtherAD=_isOtherAD;
@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
@property(retain, nonatomic) NSMutableArray *ownADs; // @synthesize ownADs=_ownADs;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(retain, nonatomic) NSAttributedString *pageContent; // @synthesize pageContent=_pageContent;
@property(nonatomic) __weak UILabel *pageNumberLabel; // @synthesize pageNumberLabel=_pageNumberLabel;
@property(retain, nonatomic) KSYD_ReaderManager *readerManager; // @synthesize readerManager=_readerManager;
@property(retain, nonatomic) KSYD_ReaderView *readerView; // @synthesize readerView=_readerView;
@property(retain, nonatomic) KSYD_ReaderSettings *setttings; // @synthesize setttings=_setttings;
@property(nonatomic) __weak UIImageView *themeImageV; // @synthesize themeImageV=_themeImageV;
@property(nonatomic) __weak UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak NSLayoutConstraint *titleTop; // @synthesize titleTop=_titleTop;
@property(nonatomic) unsigned long long totalPage; // @synthesize totalPage=_totalPage;
- (void)updateSpeakString:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

