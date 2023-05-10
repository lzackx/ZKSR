//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray;

@interface PYSearchSuggestionViewController : UITableViewController
{
    NSArray *_searchSuggestions;
    CDUnknownBlockType _didSelectCellBlock;
}

+ (id)searchSuggestionViewControllerWithDidSelectCellBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType didSelectCellBlock; // @synthesize didSelectCellBlock=_didSelectCellBlock;
- (long long)numberOfSectionsInTableView:(id)arg1;
@property(copy, nonatomic) NSArray *searchSuggestions; // @synthesize searchSuggestions=_searchSuggestions;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)viewDidLoad;

@end

