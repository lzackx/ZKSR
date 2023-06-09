//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class IFMMenu, NSArray;

@interface IFMMenuView : UIView
{
    IFMMenu *_menu;
    long long _arrowDirection;
    NSArray *_menuItems;
    double _arrowPosition;
    UIView *_contentView;
}

- (void).cxx_destruct;
@property(nonatomic) long long arrowDirection; // @synthesize arrowDirection=_arrowDirection;
- (struct CGPoint)arrowPoint;
@property(nonatomic) double arrowPosition; // @synthesize arrowPosition=_arrowPosition;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (id)createImageWithColor:(id)arg1;
- (void)dealloc;
- (void)dismissMenu:(_Bool)arg1;
- (void)drawBackground:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)init;
- (id)makeContentView;
@property(retain, nonatomic) IFMMenu *menu; // @synthesize menu=_menu;
- (void)menuItemClick:(id)arg1;
@property(retain, nonatomic) NSArray *menuItems; // @synthesize menuItems=_menuItems;
- (void)setupFrameInView:(id)arg1 fromRect:(struct CGRect)arg2;
- (void)showMenuInView:(id)arg1 fromRect:(struct CGRect)arg2 menu:(id)arg3 menuItems:(id)arg4;

@end

