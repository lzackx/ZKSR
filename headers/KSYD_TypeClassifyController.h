//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSYD_BaseViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface KSYD_TypeClassifyController : KSYD_BaseViewController <UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_typeAllTableView;
    long long _currentLoadDataPage;
    NSMutableArray *_typeBooksArr;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentLoadDataPage; // @synthesize currentLoadDataPage=_currentLoadDataPage;
@property(retain, nonatomic) UITableView *typeAllTableView; // @synthesize typeAllTableView=_typeAllTableView;
@property(retain, nonatomic) NSMutableArray *typeBooksArr; // @synthesize typeBooksArr=_typeBooksArr;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
