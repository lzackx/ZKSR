//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, YYSelectionGrabberDot;

@interface YYSelectionGrabber : UIView
{
    YYSelectionGrabberDot *_dot;
    unsigned long long _dotDirection;
    UIColor *_color;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(readonly, nonatomic) YYSelectionGrabberDot *dot; // @synthesize dot=_dot;
@property(nonatomic) unsigned long long dotDirection; // @synthesize dotDirection=_dotDirection;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (struct CGRect)touchRect;

@end

