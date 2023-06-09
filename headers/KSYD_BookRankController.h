//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "KSYD_ErrorStatusViewDelegate-Protocol.h"

@class KSYD_ClassifyLeftTableView, KSYD_ClassifyRightTableView, KSYD_ErrorStatusView, NSMutableArray, NSString, UIView;

@interface KSYD_BookRankController : KSYD_BaseViewController <KSYD_ErrorStatusViewDelegate>
{
    _Bool _isBookStore;
    _Bool _isInTab;
    _Bool _isShowRight;
    NSString *_sexName;
    UIView *_baseView;
    NSString *_rank_id;
    NSMutableArray *_leftArr;
    KSYD_ClassifyLeftTableView *_leftTableView;
    KSYD_ClassifyRightTableView *_rightTableView;
    NSMutableArray *_rightArr;
    KSYD_ErrorStatusView *_errorView;
}

- (void).cxx_destruct;
- (void)KSYD_buildUI;
- (void)KSYD_getData;
- (void)KSYD_resetBaseViewH:(double)arg1;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(retain, nonatomic) KSYD_ErrorStatusView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) _Bool isBookStore; // @synthesize isBookStore=_isBookStore;
@property(nonatomic) _Bool isInTab; // @synthesize isInTab=_isInTab;
@property(nonatomic) _Bool isShowRight; // @synthesize isShowRight=_isShowRight;
@property(retain, nonatomic) NSMutableArray *leftArr; // @synthesize leftArr=_leftArr;
@property(retain, nonatomic) KSYD_ClassifyLeftTableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(copy, nonatomic) NSString *rank_id; // @synthesize rank_id=_rank_id;
- (void)refreshDataWithType:(id)arg1;
@property(retain, nonatomic) NSMutableArray *rightArr; // @synthesize rightArr=_rightArr;
@property(retain, nonatomic) KSYD_ClassifyRightTableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(copy, nonatomic) NSString *sexName; // @synthesize sexName=_sexName;
- (void)setTableViewFrameWithY:(double)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

