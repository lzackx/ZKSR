//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BUDynamicAbstractDecorator.h"

@class BUDynamicAnimationModel;

@interface BUDynamicAnimationAbstractDecorator : BUDynamicAbstractDecorator
{
    BUDynamicAnimationModel *_animationModel;
}

+ (id)animationDecoratorWithAnimationModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) BUDynamicAnimationModel *animationModel; // @synthesize animationModel=_animationModel;
- (long long)animationStyle;
- (id)dynamicAnimation;
- (id)dynamicAnimationLayer;
- (void)render;
- (void)setScaleDirection:(long long)arg1 forView:(id)arg2;
- (id)timingFuntionNamefromDynamicAnimationModel:(id)arg1;

@end

