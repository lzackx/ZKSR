//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView;

@interface CommonMenuView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    UIView *_backView;
    double arrowPointX;
    CDUnknownBlockType _itemsClickBlock;
    CDUnknownBlockType _backViewTapBlock;
    long long _maxValueForItemCount;
    CommonMenuView *_selfMenu;
    UITableView *_contentTableView;
    NSMutableArray *_menuDataArray;
}

+ (void)appendMenuItemsWith:(id)arg1;
+ (void)clearMenu;
+ (id)createMenuWithFrame:(struct CGRect)arg1 target:(id)arg2 dataArray:(id)arg3 itemsClickBlock:(CDUnknownBlockType)arg4 backViewTap:(CDUnknownBlockType)arg5;
+ (void)hidden;
+ (void)showMenuAtPoint:(struct CGPoint)arg1;
+ (void)updateMenuItemsWith:(id)arg1;
- (void).cxx_destruct;
- (void)adjustPosition:(struct CGPoint)arg1;
@property(copy, nonatomic) CDUnknownBlockType backViewTapBlock; // @synthesize backViewTapBlock=_backViewTapBlock;
@property(retain, nonatomic) UITableView *contentTableView; // @synthesize contentTableView=_contentTableView;
- (void)displayAtPoint:(struct CGPoint)arg1;
- (id)getBorderLayer;
- (void)hiddenMenu;
- (id)initWithFrame:(struct CGRect)arg1;
@property(copy, nonatomic) CDUnknownBlockType itemsClickBlock; // @synthesize itemsClickBlock=_itemsClickBlock;
@property(nonatomic) long long maxValueForItemCount; // @synthesize maxValueForItemCount=_maxValueForItemCount;
@property(retain, nonatomic) NSMutableArray *menuDataArray; // @synthesize menuDataArray=_menuDataArray;
@property(retain, nonatomic) CommonMenuView *selfMenu; // @synthesize selfMenu=_selfMenu;
- (void)setUpLFUI;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tap:(id)arg1;
- (void)updateFrameForMenu;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

