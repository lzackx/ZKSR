//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CAAnimationDelegate-Protocol.h"

@class CAShapeLayer, NSString, UIImageView, UILabel;
@protocol BU_ASValuePopUpViewDelegate;

@interface BU_ASValuePopUpView : UIView <CAAnimationDelegate>
{
    _Bool _shouldAnimate;
    double _animDuration;
    CAShapeLayer *_pathLayer;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    double _arrowCenterOffset;
    CAShapeLayer *_colorAnimLayer;
    id <BU_ASValuePopUpViewDelegate> _delegate;
    double _cornerRadius;
    double _arrowLength;
    double _widthPaddingFactor;
    double _heightPaddingFactor;
}

+ (Class)layerClass;
- (void).cxx_destruct;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)animateBlock:(CDUnknownBlockType)arg1;
- (void)animationDidStart:(id)arg1;
@property(nonatomic) double arrowLength; // @synthesize arrowLength=_arrowLength;
- (id)color;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) __weak id <BU_ASValuePopUpViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double heightPaddingFactor; // @synthesize heightPaddingFactor=_heightPaddingFactor;
- (void)hideAnimated:(_Bool)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)opaqueColor;
- (id)pathForRect:(struct CGRect)arg1 withArrowOffset:(double)arg2;
- (void)setAnimatedColors:(id)arg1 withKeyTimes:(id)arg2;
- (void)setAnimationOffset:(double)arg1 returnColor:(CDUnknownBlockType)arg2;
- (void)setColor:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 arrowOffset:(double)arg2;
- (void)setImage:(id)arg1;
- (void)setText:(id)arg1;
@property(nonatomic) double widthPaddingFactor; // @synthesize widthPaddingFactor=_widthPaddingFactor;
- (void)showAnimated:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

