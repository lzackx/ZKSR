//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class CAShapeLayer, NSObject, UILabel;
@protocol OS_dispatch_source;

@interface XHLaunchAdButton : UIButton
{
    long long _skipType;
    double _leftRightSpace;
    double _topBottomSpace;
    UILabel *_timeLab;
    CAShapeLayer *_roundLayer;
    NSObject<OS_dispatch_source> *_roundTimer;
}

- (void).cxx_destruct;
- (void)cornerRadiusWithView:(id)arg1;
- (id)initWithSkipType:(long long)arg1;
@property(nonatomic) double leftRightSpace; // @synthesize leftRightSpace=_leftRightSpace;
@property(retain, nonatomic) CAShapeLayer *roundLayer; // @synthesize roundLayer=_roundLayer;
@property(copy, nonatomic) NSObject<OS_dispatch_source> *roundTimer; // @synthesize roundTimer=_roundTimer;
@property(nonatomic) long long skipType; // @synthesize skipType=_skipType;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
- (void)setTitleWithSkipType:(long long)arg1 duration:(long long)arg2;
@property(nonatomic) double topBottomSpace; // @synthesize topBottomSpace=_topBottomSpace;
- (void)startRoundDispathTimerWithDuration:(double)arg1;

@end
