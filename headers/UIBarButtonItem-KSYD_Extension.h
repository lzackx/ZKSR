//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIBarButtonItem.h>

#import "WZLBadgeProtocol-Protocol.h"

@class NSString, UIColor, UIFont, UILabel;

@interface UIBarButtonItem (KSYD_Extension) <WZLBadgeProtocol>
+ (id)barButtonItemWithImage:(id)arg1 pressImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)itemWithCustomImage:(id)arg1 highImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
+ (id)itemWithImage:(id)arg1 highImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
@property(nonatomic) unsigned long long aniType;
@property(retain, nonatomic) UILabel *badge;
@property(retain, nonatomic) UIColor *badgeBgColor;
@property(nonatomic) struct CGPoint badgeCenterOffset;
@property(retain, nonatomic) UIFont *badgeFont;
@property(nonatomic) struct CGRect badgeFrame;
@property(nonatomic) long long badgeMaximumBadgeNumber;
@property(retain, nonatomic) UIColor *badgeTextColor;
- (void)clearBadge;
- (id)getActualBadgeSuperView;
- (id)initWithImage:(id)arg1 pressImage:(id)arg2 target:(id)arg3 action:(SEL)arg4;
- (void)resumeBadge;
- (void)showBadge;
- (void)showBadgeWithStyle:(unsigned long long)arg1 value:(long long)arg2 animationType:(unsigned long long)arg3;

// Remaining properties
@property(nonatomic) double badgeRadius;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

