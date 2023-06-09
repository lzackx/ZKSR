//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "BUDislikeNewInputViewDelegate-Protocol.h"
#import "BUDislikeNewOptionalCellDelegate-Protocol.h"
#import "BUDislikePersonalPromptsDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class BUDislikeNewInputView, BUDislikePersonalPromptsView, BUMaterialMeta, NSArray, NSString, UIImageView, UITableView, UIView;

@interface BUDislikeNewViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, BUDislikeNewOptionalCellDelegate, BUDislikeNewInputViewDelegate, BUDislikePersonalPromptsDelegate>
{
    CDUnknownBlockType _dislikeResultBlock;
    CDUnknownBlockType _cancelBlock;
    NSArray *_dislikeWordsViewModelArray;
    UIView *_backgroundView;
    UITableView *_tableView;
    UIImageView *_arrowImageView;
    double _totalCellHeight;
    BUDislikePersonalPromptsView *_promptsView;
    BUDislikeNewInputView *_dislikeNewInputView;
    BUMaterialMeta *_meta;
    long long _lastDeviceOrientation;
    struct CGRect _startFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)backgroundViewAction:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void)close;
- (id)containerViewInDislikeNewInputView:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) BUDislikeNewInputView *dislikeNewInputView; // @synthesize dislikeNewInputView=_dislikeNewInputView;
- (void)dislikeNewInputView:(id)arg1 inputText:(id)arg2;
- (void)dislikeNewInputViewAction:(id)arg1;
- (void)dislikeNewOptionalCell:(id)arg1 selectedDislikeWords:(id)arg2;
- (void)dislikePersonalPromptsDidSelected:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType dislikeResultBlock; // @synthesize dislikeResultBlock=_dislikeResultBlock;
@property(copy, nonatomic) NSArray *dislikeWordsViewModelArray; // @synthesize dislikeWordsViewModelArray=_dislikeWordsViewModelArray;
- (id)initDislikeWithMaterial:(id)arg1 startFrame:(struct CGRect)arg2;
- (void)keyboardDidHideInDislikeNewInputView:(id)arg1;
- (void)keyboardDidShowInDislikeNewInputView:(id)arg1;
- (void)keyboardWillHideInDislikeNewInputView:(id)arg1;
- (void)keyboardWillShowInDislikeNewInputView:(id)arg1;
@property(nonatomic) long long lastDeviceOrientation; // @synthesize lastDeviceOrientation=_lastDeviceOrientation;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
@property(retain, nonatomic) BUMaterialMeta *meta; // @synthesize meta=_meta;
- (double)personalizationPromptsH;
@property(retain, nonatomic) BUDislikePersonalPromptsView *promptsView; // @synthesize promptsView=_promptsView;
@property(nonatomic) struct CGRect startFrame; // @synthesize startFrame=_startFrame;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) double totalCellHeight; // @synthesize totalCellHeight=_totalCellHeight;
- (_Bool)shouldAutorotate;
- (void)submitWithDislikeWords:(id)arg1;
- (void)submitWithText:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

