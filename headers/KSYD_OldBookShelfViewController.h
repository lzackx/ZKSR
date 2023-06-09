//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "KSYD_AdvertContentViewDelegate-Protocol.h"
#import "KSYD_BookCollectionViewCellDelegate-Protocol.h"
#import "KSYD_BookDetailCellDelegate-Protocol.h"
#import "KSYD_BookShelfAlerViewDelegate-Protocol.h"
#import "SDCycleScrollViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIViewControllerTransitioningDelegate-Protocol.h"

@class AFHTTPSessionManager, KSYD_AdvertContentView, KSYD_BookShelfAlerView, KSYD_NetworkManager, KSYD_SQLiteManager, NSArray, NSMutableArray, NSString, NSURLSessionTask, SGHorseRaceLampView, SPAlertController, SPPageMenu, TXScrollLabelView, UIBarButtonItem, UIButton, UICollectionView, UILabel, UITableView, UIView, YYCache;

@interface KSYD_OldBookShelfViewController : KSYD_BaseViewController <UITableViewDelegate, UITableViewDataSource, SKStoreProductViewControllerDelegate, SDCycleScrollViewDelegate, UIGestureRecognizerDelegate, KSYD_BookDetailCellDelegate, KSYD_BookShelfAlerViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, KSYD_BookCollectionViewCellDelegate, KSYD_AdvertContentViewDelegate, UIViewControllerTransitioningDelegate>
{
    _Bool _isOneTime;
    _Bool _isLoading;
    _Bool _isSort;
    _Bool _isLoadingConfig;
    _Bool _isRecConfig;
    _Bool _needReloadBook;
    _Bool _isShowLeadView;
    _Bool _isShowPrivacyView;
    _Bool _isDidLoad;
    _Bool _isSelectView;
    _Bool _isFatten;
    _Bool _isFristShowAD;
    _Bool _isShowBookself;
    _Bool _isShowHorse;
    _Bool _isBookShelfDataRefeshing;
    UIBarButtonItem *_searchButtonItem;
    UIBarButtonItem *_moreButtonItem;
    SPPageMenu *_pageMenu;
    CDUnknownBlockType _ChannelBolck;
    long long _type;
    UITableView *_booksTableView;
    NSArray *_booksArr;
    KSYD_SQLiteManager *_sqliteM;
    KSYD_NetworkManager *_netManager;
    KSYD_NetworkManager *_LoginShareManager;
    AFHTTPSessionManager *_manager;
    YYCache *_cache;
    KSYD_BookShelfAlerView *_alerView;
    SPAlertController *_alertController;
    UIView *_searchView;
    TXScrollLabelView *_scrollLabelView;
    UILabel *_searchBt;
    NSMutableArray *_advertArr;
    NSURLSessionTask *_bookShelfLFRecTask;
    NSURLSessionTask *_searchAutoTask;
    NSURLSessionTask *_bookSynTaskAdd;
    NSURLSessionTask *_bookSynTaskDel;
    NSMutableArray *_bookUpdateArr;
    NSMutableArray *_visitorRefeshArr;
    UIView *_topView;
    UILabel *_topTitle;
    UIButton *_topBtn;
    NSMutableArray *_mergeArr;
    NSMutableArray *_fattArr;
    long long _loadCount;
    long long _userLoadCount;
    UIView *_netFailView;
    UIButton *_netBtn;
    SGHorseRaceLampView *_HRLView;
    NSMutableArray *_timeSortBookShelfArr;
    UICollectionView *_collectionView;
    double _adTableViewY;
    KSYD_AdvertContentView *_topADContentView;
    KSYD_AdvertContentView *_centerADContentView;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType ChannelBolck; // @synthesize ChannelBolck=_ChannelBolck;
- (void)CheckConfigValueWithDict:(id)arg1;
@property(retain, nonatomic) SGHorseRaceLampView *HRLView; // @synthesize HRLView=_HRLView;
- (void)KSYD_AddTag:(id)arg1;
- (void)KSYD_BookShelfTimeSort;
- (void)KSYD_CreatCollectionView;
- (void)KSYD_GetAppConfigInfo;
- (void)KSYD_GetRecBook:(id)arg1;
- (void)KSYD_RemoveTag:(id)arg1;
- (void)KSYD_URLTest;
- (void)KSYD_autoRefreshbooks;
- (void)KSYD_bookManager;
- (void)KSYD_bookShelfSynLFDel:(id)arg1;
- (void)KSYD_buildConfig;
- (void)KSYD_buildUI;
- (id)KSYD_cachePathWithSummaryM:(id)arg1;
- (void)KSYD_cancelAllTasks;
- (void)KSYD_changeUser;
- (void)KSYD_changelistmode;
- (_Bool)KSYD_checkBookInBookCache:(id)arg1 array:(id)arg2;
- (void)KSYD_checkVersion;
- (void)KSYD_clickEditBook;
- (void)KSYD_clickHistory;
- (void)KSYD_clickMoreUserData:(id)arg1;
- (void)KSYD_clickSearch;
- (void)KSYD_deleteBookShelf:(id)arg1;
- (void)KSYD_fattenBookShelf:(id)arg1;
- (id)KSYD_getBookRecordPercentWithBook:(id)arg1;
- (void)KSYD_getValidTokenAndContent;
- (void)KSYD_hiddenHorse:(_Bool)arg1;
- (void)KSYD_initInfoADView;
- (void)KSYD_initIntersTitialAD;
- (void)KSYD_intolastReadBook:(id)arg1;
- (void)KSYD_manageBookArr;
- (void)KSYD_mergeArrBookAD;
- (void)KSYD_networkErrorView;
- (void)KSYD_notGetTokenReason:(id)arg1;
- (void)KSYD_selectBookShelfSort;
- (void)KSYD_setUpConfig;
- (void)KSYD_setUpLFRefresh;
- (void)KSYD_setUpNav;
- (void)KSYD_setupLFUI;
- (id)KSYD_setupNilBookShelf;
- (void)KSYD_setupTableViewHeight;
- (void)KSYD_setupTableViewUI;
- (void)KSYD_showAlcrtViewWithDeleteBook:(id)arg1;
- (void)KSYD_showBook;
- (void)KSYD_showFeatureView;
- (void)KSYD_showLeadView;
- (void)KSYD_showReviewAlert;
- (void)KSYD_singleBookSynTop:(id)arg1 andIsTopValid:(_Bool)arg2;
- (void)KSYD_singleFattenSynTop:(id)arg1 andIsTopValid:(_Bool)arg2;
- (void)KSYD_stickBookShelf:(id)arg1;
- (void)KSYD_stickBookUpdate:(id)arg1;
- (void)KSYD_updateBookLFShelf;
- (void)KSYD_uploadErrorCode:(id)arg1;
@property(retain, nonatomic) KSYD_NetworkManager *LoginShareManager; // @synthesize LoginShareManager=_LoginShareManager;
- (id)MoreActions;
- (void)RefreshBookShelfView;
- (void)RefreshDataWithNetCheck;
@property(nonatomic) double adTableViewY; // @synthesize adTableViewY=_adTableViewY;
- (void)addWith:(long long)arg1 velocity:(double)arg2 isArray:(_Bool)arg3;
@property(retain, nonatomic) NSMutableArray *advertArr; // @synthesize advertArr=_advertArr;
- (void)afNetworkStatusChanged:(id)arg1;
@property(retain, nonatomic) KSYD_BookShelfAlerView *alerView; // @synthesize alerView=_alerView;
@property(retain, nonatomic) SPAlertController *alertController; // @synthesize alertController=_alertController;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (id)arrayToJsonString:(id)arg1;
@property(retain, nonatomic) NSURLSessionTask *bookShelfLFRecTask; // @synthesize bookShelfLFRecTask=_bookShelfLFRecTask;
@property(retain, nonatomic) NSURLSessionTask *bookSynTaskAdd; // @synthesize bookSynTaskAdd=_bookSynTaskAdd;
@property(retain, nonatomic) NSURLSessionTask *bookSynTaskDel; // @synthesize bookSynTaskDel=_bookSynTaskDel;
@property(retain, nonatomic) NSMutableArray *bookUpdateArr; // @synthesize bookUpdateArr=_bookUpdateArr;
@property(retain, nonatomic) NSArray *booksArr; // @synthesize booksArr=_booksArr;
@property(retain, nonatomic) UITableView *booksTableView; // @synthesize booksTableView=_booksTableView;
@property(retain, nonatomic) YYCache *cache; // @synthesize cache=_cache;
@property(retain, nonatomic) KSYD_AdvertContentView *centerADContentView; // @synthesize centerADContentView=_centerADContentView;
- (void)chanShowAd:(id)arg1;
- (void)changeNavColor;
- (void)checkFatten;
- (id)checkIsNullValuse:(id)arg1;
- (void)clickSort;
- (void)collectViewSelectDeatil:(id)arg1;
- (void)collectionLongPress:(id)arg1;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumInteritemSpacingForSectionAtIndex:(long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 minimumLineSpacingForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)creatNetErrorPage;
- (void)dealloc;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
- (void)didReceiveMemoryWarning;
- (void)didSelectBook:(id)arg1;
@property(retain, nonatomic) NSMutableArray *fattArr; // @synthesize fattArr=_fattArr;
- (id)getADConfigModelWith:(id)arg1;
- (id)getBookVieCell:(id)arg1 array:(id)arg2 indexPath:(id)arg3;
- (id)getNewColorWith:(id)arg1;
- (id)getSortBooks;
- (void)goSummaryController:(id)arg1 isCatalog:(_Bool)arg2;
- (void)gotoBookCatalogController:(id)arg1;
- (void)gotoBookCommentViewController:(id)arg1;
- (void)gotoBookDetailViewController:(id)arg1;
- (void)gotoBookSummaryController:(id)arg1;
- (void)impactFeedBack:(id)arg1;
@property(nonatomic) _Bool isBookShelfDataRefeshing; // @synthesize isBookShelfDataRefeshing=_isBookShelfDataRefeshing;
@property(nonatomic) _Bool isDidLoad; // @synthesize isDidLoad=_isDidLoad;
@property(nonatomic) _Bool isFatten; // @synthesize isFatten=_isFatten;
@property(nonatomic) _Bool isFristShowAD; // @synthesize isFristShowAD=_isFristShowAD;
@property(nonatomic) _Bool isLoading; // @synthesize isLoading=_isLoading;
@property(nonatomic) _Bool isLoadingConfig; // @synthesize isLoadingConfig=_isLoadingConfig;
@property(nonatomic) _Bool isOneTime; // @synthesize isOneTime=_isOneTime;
@property(nonatomic) _Bool isRecConfig; // @synthesize isRecConfig=_isRecConfig;
@property(nonatomic) _Bool isSelectView; // @synthesize isSelectView=_isSelectView;
@property(nonatomic) _Bool isShowBookself; // @synthesize isShowBookself=_isShowBookself;
@property(nonatomic) _Bool isShowHorse; // @synthesize isShowHorse=_isShowHorse;
@property(nonatomic) _Bool isShowLeadView; // @synthesize isShowLeadView=_isShowLeadView;
@property(nonatomic) _Bool isShowPrivacyView; // @synthesize isShowPrivacyView=_isShowPrivacyView;
@property(nonatomic) _Bool isSort; // @synthesize isSort=_isSort;
@property(nonatomic) long long loadCount; // @synthesize loadCount=_loadCount;
@property(retain, nonatomic) AFHTTPSessionManager *manager; // @synthesize manager=_manager;
@property(retain, nonatomic) NSMutableArray *mergeArr; // @synthesize mergeArr=_mergeArr;
@property(nonatomic) __weak UIBarButtonItem *moreButtonItem; // @synthesize moreButtonItem=_moreButtonItem;
@property(nonatomic) _Bool needReloadBook; // @synthesize needReloadBook=_needReloadBook;
@property(nonatomic) __weak UIButton *netBtn; // @synthesize netBtn=_netBtn;
- (void)netFailSolve:(id)arg1;
@property(nonatomic) __weak UIView *netFailView; // @synthesize netFailView=_netFailView;
@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (void)netWorkSolve;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(nonatomic) __weak SPPageMenu *pageMenu; // @synthesize pageMenu=_pageMenu;
@property(retain, nonatomic) TXScrollLabelView *scrollLabelView; // @synthesize scrollLabelView=_scrollLabelView;
@property(retain, nonatomic) NSURLSessionTask *searchAutoTask; // @synthesize searchAutoTask=_searchAutoTask;
@property(retain, nonatomic) UILabel *searchBt; // @synthesize searchBt=_searchBt;
@property(nonatomic) __weak UIBarButtonItem *searchButtonItem; // @synthesize searchButtonItem=_searchButtonItem;
@property(nonatomic) __weak UIView *searchView; // @synthesize searchView=_searchView;
@property(retain, nonatomic) KSYD_SQLiteManager *sqliteM; // @synthesize sqliteM=_sqliteM;
- (void)setTableViewY:(double)arg1;
@property(retain, nonatomic) NSMutableArray *timeSortBookShelfArr; // @synthesize timeSortBookShelfArr=_timeSortBookShelfArr;
@property(retain, nonatomic) KSYD_AdvertContentView *topADContentView; // @synthesize topADContentView=_topADContentView;
@property(nonatomic) __weak UIButton *topBtn; // @synthesize topBtn=_topBtn;
@property(nonatomic) __weak UILabel *topTitle; // @synthesize topTitle=_topTitle;
@property(nonatomic) __weak UIView *topView; // @synthesize topView=_topView;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long userLoadCount; // @synthesize userLoadCount=_userLoadCount;
@property(retain, nonatomic) NSMutableArray *visitorRefeshArr; // @synthesize visitorRefeshArr=_visitorRefeshArr;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (void)showDetialAlerView:(id)arg1;
- (void)showPrivacy;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableViewActionArr:(id)arg1 tableView:(id)arg2;
- (void)tableViewLongGestureDeatil:(id)arg1;
- (void)tableViewSelectDeatil:(id)arg1;
- (id)topViewController;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

