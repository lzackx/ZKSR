//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GDTAntiSpamClickData, UIImageView, UILabel;
@protocol GDTSplashInteractionViewDelegate;

@interface GDTSplashInteractionView : UIView
{
    CDUnknownBlockType _invalidAreaBlock;
    long long _interactDirection;
    id <GDTSplashInteractionViewDelegate> _delegate;
    long long _delayTime;
    UIView *_gestureView;
    UILabel *_slideTipLabel;
    UIImageView *_slideLineView;
    UIImageView *_slideHandView;
    GDTAntiSpamClickData *_clickData;
    struct CGPoint _startPoint;
    struct CGPoint _endPoint;
}

- (void).cxx_destruct;
- (_Bool)GDTfunctionf8NWdZ;
- (void)GDTfunctionn2rMyv:(double)arg1;
- (id)GDTfunctiono7e8YT:(id)arg1;
- (void)GDTfunctionw5IyM6;
- (void)GDTfunctiony7t9nc:(_Bool)arg1;
@property(retain, nonatomic) GDTAntiSpamClickData *clickData; // @synthesize clickData=_clickData;
@property(nonatomic) long long delayTime; // @synthesize delayTime=_delayTime;
@property(nonatomic) __weak id <GDTSplashInteractionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGPoint endPoint; // @synthesize endPoint=_endPoint;
@property(retain, nonatomic) UIView *gestureView; // @synthesize gestureView=_gestureView;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initLj4IMLg;
- (id)initLy6k8Fq:(struct CGRect)arg1 interacDirection:(long long)arg2 delegate:(id)arg3 delayTime:(long long)arg4;
@property(nonatomic) long long interactDirection; // @synthesize interactDirection=_interactDirection;
@property(copy, nonatomic) CDUnknownBlockType invalidAreaBlock; // @synthesize invalidAreaBlock=_invalidAreaBlock;
@property(retain, nonatomic) UIImageView *slideHandView; // @synthesize slideHandView=_slideHandView;
@property(retain, nonatomic) UIImageView *slideLineView; // @synthesize slideLineView=_slideLineView;
@property(retain, nonatomic) UILabel *slideTipLabel; // @synthesize slideTipLabel=_slideTipLabel;
@property(nonatomic) struct CGPoint startPoint; // @synthesize startPoint=_startPoint;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

