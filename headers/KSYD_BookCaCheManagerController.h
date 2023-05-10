//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UIAlertViewDelegate-Protocol.h"

@class KSYD_BookCacheDatasource, KSYD_SQLiteManager, NSArray, NSIndexPath, NSMutableArray, NSString, UITableView;

@interface KSYD_BookCaCheManagerController : UIViewController <UIAlertViewDelegate>
{
    _Bool _isOldVersion;
    UITableView *_tableView;
    NSMutableArray *_dataArray;
    KSYD_BookCacheDatasource *_datasource;
    NSMutableArray *_cellIdentifiers;
    NSIndexPath *_deleteIndexPath;
    long long _deleteIndex;
    double _totalSize;
    KSYD_SQLiteManager *_sqliteM;
    NSArray *_bookModels;
}

- (void).cxx_destruct;
- (void)KSYD_addNavBtn;
- (void)KSYD_buildHeaderView;
- (void)KSYD_cleanBookCache;
- (void)KSYD_configDataSource;
- (void)KSYD_configTableView;
- (void)KSYD_deleteAllBookCache;
- (void)KSYD_deleteunPresentBook;
- (void)KSYD_getCacheData;
- (void)KSYD_removeCacheWithCacheModel:(id)arg1 andSummaryModel:(id)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
@property(retain, nonatomic) NSArray *bookModels; // @synthesize bookModels=_bookModels;
@property(retain, nonatomic) NSMutableArray *cellIdentifiers; // @synthesize cellIdentifiers=_cellIdentifiers;
- (void)cellSelectedWithObj:(id)arg1;
- (void)configIdentifier;
@property(retain, nonatomic) NSMutableArray *dataArray; // @synthesize dataArray=_dataArray;
@property(retain, nonatomic) KSYD_BookCacheDatasource *datasource; // @synthesize datasource=_datasource;
- (void)dealloc;
@property(nonatomic) long long deleteIndex; // @synthesize deleteIndex=_deleteIndex;
@property(retain, nonatomic) NSIndexPath *deleteIndexPath; // @synthesize deleteIndexPath=_deleteIndexPath;
@property(nonatomic) _Bool isOldVersion; // @synthesize isOldVersion=_isOldVersion;
@property(retain, nonatomic) KSYD_SQLiteManager *sqliteM; // @synthesize sqliteM=_sqliteM;
@property(nonatomic) __weak UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double totalSize; // @synthesize totalSize=_totalSize;
- (void)sortWithArr:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
