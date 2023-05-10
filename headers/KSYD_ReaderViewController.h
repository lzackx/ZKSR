//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "BUNativeAdDelegate-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"
#import "GDTNativeExpressAdDelegete-Protocol.h"
#import "KSYD_AdvertContentViewDelegate-Protocol.h"
#import "KSYD_CoverControllerDelegate-Protocol.h"
#import "KSYD_MenuViewControllerDelegate-Protocol.h"
#import "KSYD_ReaderADViewControllerDelegate-Protocol.h"
#import "KSYD_ReaderEndTipsViewControllerDelegate-Protocol.h"
#import "KSYD_ReaderManagerDelegate-Protocol.h"
#import "KSYD_VideoRewardControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPageViewControllerDataSource-Protocol.h"
#import "UIPageViewControllerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"
#import "YSpeechViewDelegate-Protocol.h"
#import "ZQAutoViewDelegate-Protocol.h"

@class AFHTTPSessionManager, GADBannerView, GDTNativeExpressAd, GDTNativeExpressAdView, HDBottomStatusView, KSYD_AdvertConfigModel, KSYD_AdvertContentView, KSYD_AdvertModel, KSYD_ChapterContentModel, KSYD_CoverController, KSYD_DownloadManager, KSYD_FuctionLeadView, KSYD_MenuViewController, KSYD_NetworkManager, KSYD_ReadPageViewController, KSYD_ReaderADViewController, KSYD_ReaderManager, KSYD_ReaderSetModel, KSYD_ReaderSettings, KSYD_SpeechViewController, KSYD_SummaryViewController, NSArray, NSDate, NSMutableArray, NSString, NSTimer, NSURLSessionTask, UIButton, UIImageView, UILabel, UIPageViewController, UITableView, UIView, UIViewController, YBookDetailModel, ZQAutoReadViewController;

@interface KSYD_ReaderViewController : KSYD_BaseViewController <UIPageViewControllerDelegate, UIPageViewControllerDataSource, KSYD_ReaderManagerDelegate, YSpeechViewDelegate, UIGestureRecognizerDelegate, GADBannerViewDelegate, UIScrollViewDelegate, KSYD_MenuViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, GDTNativeExpressAdDelegete, ZQAutoViewDelegate, BUNativeAdDelegate, KSYD_ReaderADViewControllerDelegate, KSYD_AdvertContentViewDelegate, KSYD_CoverControllerDelegate, UIViewControllerTransitioningDelegate, KSYD_ReaderEndTipsViewControllerDelegate, KSYD_VideoRewardControllerDelegate>
{
    NSArray *_dataArray;
    _Bool _isCatalog;
    _Bool _isPageBefore;
    _Bool _isPageCurlStyle;
    _Bool _isShowLockView;
    _Bool _isPageBack;
    _Bool _isShowCatalog;
    _Bool _isShowDetail;
    _Bool _flag;
    _Bool _isShowAD;
    _Bool _isGotoComment;
    _Bool _presentSection;
    _Bool _isDragging;
    _Bool _isWillLoad;
    _Bool _isAutoReadEnd;
    _Bool _isInSpeeching;
    _Bool _isInAutoReading;
    _Bool _isUpdateView;
    _Bool _iSNOADVER;
    _Bool _isBeforeDataLoad;
    _Bool _isReloadData;
    _Bool _IsChapterContentLoading;
    YBookDetailModel *_readingBook;
    long long _catalogChapter;
    UIPageViewController *_pageViewController;
    KSYD_ReaderManager *_readerManager;
    KSYD_NetworkManager *_netManager;
    unsigned long long _chapter;
    unsigned long long _page;
    KSYD_MenuViewController *_menuView;
    KSYD_SpeechViewController *_speechView;
    KSYD_SummaryViewController *_summaryVC;
    KSYD_ReaderSettings *_settings;
    KSYD_CoverController *_coverVC;
    KSYD_ReaderSetModel *_setModel;
    unsigned long long _oldChapter;
    AFHTTPSessionManager *_manager;
    NSURLSessionTask *_bookSynTaskAdd;
    KSYD_ReadPageViewController *_currentReadPage;
    NSMutableArray *_menuItems;
    UITableView *_tableView;
    UILabel *_topStatusView;
    HDBottomStatusView *_bottomStatusView;
    NSMutableArray *_chpterArray;
    NSMutableArray *_willLoadChapterArray;
    long long _currentSection;
    long long _currentSectionIndex;
    UIImageView *_tableBGView;
    UIImageView *_bottomStatusBG;
    unsigned long long _currentIndex;
    UIView *_topContainerView;
    NSMutableArray *_ownADs;
    KSYD_AdvertModel *_adModel;
    UIView *_AdVertContentView;
    KSYD_AdvertContentView *_BottomADContentView;
    KSYD_AdvertConfigModel *_bottomAdModel;
    UIView *_BottomChildAdvertView;
    KSYD_AdvertContentView *_PageADContentView;
    UIView *_PageChildAdvertView;
    KSYD_AdvertConfigModel *_PageAdModel;
    KSYD_AdvertContentView *_ChapterEndADContentView;
    KSYD_AdvertConfigModel *_ChapterEndAdModel;
    UIView *_ChapterEndChildAdvertView;
    UIButton *_ADimageView;
    GADBannerView *_bannerView;
    NSMutableArray *_flowViewArray;
    NSArray *_expressAdViews;
    GDTNativeExpressAd *_nativeExpressAd;
    GDTNativeExpressAdView *_nativeExpressAdView;
    KSYD_AdvertModel *_topInfoADModel;
    long long _willLoadIndex;
    KSYD_FuctionLeadView *_leadView;
    KSYD_FuctionLeadView *_AutoReadingLeadView;
    ZQAutoReadViewController *_autoReadController;
    NSTimer *_ReadTimer;
    NSDate *_lastDate;
    NSDate *_pauseDate;
    double _ScrollCurrentY;
    long long _ScrollPage;
    long long _ScrollChapter;
    NSMutableArray *_chaterIndexArr;
    long long _SpaceingPage;
    long long _ClickSpaceingPage;
    KSYD_ReaderADViewController *_ADViewC;
    UIViewController *_currentPageViewController;
    NSTimer *_ReaderNoAdverTimer;
    NSTimer *_changeADViewTimer;
    UILabel *_logoTitleV;
    NSString *_startTime;
    NSString *_endTime;
    KSYD_DownloadManager *_downloadManager;
    KSYD_ChapterContentModel *_CurrentModel;
    long long _pageNumber;
}

- (void).cxx_destruct;
- (id)ADPageViewController;
@property(retain, nonatomic) KSYD_ReaderADViewController *ADViewC; // @synthesize ADViewC=_ADViewC;
@property(retain, nonatomic) UIButton *ADimageView; // @synthesize ADimageView=_ADimageView;
@property(retain, nonatomic) UIView *AdVertContentView; // @synthesize AdVertContentView=_AdVertContentView;
- (void)AdvertViewInit;
@property(retain, nonatomic) KSYD_FuctionLeadView *AutoReadingLeadView; // @synthesize AutoReadingLeadView=_AutoReadingLeadView;
@property(retain, nonatomic) KSYD_AdvertContentView *BottomADContentView; // @synthesize BottomADContentView=_BottomADContentView;
@property(retain, nonatomic) UIView *BottomChildAdvertView; // @synthesize BottomChildAdvertView=_BottomChildAdvertView;
- (void)CalCulateLocationWithScrollViewY:(double)arg1;
- (void)CalculatePageEndHeight:(id)arg1;
@property(retain, nonatomic) KSYD_AdvertContentView *ChapterEndADContentView; // @synthesize ChapterEndADContentView=_ChapterEndADContentView;
@property(retain, nonatomic) KSYD_AdvertConfigModel *ChapterEndAdModel; // @synthesize ChapterEndAdModel=_ChapterEndAdModel;
@property(retain, nonatomic) UIView *ChapterEndChildAdvertView; // @synthesize ChapterEndChildAdvertView=_ChapterEndChildAdvertView;
- (void)CheckCurrentChapterEndHasAD:(id)arg1;
@property(nonatomic) long long ClickSpaceingPage; // @synthesize ClickSpaceingPage=_ClickSpaceingPage;
- (void)CountReadTime;
- (void)CountTimeWithURL;
@property(retain, nonatomic) KSYD_ChapterContentModel *CurrentModel; // @synthesize CurrentModel=_CurrentModel;
@property(nonatomic) _Bool IsChapterContentLoading; // @synthesize IsChapterContentLoading=_IsChapterContentLoading;
- (void)KSYD_AddBook;
- (void)KSYD_BecomeActive;
- (void)KSYD_EnterBackground;
- (void)KSYD_PageLeftTurning;
- (void)KSYD_PageRightTurning;
- (void)KSYD_ShowMenuViewWithDownloadStatus;
- (void)KSYD_SkipWebPage;
- (void)KSYD_WillAppear;
- (void)KSYD_WillEnterForground;
- (void)KSYD_WillResignActive;
- (void)KSYD_autoRead;
- (void)KSYD_bookShelfSynLFAdd:(id)arg1;
- (void)KSYD_checkLock;
- (void)KSYD_checkScheme;
- (void)KSYD_getChapterContent;
- (void)KSYD_goCommitVC;
- (void)KSYD_gotoCommentVC;
- (void)KSYD_loadRewardVideoAds;
- (void)KSYD_lock;
- (void)KSYD_pageViewConttroller:(id)arg1 didFinish:(_Bool)arg2 previousViewController:(id)arg3 transitionCompleted:(_Bool)arg4;
- (void)KSYD_pageViewConttroller:(id)arg1 didFinish:(_Bool)arg2 previousViewController:(id)arg3 transitionCompleted:(_Bool)arg4 perClass:(id)arg5 chapter:(long long)arg6 page:(long long)arg7;
- (void)KSYD_podMenuAtPoint;
- (void)KSYD_reloadADPageView;
- (void)KSYD_reloadHeaderView;
- (void)KSYD_resetReadingTime;
- (void)KSYD_saveReadingTime;
- (void)KSYD_setupMenuView;
- (void)KSYD_setupSpeechView;
- (void)KSYD_showLeadView;
- (void)KSYD_speechViewExitSpeak;
- (_Bool)KSYD_speechViewWillSpeakString:(id)arg1 pageFinished:(_Bool)arg2 chapterFinish:(_Bool)arg3;
- (void)NightAndDayTheme;
- (void)NoAdvertisingReloadVC;
- (void)NoAdvertisingUnlockReloadVC;
@property(retain, nonatomic) KSYD_AdvertContentView *PageADContentView; // @synthesize PageADContentView=_PageADContentView;
@property(retain, nonatomic) KSYD_AdvertConfigModel *PageAdModel; // @synthesize PageAdModel=_PageAdModel;
@property(retain, nonatomic) UIView *PageChildAdvertView; // @synthesize PageChildAdvertView=_PageChildAdvertView;
- (void)PageEndVCBtnClick:(id)arg1;
- (void)ReInitAD;
@property(retain, nonatomic) NSTimer *ReadTimer; // @synthesize ReadTimer=_ReadTimer;
@property(retain, nonatomic) NSTimer *ReaderNoAdverTimer; // @synthesize ReaderNoAdverTimer=_ReaderNoAdverTimer;
- (void)ReloadReaderChapter:(unsigned long long)arg1 page:(unsigned long long)arg2;
@property(nonatomic) long long ScrollChapter; // @synthesize ScrollChapter=_ScrollChapter;
@property(nonatomic) double ScrollCurrentY; // @synthesize ScrollCurrentY=_ScrollCurrentY;
@property(nonatomic) long long ScrollPage; // @synthesize ScrollPage=_ScrollPage;
@property(nonatomic) long long SpaceingPage; // @synthesize SpaceingPage=_SpaceingPage;
- (void)UploadBookShelfReadingRocord;
@property(retain, nonatomic) KSYD_AdvertModel *adModel; // @synthesize adModel=_adModel;
- (void)addSubviews;
- (void)addTapGesture;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)appDidEnterBackgroundNotification:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationWillTerminate:(id)arg1;
@property(retain, nonatomic) ZQAutoReadViewController *autoReadController; // @synthesize autoReadController=_autoReadController;
@property(retain, nonatomic) GADBannerView *bannerView; // @synthesize bannerView=_bannerView;
- (void)beginAutoRead;
@property(retain, nonatomic) NSURLSessionTask *bookSynTaskAdd; // @synthesize bookSynTaskAdd=_bookSynTaskAdd;
@property(retain, nonatomic) KSYD_AdvertConfigModel *bottomAdModel; // @synthesize bottomAdModel=_bottomAdModel;
@property(retain, nonatomic) UIImageView *bottomStatusBG; // @synthesize bottomStatusBG=_bottomStatusBG;
@property(retain, nonatomic) HDBottomStatusView *bottomStatusView; // @synthesize bottomStatusView=_bottomStatusView;
- (void)bringSubViewToCatalog;
- (id)captureView:(id)arg1;
@property(nonatomic) long long catalogChapter; // @synthesize catalogChapter=_catalogChapter;
- (void)chanShowAd:(id)arg1;
@property(retain, nonatomic) NSTimer *changeADViewTimer; // @synthesize changeADViewTimer=_changeADViewTimer;
- (void)changeSummary;
@property(nonatomic) unsigned long long chapter; // @synthesize chapter=_chapter;
@property(retain, nonatomic) NSMutableArray *chaterIndexArr; // @synthesize chaterIndexArr=_chaterIndexArr;
@property(retain, nonatomic) NSMutableArray *chpterArray; // @synthesize chpterArray=_chpterArray;
- (void)clickChapter:(long long)arg1;
- (void)coverController:(id)arg1 currentController:(id)arg2 finish:(_Bool)arg3 perClass:(id)arg4 chapter:(long long)arg5 page:(long long)arg6;
- (id)coverController:(id)arg1 getAboveControllerWithCurrentController:(id)arg2;
- (id)coverController:(id)arg1 getBelowControllerWithCurrentController:(id)arg2;
@property(retain, nonatomic) KSYD_CoverController *coverVC; // @synthesize coverVC=_coverVC;
- (void)creatADRunTimer;
@property(nonatomic) unsigned long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(retain, nonatomic) UIViewController *currentPageViewController; // @synthesize currentPageViewController=_currentPageViewController;
@property(retain, nonatomic) KSYD_ReadPageViewController *currentReadPage; // @synthesize currentReadPage=_currentReadPage;
@property(nonatomic) long long currentSection; // @synthesize currentSection=_currentSection;
@property(nonatomic) long long currentSectionIndex; // @synthesize currentSectionIndex=_currentSectionIndex;
- (void)dealloc;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
- (void)didReceiveMemoryWarning;
@property(retain, nonatomic) KSYD_DownloadManager *downloadManager; // @synthesize downloadManager=_downloadManager;
@property(retain, nonatomic) NSString *endTime; // @synthesize endTime=_endTime;
- (void)exitAutoRead;
@property(retain, nonatomic) NSArray *expressAdViews; // @synthesize expressAdViews=_expressAdViews;
- (void)finishReadPage:(id)arg1;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(retain, nonatomic) NSMutableArray *flowViewArray; // @synthesize flowViewArray=_flowViewArray;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (double)getAttributedStringHeightWithString:(id)arg1 WidthValue:(float)arg2;
- (id)getChapterContentModelWith:(long long)arg1;
- (id)getRootNavController;
- (double)getlastPageWordHeight:(id)arg1;
@property(nonatomic) _Bool iSNOADVER; // @synthesize iSNOADVER=_iSNOADVER;
- (void)initBottomAdView;
- (void)initEndADVER;
- (void)initPageADVER:(_Bool)arg1;
@property(nonatomic) _Bool isAutoReadEnd; // @synthesize isAutoReadEnd=_isAutoReadEnd;
@property(nonatomic) _Bool isBeforeDataLoad; // @synthesize isBeforeDataLoad=_isBeforeDataLoad;
@property(nonatomic) _Bool isCatalog; // @synthesize isCatalog=_isCatalog;
@property(nonatomic) _Bool isDragging; // @synthesize isDragging=_isDragging;
@property(nonatomic) _Bool isGotoComment; // @synthesize isGotoComment=_isGotoComment;
@property(nonatomic) _Bool isInAutoReading; // @synthesize isInAutoReading=_isInAutoReading;
@property(nonatomic) _Bool isInSpeeching; // @synthesize isInSpeeching=_isInSpeeching;
@property(nonatomic) _Bool isPageBack; // @synthesize isPageBack=_isPageBack;
@property(nonatomic) _Bool isPageBefore; // @synthesize isPageBefore=_isPageBefore;
@property(nonatomic) _Bool isPageCurlStyle; // @synthesize isPageCurlStyle=_isPageCurlStyle;
@property(nonatomic) _Bool isReloadData; // @synthesize isReloadData=_isReloadData;
@property(nonatomic) _Bool isShowAD; // @synthesize isShowAD=_isShowAD;
@property(nonatomic) _Bool isShowCatalog; // @synthesize isShowCatalog=_isShowCatalog;
@property(nonatomic) _Bool isShowDetail; // @synthesize isShowDetail=_isShowDetail;
@property(nonatomic) _Bool isShowLockView; // @synthesize isShowLockView=_isShowLockView;
@property(nonatomic) _Bool isUpdateView; // @synthesize isUpdateView=_isUpdateView;
@property(nonatomic) _Bool isWillLoad; // @synthesize isWillLoad=_isWillLoad;
@property(retain, nonatomic) NSDate *lastDate; // @synthesize lastDate=_lastDate;
@property(retain, nonatomic) KSYD_FuctionLeadView *leadView; // @synthesize leadView=_leadView;
- (void)loadDetailLFData;
@property(retain, nonatomic) UILabel *logoTitleV; // @synthesize logoTitleV=_logoTitleV;
@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property(retain, nonatomic) KSYD_MenuViewController *menuView; // @synthesize menuView=_menuView;
@property(retain, nonatomic) GDTNativeExpressAd *nativeExpressAd; // @synthesize nativeExpressAd=_nativeExpressAd;
@property(retain, nonatomic) GDTNativeExpressAdView *nativeExpressAdView; // @synthesize nativeExpressAdView=_nativeExpressAdView;
@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(nonatomic) unsigned long long oldChapter; // @synthesize oldChapter=_oldChapter;
@property(retain, nonatomic) NSMutableArray *ownADs; // @synthesize ownADs=_ownADs;
@property(nonatomic) unsigned long long page; // @synthesize page=_page;
@property(nonatomic) long long pageNumber; // @synthesize pageNumber=_pageNumber;
@property(retain, nonatomic) UIPageViewController *pageViewController; // @synthesize pageViewController=_pageViewController;
- (void)pageViewController:(id)arg1 didFinishAnimating:(_Bool)arg2 previousViewControllers:(id)arg3 transitionCompleted:(_Bool)arg4;
- (id)pageViewController:(id)arg1 viewControllerAfterViewController:(id)arg2;
- (id)pageViewController:(id)arg1 viewControllerBeforeViewController:(id)arg2;
- (id)pageViewControllerpageViewAfterViewController:(id)arg1;
- (id)pageViewControllerpageViewBeforeViewController:(id)arg1;
@property(retain, nonatomic) NSDate *pauseDate; // @synthesize pauseDate=_pauseDate;
- (_Bool)prefersHomeIndicatorAutoHidden;
- (_Bool)prefersStatusBarHidden;
@property(nonatomic) _Bool presentSection; // @synthesize presentSection=_presentSection;
- (id)readPageViewWithChapter:(unsigned long long)arg1 page:(unsigned long long)arg2;
@property(retain, nonatomic) KSYD_ReaderManager *readerManager; // @synthesize readerManager=_readerManager;
- (void)readerSettingsUpdate;
@property(retain, nonatomic) YBookDetailModel *readingBook; // @synthesize readingBook=_readingBook;
- (void)reloadDataWithChapter:(long long)arg1 andSection:(long long)arg2;
- (void)reloadPageVCWith:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)reloadReaderPageViewControllerWith:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)reloadTableViewWithUpdate:(long long)arg1;
- (void)remoteControlReceivedWithEvent:(id)arg1;
- (void)removeADView;
- (void)rewardTimeReset;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) KSYD_ReaderSetModel *setModel; // @synthesize setModel=_setModel;
@property(retain, nonatomic) KSYD_ReaderSettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) KSYD_SpeechViewController *speechView; // @synthesize speechView=_speechView;
@property(retain, nonatomic) NSString *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) KSYD_SummaryViewController *summaryVC; // @synthesize summaryVC=_summaryVC;
@property(retain, nonatomic) UIImageView *tableBGView; // @synthesize tableBGView=_tableBGView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(retain, nonatomic) KSYD_AdvertModel *topInfoADModel; // @synthesize topInfoADModel=_topInfoADModel;
@property(retain, nonatomic) UILabel *topStatusView; // @synthesize topStatusView=_topStatusView;
- (void)setUpCoverViewController;
@property(retain, nonatomic) NSMutableArray *willLoadChapterArray; // @synthesize willLoadChapterArray=_willLoadChapterArray;
@property(nonatomic) long long willLoadIndex; // @synthesize willLoadIndex=_willLoadIndex;
- (void)setupPageViewController;
- (void)shareBoardBySelfDefined;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (void)showDirectoryVc;
- (void)showFreeAd;
- (void)showFreeAdTips;
- (void)showMessageAlert:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)topViewController;
- (void)updateFrontChapter:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)updateLocationWithScrollViewY;
- (void)updateReaderBookSummary:(id)arg1;
- (void)updateReaderChapter:(long long)arg1 andPage:(long long)arg2;
- (void)updateReaderChapter:(unsigned long long)arg1 page:(unsigned long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)webSiteCheck;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
