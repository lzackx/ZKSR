//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "CommentSendViewContainerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class CommentInfoCell, CommentSendViewContainer, KSYD_CommentModel, KSYD_NetworkManager, NSMutableArray, NSString, UISegmentedControl, UITableView;

@interface KSYD_ReplyCommenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, CommentSendViewContainerDelegate>
{
    _Bool _isBecomeFirstRes;
    _Bool _isNew;
    KSYD_CommentModel *_commentModel;
    UISegmentedControl *_sc;
    UITableView *_commentsDisplayListView;
    CommentSendViewContainer *_sendViewContainer;
    KSYD_CommentModel *_modelData;
    CommentInfoCell *_commentCell;
    NSString *_requestUrl;
    NSMutableArray *_commentsArr;
    long long _Page;
    KSYD_NetworkManager *_netManager;
}

- (void).cxx_destruct;
- (void)KSYD_dismiss;
- (void)KSYD_newComments;
- (void)KSYD_selectedSegmentIndex:(id)arg1;
- (void)KSYD_setUpRefresh;
- (void)KSYD_setupCommentDetailView;
- (void)KSYD_setupNavBar;
@property(nonatomic) long long Page; // @synthesize Page=_Page;
@property(retain, nonatomic) CommentInfoCell *commentCell; // @synthesize commentCell=_commentCell;
@property(retain, nonatomic) KSYD_CommentModel *commentModel; // @synthesize commentModel=_commentModel;
@property(retain, nonatomic) NSMutableArray *commentsArr; // @synthesize commentsArr=_commentsArr;
@property(nonatomic) __weak UITableView *commentsDisplayListView; // @synthesize commentsDisplayListView=_commentsDisplayListView;
@property(nonatomic) _Bool isBecomeFirstRes; // @synthesize isBecomeFirstRes=_isBecomeFirstRes;
@property(nonatomic) _Bool isNew; // @synthesize isNew=_isNew;
@property(retain, nonatomic) KSYD_CommentModel *modelData; // @synthesize modelData=_modelData;
@property(retain, nonatomic) KSYD_NetworkManager *netManager; // @synthesize netManager=_netManager;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) __weak UISegmentedControl *sc; // @synthesize sc=_sc;
- (void)sendMessageSucceeded:(id)arg1;
@property(nonatomic) __weak CommentSendViewContainer *sendViewContainer; // @synthesize sendViewContainer=_sendViewContainer;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

