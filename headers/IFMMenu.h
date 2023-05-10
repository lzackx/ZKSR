//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IFMMenuView, NSMutableArray, UIColor, UIFont;

@interface IFMMenu : NSObject
{
    _Bool _showShadow;
    _Bool _observing;
    UIColor *_titleColor;
    UIFont *_titleFont;
    UIColor *_menuBackGroundColor;
    UIColor *_segmenteLineColor;
    double _arrowHight;
    double _menuCornerRadiu;
    double _minMenuItemHeight;
    double _minMenuItemWidth;
    double _gapBetweenImageTitle;
    long long _menuBackgroundStyle;
    long long _menuSegmenteLineStyle;
    NSMutableArray *_menuItems;
    IFMMenuView *_menuView;
    struct UIEdgeInsets _edgeInsets;
}

- (void).cxx_destruct;
- (void)addMenuItem:(id)arg1;
@property(nonatomic) double arrowHight; // @synthesize arrowHight=_arrowHight;
- (void)dealloc;
- (void)dismissMenu;
@property(nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property(nonatomic) double gapBetweenImageTitle; // @synthesize gapBetweenImageTitle=_gapBetweenImageTitle;
- (id)init;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 BackgroundStyle:(long long)arg2;
@property(retain, nonatomic) UIColor *menuBackGroundColor; // @synthesize menuBackGroundColor=_menuBackGroundColor;
@property(nonatomic) long long menuBackgroundStyle; // @synthesize menuBackgroundStyle=_menuBackgroundStyle;
@property(nonatomic) double menuCornerRadiu; // @synthesize menuCornerRadiu=_menuCornerRadiu;
@property(retain, nonatomic) NSMutableArray *menuItems; // @synthesize menuItems=_menuItems;
@property(nonatomic) long long menuSegmenteLineStyle; // @synthesize menuSegmenteLineStyle=_menuSegmenteLineStyle;
@property(nonatomic) __weak IFMMenuView *menuView; // @synthesize menuView=_menuView;
@property(nonatomic) double minMenuItemHeight; // @synthesize minMenuItemHeight=_minMenuItemHeight;
@property(nonatomic) double minMenuItemWidth; // @synthesize minMenuItemWidth=_minMenuItemWidth;
@property(nonatomic) _Bool observing; // @synthesize observing=_observing;
- (void)orientationWillChange:(id)arg1;
@property(retain, nonatomic) UIColor *segmenteLineColor; // @synthesize segmenteLineColor=_segmenteLineColor;
@property(nonatomic) _Bool showShadow; // @synthesize showShadow=_showShadow;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
- (void)showFromNavigationController:(id)arg1 WithX:(double)arg2;
- (void)showFromRect:(struct CGRect)arg1 inView:(id)arg2;
- (void)showFromTabBarController:(id)arg1 WithX:(double)arg2;

@end
