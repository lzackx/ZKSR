//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "KSYD_AdvertContentViewDelegate-Protocol.h"

@class KSYD_AdvertContentView, KSYD_ClassifyLeftTableView, KSYD_ClassifyRightTableView, NSMutableArray, NSString;

@interface KSYD_NewClassiflyController : KSYD_BaseViewController <KSYD_AdvertContentViewDelegate>
{
    KSYD_ClassifyLeftTableView *_leftTableView;
    KSYD_ClassifyRightTableView *_rightTableView;
    NSMutableArray *_leftArr;
    NSMutableArray *_rightArr;
    KSYD_AdvertContentView *_topADContentView;
    double _ADViewHeight;
}

- (void).cxx_destruct;
@property(nonatomic) double ADViewHeight; // @synthesize ADViewHeight=_ADViewHeight;
- (void)KSYD_initInfoADView;
- (void)KSYD_setScrollViewY:(double)arg1;
- (void)buildUI;
- (void)deleteADViewWith:(id)arg1 andADHeight:(float)arg2 andSelfView:(id)arg3;
- (void)getData;
@property(retain, nonatomic) NSMutableArray *leftArr; // @synthesize leftArr=_leftArr;
@property(retain, nonatomic) KSYD_ClassifyLeftTableView *leftTableView; // @synthesize leftTableView=_leftTableView;
@property(retain, nonatomic) NSMutableArray *rightArr; // @synthesize rightArr=_rightArr;
@property(retain, nonatomic) KSYD_ClassifyRightTableView *rightTableView; // @synthesize rightTableView=_rightTableView;
@property(retain, nonatomic) KSYD_AdvertContentView *topADContentView; // @synthesize topADContentView=_topADContentView;
- (void)showADContentWith:(id)arg1 andADHeight:(float)arg2 andIsLoadSuccess:(_Bool)arg3 andSelfView:(id)arg4 andADView:(id)arg5;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

