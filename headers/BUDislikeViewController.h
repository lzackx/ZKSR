//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UITableView, UITapGestureRecognizer, UIView;

@interface BUDislikeViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    CDUnknownBlockType _dislikeResult;
    CDUnknownBlockType _cancel;
    long long _position;
    NSArray *_filterWords;
    NSArray *_topFilterWords;
    UITableView *_tableView;
    UITapGestureRecognizer *_cancelTapGesture;
    UIView *_backgorundView;
    long long _showType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *backgorundView; // @synthesize backgorundView=_backgorundView;
- (void)backgroundTapped:(id)arg1;
- (void)buildupView;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) UITapGestureRecognizer *cancelTapGesture; // @synthesize cancelTapGesture=_cancelTapGesture;
- (void)closeViewController;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(copy, nonatomic) CDUnknownBlockType dislikeResult; // @synthesize dislikeResult=_dislikeResult;
@property(copy, nonatomic) NSArray *filterWords; // @synthesize filterWords=_filterWords;
- (id)initViewControllerWithReasons:(id)arg1;
- (void)layoutTableView;
@property(nonatomic) long long position; // @synthesize position=_position;
- (void)pushSecondView:(id)arg1;
@property(nonatomic) long long showType; // @synthesize showType=_showType;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSArray *topFilterWords; // @synthesize topFilterWords=_topFilterWords;
- (_Bool)shouldAutorotate;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

