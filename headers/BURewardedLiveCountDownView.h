//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BURewardedLiveProgressView, NSTimer, UIImageView, UILabel;
@protocol BURewardedLiveCountDownViewDelegate;

@interface BURewardedLiveCountDownView : UIView
{
    long long _duration;
    long long _leftCount;
    id <BURewardedLiveCountDownViewDelegate> _delegate;
    UIView *_bgView;
    BURewardedLiveProgressView *_progressView;
    UIImageView *_iconView;
    UIView *_countDownContainer;
    UILabel *_countDownLabel;
    NSTimer *_timer;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UIView *countDownContainer; // @synthesize countDownContainer=_countDownContainer;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
- (void)creatSubViews;
- (void)dealloc;
@property(nonatomic) __weak id <BURewardedLiveCountDownViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
@property(nonatomic) long long leftCount; // @synthesize leftCount=_leftCount;
@property(retain, nonatomic) BURewardedLiveProgressView *progressView; // @synthesize progressView=_progressView;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
- (void)startTweenCountDown;
- (void)stopTweenCountDown;
- (void)updateCountDown:(long long)arg1 duration:(long long)arg2;
- (void)updateCountDownText;
- (void)updateLeftCount:(id)arg1;

@end

