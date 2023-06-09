//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CADisplayLink, CAShapeLayer, UIColor;

@interface JSWave : UIView
{
    double _waveCurvature;
    double _waveSpeed;
    double _waveHeight;
    UIColor *_realWaveColor;
    UIColor *_maskWaveColor;
    CDUnknownBlockType _waveBlock;
    CADisplayLink *_timer;
    CAShapeLayer *_realWaveLayer;
    CAShapeLayer *_maskWaveLayer;
    double _offset;
}

- (void).cxx_destruct;
- (void)awakeFromNib;
- (float)getSinfWithPercent:(float)arg1 widthX:(double)arg2;
- (id)init;
- (void)initData;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIColor *maskWaveColor; // @synthesize maskWaveColor=_maskWaveColor;
@property(retain, nonatomic) CAShapeLayer *maskWaveLayer; // @synthesize maskWaveLayer=_maskWaveLayer;
@property(nonatomic) double offset; // @synthesize offset=_offset;
@property(retain, nonatomic) UIColor *realWaveColor; // @synthesize realWaveColor=_realWaveColor;
@property(retain, nonatomic) CAShapeLayer *realWaveLayer; // @synthesize realWaveLayer=_realWaveLayer;
@property(retain, nonatomic) CADisplayLink *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType waveBlock; // @synthesize waveBlock=_waveBlock;
@property(nonatomic) double waveCurvature; // @synthesize waveCurvature=_waveCurvature;
@property(nonatomic) double waveHeight; // @synthesize waveHeight=_waveHeight;
@property(nonatomic) double waveSpeed; // @synthesize waveSpeed=_waveSpeed;
- (void)startWaveAnimation;
- (void)stopWaveAnimation;
- (void)wave;

@end

