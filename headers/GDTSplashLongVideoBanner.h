//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIViewPropertyAnimator;
@protocol GDTSplashViewDelegate;

@interface GDTSplashLongVideoBanner : UIView
{
    id <GDTSplashViewDelegate> _delegate;
    UIView *_colorView;
    UILabel *_titleLabel;
    UIImageView *_arrowView;
    UIImageView *_animationView;
    UIViewPropertyAnimator *_animator;
    struct CGPoint _leftPoint;
    struct CGPoint _rightPoint;
}

+ (id)createSplashLongVideoBanner;
- (void).cxx_destruct;
- (void)GDTfunctionb1NT0Y;
- (void)GDTfunctionf9tEv4;
- (void)GDTfunctionn2q30X;
- (id)GDTfunctiono7e8YT:(id)arg1;
- (void)GDTfunctionz2iIW1;
@property(retain, nonatomic) UIImageView *animationView; // @synthesize animationView=_animationView;
@property(retain, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) UIImageView *arrowView; // @synthesize arrowView=_arrowView;
@property(retain, nonatomic) UIView *colorView; // @synthesize colorView=_colorView;
@property(nonatomic) __weak id <GDTSplashViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGPoint leftPoint; // @synthesize leftPoint=_leftPoint;
@property(nonatomic) struct CGPoint rightPoint; // @synthesize rightPoint=_rightPoint;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
